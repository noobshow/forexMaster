#include "Session.hpp"
#include "../Tags.hpp"
#include <cstring>

namespace FIX
{
    Session::Session() 
    : recvQueue(100)
    {
        receiver = nullptr;
        sendBuff = nullptr;
        heartbeatThread = nullptr;
        resendThread = nullptr;
        isTimeToStop = false;
    }
    
    bool Session::start(const char* serverHostName, int port,  //ex. 127.0.0.1, 1234
               const char* senderCompIDIn, const char* senderSubIDIn, // fxpig.12345, QUOTE
               const char* targetCompIDIn, const char* targetSubIDIn, // CSERVER, QUOTE
               const char* userName,     const char* userPassword)   // 12345, pa55word!
    {
        senderCompID = senderCompIDIn;
        senderSubID = senderCompIDIn;
        targetCompID = targetCompIDIn;
        targetSubID = targetSubIDIn;
        username = userName;
        password = userPassword;
        
        if(socket.connectTo(serverHostName, port))
            logg << "Succesfully connected to server " << serverHostName << ":" << port << "\n";
        else
        {
            logg << "Failed to connect to server " << serverHostName << ":" << port << "\n";
            return false;
        }

        receiver = new Receiver(this, socket);

        sendBuff = (char*)malloc(1024*1024); //Messages >1MB are not supported
        std::string msgBegin;
        msgBegin += "8=FIX.4.4";
        msgBegin += FIX::SOH;
        msgBegin += "9=12345";
        msgBegin += FIX::SOH;
        strcpy(sendBuff, msgBegin.c_str());
        sendBuffContentStart = sendBuff + msgBegin.size();

        msgSeqNum = 1;
        heartbeatFrequency = 30;

        bool result = this->login();
        
        if(!result)
            this->finish();

        return result;
    }

    //LOGIN
    bool Session::login()
    {
        logg << "Logging in...\n";

        int lastMessageIndexBeforeSend = getLastMessageIndex();

        sendNextMessage(
            FIX::MsgType::tagValLogon,
            FIX::EncryptMethod::tagValNoneOrOther,
            FIX::HeartBtInt::tagVal(heartbeatFrequency),
            FIX::ResetSeqNumFlag::tagValYesResetSequenceNumbers,
            FIX::Username::tagVal(username.c_str()),
            FIX::Password::tagVal(password.c_str())
        );

        bool waitRes = waitForMessage(500, [](const Message& m)->bool{
           return (m.isMsgType(FIX::MsgType::valLogon));
        },
        lastMessageIndexBeforeSend);

        if(waitRes == false) //no response
        {
            return false;
        }
        else
        {
            //start heartbeat handling
            heartbeatThread = new std::thread([this](){this->handleHeartbeat();});

            //Start resend handling
            resendThread = new std::thread([this](){this->handleResending();});
            
            return true;
        }
    }

    void Session::finish()
    {
        isTimeToStop = true;
        if(receiver != nullptr)
        {
            receiver->finish();
            delete receiver;
            receiver = nullptr;
        }
    }

    Session::~Session()
    {
        finish();
        if(sendBuff != nullptr)
            free(sendBuff);
    }

    void Session::addTagVal(const char* tagVal, char*& last){
        last = strcpy(last, tagVal) + strlen(tagVal);
        *(last++) = FIX::SOH;
    };

    void Session::onNewMessage(Message&& msg)
    {
        logg << "\nReceived new message!\n";
        for(auto& tagVal : msg.tagVals)
            logg << toHuman(tagVal.tag, tagVal.val) << '\n';
        logg << '\n';

        recvQueueLock.lock();
        recvQueue.emplace(std::move(msg));
        recvQueueLock.unlock();

        newMessageLock.lock();
        newMessage.notify_all();
        newMessageLock.unlock();
    }

    bool Session::waitForMessage(int timeoutMS,
                                 const std::function<bool (const Message& m)>& evalFunc,
                                 int& lastCheckedIndex)
    {
        // Checks out messages from lastCheckedIndex to newest and returns true if 
        // the one waited for is found
        auto checkOutNewMessages = [this, &lastCheckedIndex, &evalFunc]()
        ->bool{
            std::shared_lock recvQueueLockGouard(recvQueueLock);

            int start = lastCheckedIndex+1;
            if(start < recvQueue.beginIndex())
                start = recvQueue.beginIndex();

            for(int curMsgIndex = start; curMsgIndex < recvQueue.endIndex(); curMsgIndex++)
            {
                lastCheckedIndex = curMsgIndex;
                const Message& cur = recvQueue[curMsgIndex];
                if(evalFunc(cur))
                    return true;
            }

            return false;
        };

        //Check out existing messages
        if(!recvQueue.empty())
            if(checkOutNewMessages())
                return true;

        auto untilTimeout = clock::now() + std::chrono::milliseconds(timeoutMS);
        while(true)
        {
            //Wait for new messages
            std::unique_lock<std::mutex> newMessageLockGuard(newMessageLock);

            auto waitRes = newMessage.wait_until(newMessageLockGuard, untilTimeout);

            newMessageLockGuard.unlock();

            if(waitRes == std::cv_status::timeout)
                return false;
            
            if(checkOutNewMessages())
                return true;
        }
    }

    void Session::doForNewMessages(const std::function<void (const Message& m)>& doFunc)
    {
        recvQueueLock.lock_shared();
        int lastCheckedIndex = recvQueue.beginIndex();
        recvQueueLock.unlock_shared();

        auto doForNewMessages = [this, &lastCheckedIndex, &doFunc]()
        {
            std::shared_lock recvQueueLockGouard(recvQueueLock);

            int start = lastCheckedIndex+1;
            if(start < recvQueue.beginIndex())
                start = recvQueue.beginIndex();

            for(int curMsgIndex = start; curMsgIndex < recvQueue.endIndex(); curMsgIndex++)
            {
                lastCheckedIndex = curMsgIndex;                
                doFunc(recvQueue[curMsgIndex]);
            }
        };

        if(!recvQueue.empty())
            doForNewMessages();

        while(!isTimeToStop)
        {
            std::unique_lock newMessageLockGuard(newMessageLock);

            auto waitRes = newMessage.wait_for(newMessageLockGuard, std::chrono::milliseconds(500));

            newMessageLockGuard.unlock();

            if(waitRes != std::cv_status::timeout)
                doForNewMessages();
        }
    }

    int Session::getLastMessageIndex()
    {
        std::shared_lock recvQueueLockGuard(recvQueueLock);
        return recvQueue.endIndex()-1;
    }


//LOGOUT
    void Session::logout()
    {
        sendNextMessage(
            FIX::MsgType::tagValLogout
        );
    }

//HEARTBEAT
    void Session::handleHeartbeat()
    {       
        timePoint lastHeartbeatTime = clock::now();
        timePoint lastRecvHeartbeatTime = clock::now();

        doForNewMessages([&lastHeartbeatTime, &lastRecvHeartbeatTime, this]
        (const Message& msg)
        {

        //If received TestRequest answer it
        if(msg.isMsgType(FIX::MsgType::valTestRequest))
        {
            const char* testReqID = "error_not_found";
            for(auto tagVal : msg.tagVals)
            if(tagVal.tag == FIX::TestReqID::tag)
            {
                testReqID = tagVal.val;
                break;
            }

            sendNextMessage(
                FIX::MsgType::tagValHeartbeat,
                FIX::TestReqID::tagVal(testReqID)
            );

            lastHeartbeatTime = clock::now();
        }

        // Received heartbeat
        if(msg.isMsgType(FIX::MsgType::valHeartbeat))
        {
            lastRecvHeartbeatTime = clock::now();
        }

        //If its time to send heartbeat do it
        if(std::chrono::duration<float>(clock::now() - lastHeartbeatTime).count() >= heartbeatFrequency)
        {
            sendNextMessage(
                FIX::MsgType::tagValHeartbeat
            );

            lastHeartbeatTime = clock::now();
        }

        //If server didnt send heartbeat in time send TestRequest
        if(std::chrono::duration<float>(clock::now() - lastRecvHeartbeatTime).count() > heartbeatFrequency+1)
        {
            sendNextMessage(
                FIX::MsgType::tagValTestRequest,
                FIX::TestReqID::tagVal("TEST")
            );
        }

        //If last heartbeat was twice the frequency then connection is down -> finish
        if(std::chrono::duration<float>(clock::now() - lastRecvHeartbeatTime).count() > 2*heartbeatFrequency)
        {
            isTimeToStop = true;
        }
        });
    }

    //RESENDING
    void Session::handleResending()
    {
        int serverMsgSeqNum = 1;

        doForNewMessages([this, &serverMsgSeqNum]
        (const Message& msg)
        {

        int curServerMsgSeqNum = FIX::intOfStr(msg.tagVals[7].val);
        if(curServerMsgSeqNum > serverMsgSeqNum+1) //Missed messages
        {
            //Ask for resending
            this->sendNextMessage(
            FIX::MsgType::tagValResendRequest,
            FIX::BeginSeqNo::tagVal(serverMsgSeqNum+1),
            FIX::EndSeqNo::tagVal(curServerMsgSeqNum-1)
            );
        }
        serverMsgSeqNum = curServerMsgSeqNum;

        if(!msg.isMsgType(FIX::MsgType::valResendRequest))
            return;

        int from = 1, to = 1;

        //This could be done better (just pick right indexes) //TODO
        for(auto&& tagVal : msg.tagVals)
        {
            if(tagVal.tag == FIX::BeginSeqNo::tag)
                from = FIX::intOfStr(tagVal.val);

            if(tagVal.tag == FIX::EndSeqNo::tag)
                from = FIX::intOfStr(tagVal.val);    
        }

        if(to == 0)
            to = msgSeqNum;

        if(from > to || (to - from > 100))
        {
            //OOps
            return;
        }

        for(int i = from; i <= to; i++)
        {
            auto findRes = sendMessages.find(i);

            // If message hasnt been deleted then resend it
            // otherwise send GapFill
            if(findRes != sendMessages.end())
            {
                sendLock.lock();
                socket.send(&findRes->second[0], findRes->second.size());
                sendLock.unlock();
            }
            else
            {
                sendNextMessage(FIX::MsgType::tagValSequenceReset,
                FIX::GapFillFlag::tagValGapFillMessageMsgSeqNumFieldValid);
            }
        }
        });
    }

} //namespace FIX
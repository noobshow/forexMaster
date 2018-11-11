#include "Session.hpp"

namespace FIX
{
    Session::Session()
    {
        receiver = nullptr;
        sendBuff = nullptr;
        heartbeatThread = nullptr;
        isTimeToStop = false;
    }
    
    bool Session::start(const char* serverHostName, int port, const char* login, const char* password)
    {
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
        msgBegin += FIX::BeginString::tagValFIX44; 
        msgBegin += FIX::SOH;
        msgBegin += "9=12345";
        msgBegin += FIX::SOH;
        strcpy(sendBuff, msgBegin.c_str());
        sendBuffContentStart = sendBuff + msgBegin.size();

        msgSeqNum = 1;
        heartbeatFrequency = 30;

        return this->login();
    }

    void Session::finish()
    {
        //Logout
        isTimeToStop = true;
        if(receiver != nullptr)
        {
            receiver->finish();
            delete receiver;
            receiver = nullptr;
        }
        if(heartbeatThread != nullptr)
        {
            heartbeatThread->join();
            delete heartbeatThread;
        }
        //Disconnect
    }

    Session::~Session()
    {
        finish();
        if(sendBuff != nullptr)
            free(sendBuff);
    }

    void Session::onNewMessage(Message&& msg)
    {
        logg << "\nReceived new message!\n";
        for(auto& tagVal : msg.tagVals)
            logg << toHuman(tagVal.tag, tagVal.val) << '\n';
        logg << '\n';

        recvQueueLock.lock();
        recvQueue.emplace_front(std::move(msg));
        recvQueueLock.unlock();

        newMessageLock.lock();
        newMessage.notify_all();
        newMessageLock.unlock();
    }


    const Session::Message* Session::waitForMessage(int timeoutMS,
                                  const bool (*evalFunc)(const Message& m),
                                  timePoint fromWhen)
    {
        const Message* result = nullptr;
        auto lastProccesedTime = fromWhen;

        recvQueueLock.lock_shared();
        for(const Message& m : recvQueue)
        {
            if(m.recvTime > lastProccesedTime)
            {
                if(evalFunc(m))
                {
                    result = &m;
                    break;
                }
            }
            else
                break;
        }

        if(!recvQueue.empty())
            lastProccesedTime = recvQueue.begin()->recvTime;
        recvQueueLock.unlock_shared();
        
        if(result != nullptr)
            return result;

        auto untilTimeout = clock::now() + std::chrono::milliseconds(timeoutMS);
        while(true)
        {
            //Wait for new messages
            std::unique_lock<std::mutex> newMessageLockGuard(newMessageLock);

            auto waitRes = newMessage.wait_until(newMessageLockGuard, untilTimeout);

            if(waitRes == std::cv_status::timeout)
                return nullptr;

            recvQueueLock.lock_shared();
            newMessageLock.unlock();

            // Check out new messages
            for(const Message& m : recvQueue)
            {
                if(m.recvTime > lastProccesedTime)
                {
                    if(evalFunc(m))
                    {
                        result = &m;
                        break;
                    }
                }
                else
                    break;
            }

            if(!recvQueue.empty())
                lastProccesedTime = recvQueue.begin()->recvTime;

            recvQueueLock.unlock_shared();
        
            if(result != nullptr)
                return result;
        }

        return nullptr;
    }
    

    bool Session::login()
    {
        logg << "Logging in...\n";

        auto curTime = FIX::getCurUTCDateAndTime();
        auto sendTime = clock::now();

        sendMessage(
            FIX::MsgType::tagValLogon,
            FIX::SenderCompID::tagVal("fxpig.3001287"),
            FIX::TargetCompID::tagVal("CSERVER"),
            FIX::TargetSubID::tagVal("QUOTE"),
            FIX::SenderSubID::tagVal("QUOTE"),
            FIX::MsgSeqNum::tagVal(msgSeqNum++),
            FIX::SendingTime::tagVal(curTime.day, curTime.month, curTime.year, curTime.hour, curTime.minute, curTime.second),
            FIX::EncryptMethod::tagValNoneOrOther,
            FIX::HeartBtInt::tagVal(heartbeatFrequency),
            FIX::ResetSeqNumFlag::tagValYesResetSequenceNumbers,
            FIX::Username::tagVal("3001287"),
            FIX::Password::tagVal("thisIsATemporaryPassword1337")
        );

        const Message*  waitRes = waitForMessage(500, [](const Message& m)->const bool{
            if(strcmp(m.tagVals[2].val, FIX::MsgType::valLogon) == 0)
                return true;

            return false;
        },
        sendTime);

        if(waitRes == nullptr)
        {
            return false;
        }
        else
        {
            heartbeatThread = new std::thread([this](){this->handleHeartbeat();});
            return true;
        }
    }

    void Session::logout()
    {
        socket.close(); //lol //TODO
        //sendMessage();
    }

    void Session::handleHeartbeat()
    {       
        timePoint lastHeartbeatTime;

        //Helper function to send heartbeat
        auto sendHeartbeat = [this, &lastHeartbeatTime](){
            auto curTime = FIX::getCurUTCDateAndTime();

            sendMessage(
                FIX::MsgType::tagValHeartbeat,
                FIX::SenderCompID::tagVal("fxpig.3001287"),
                FIX::TargetCompID::tagVal("CSERVER"),
                FIX::TargetSubID::tagVal("QUOTE"),
                FIX::SenderSubID::tagVal("QUOTE"),
                FIX::MsgSeqNum::tagVal(msgSeqNum++),
                FIX::SendingTime::tagVal(curTime.day, curTime.month, curTime.year, curTime.hour, curTime.minute, curTime.second)
            );

            lastHeartbeatTime = clock::now();
        };

        // Send first heartbeat just to set lastHeartbeatTime
        sendHeartbeat();

        while(!isTimeToStop) //Session finishing
        {
            // Wait for possible TestRequestMesages
            auto waitRes = waitForMessage(500, [](const Message& msg)->const bool{
                if(!strcmp(msg.tagVals[2].val, FIX::MsgType::valTestRequest))
                    return true;
                else
                    return false;
            });

            if(isTimeToStop)
                return;

            if(std::chrono::duration<float>(clock::now() - lastHeartbeatTime).count() >= heartbeatFrequency
            || waitRes != nullptr) //testRequest
            {
                sendHeartbeat();
            }
        }
    }
}
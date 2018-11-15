#include "QuoteSession.hpp"
#include "../Tags.hpp"

namespace FIX
{
    QuoteSession::QuoteSession()
    {
        heartbeatThread = nullptr;
    }

    QuoteSession::~QuoteSession()
    {
        finish();
    }
    
    void QuoteSession::finish()
    {
        ((Session*)this)->finish();

        static bool logoutSent = false;

        if(!socket.hasDisconnected() && !logoutSent)
        {
            //Here should actually send logout //TODO
            socket.close();
            logoutSent = true;
        }

        if(heartbeatThread != nullptr)
        {
            heartbeatThread->join();
            delete heartbeatThread;
            heartbeatThread = nullptr;
        }

        if(resendThread != nullptr)
        {
            resendThread->join();
            delete resendThread;
            resendThread = nullptr;
        }
    }

    bool QuoteSession::start(const char* serverHostName, int port, const char* login, const char* password)
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

        bool result = this->login();
        
        if(!result)
            this->finish();

        return result;
    }

//LOGIN
    bool QuoteSession::login()
    {
        logg << "Logging in...\n";

        auto sendTime = clock::now();

        sendNextMessage(
            FIX::MsgType::tagValLogon,
            FIX::EncryptMethod::tagValNoneOrOther,
            FIX::HeartBtInt::tagVal(heartbeatFrequency),
            FIX::ResetSeqNumFlag::tagValYesResetSequenceNumbers,
            FIX::Username::tagVal("3001287"),
            FIX::Password::tagVal("thisIsATemporaryPassword1337")
        );

        const Message*  waitRes = waitForMessage(500, [](const Message& m)->bool{
            if(m.isMsgType(FIX::MsgType::valLogon))
                return true;

            return false;
        },
        sendTime);

        if(waitRes == nullptr) //no response
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

//LOGOUT
    void QuoteSession::logout()
    {
        sendNextMessage(
            FIX::MsgType::tagValLogout
        );
    }

//HEARTBEAT
    void QuoteSession::handleHeartbeat()
    {       
        timePoint lastHeartbeatTime = clock::now();
        timePoint lastRecvHeartbeatTime = clock::now();

        while(!isTimeToStop) //Session finishing
        {
            // Wait for possible TestRequestMesages
            const Message* waitRes = waitForMessage(500, [](const Message& msg)->bool{
                if(msg.isMsgType(FIX::MsgType::valTestRequest)
                || msg.isMsgType(FIX::MsgType::valHeartbeat))
                    return true;
                else
                    return false;
            });

            if(isTimeToStop)
                return;

            //If received TestRequest answer it
            if(waitRes != nullptr && waitRes->isMsgType(FIX::MsgType::valTestRequest))
            {
                const char* testReqID = "error_not_found";
                for(auto tagVal : waitRes->tagVals)
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

            if(waitRes != nullptr && waitRes->isMsgType(FIX::MsgType::valHeartbeat))
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
        }
    }

//RESENDING
    void QuoteSession::handleResending()
    {
        timePoint lastChecked = clock::now();
        int serverMsgSeqNum = 1;

        while(!isTimeToStop)
        {
            const Message* waitRes = waitForMessage(500, 
                [&lastChecked, &serverMsgSeqNum, this](const Message& m)->bool{
                    lastChecked = m.recvTime;

                    int curServerMsgSeqNum = FIX::intOfStr(m.tagVals[7].val);
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

                   if(m.isMsgType(FIX::MsgType::valResendRequest))
                        return true;
                    else
                        return false;
                }, lastChecked);

        if(waitRes == nullptr)
            continue;

        int from = 1, to = 1;

        for(auto&& tagVal : waitRes->tagVals)
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
            continue;
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

        }
    }


    //SUBSCRIPTION
    void QuoteSession::subscribeForCurrency(void (*callbackFunc)(float bid, float ask))
    {
        timePoint sendTime = clock::now();

        sendNextMessage(
            FIX::MsgType::tagValMarketDataRequest,
            FIX::MDReqID::tagVal("TEST"),
            FIX::SubscriptionRequestType::tagValSnapshotplusUpdates,
            FIX::MarketDepth::tagValTopOfBook, //What does it do? //TODO
            FIX::MDUpdateType::tagValIncrementalRefresh,

            FIX::NoRelatedSym::tagVal(1), // <- how many symbols
            FIX::Symbol::tagVal("1"),
            FIX::NoMDEntryTypes::tagVal(2),
            FIX::MDEntryType::tagValBid,
            FIX::MDEntryType::tagValOffer
        );

    }
} //namespace FIX
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

        int lastMessageIndexBeforeSend = getLastMessageIndex();

        sendNextMessage(
            FIX::MsgType::tagValLogon,
            FIX::EncryptMethod::tagValNoneOrOther,
            FIX::HeartBtInt::tagVal(heartbeatFrequency),
            FIX::ResetSeqNumFlag::tagValYesResetSequenceNumbers,
            FIX::Username::tagVal("3001287"),
            FIX::Password::tagVal("thisIsATemporaryPassword1337")
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
    void QuoteSession::handleResending()
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


    //SUBSCRIPTION
    void QuoteSession::subscribeForCurrency(const char* currencySymbol, 
    std::function<void (float, float)> callbackFunc)
    {
        sendNextMessage(
            FIX::MsgType::tagValMarketDataRequest,
            FIX::MDReqID::tagVal("TEST"),
            FIX::SubscriptionRequestType::tagValSnapshotplusUpdates,
            FIX::MarketDepth::tagValTopOfBook, //What does it do? //TODO
            FIX::MDUpdateType::tagValIncrementalRefresh,

            FIX::NoRelatedSym::tagVal(1), // <- how many symbols
            FIX::Symbol::tagVal(currencySymbol),
            FIX::NoMDEntryTypes::tagVal(2),
            FIX::MDEntryType::tagValBid,
            FIX::MDEntryType::tagValOffer
        );

            /*
            Possible FxPig SymbolIDs:
            EURUSD 1
            GBPUSD 2
            EURJPY 3
            USDJPY 4
            AUDUSD 5
            USDCHF 6
            GBPJPY 7
            USDCAD 8
            EURGBP 9
            EURCHF 10
            AUDJPY 11
            */

    }
} //namespace FIX
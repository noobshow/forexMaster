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

        return this->login();
    }

//LOGIN
    bool QuoteSession::login()
    {
        logg << "Logging in...\n";

        auto sendTime = clock::now();

        sendMessage(
            FIX::MsgType::tagValLogon,
            FIX::SenderCompID::tagVal("fxpig.3001287"),
            FIX::TargetCompID::tagVal("CSERVER"),
            FIX::TargetSubID::tagVal("QUOTE"),
            FIX::SenderSubID::tagVal("QUOTE"),
            FIX::MsgSeqNum::tagVal(msgSeqNum++),
            FIX::SendingTime::tagVal(FIX::getUTCDateAndTime()),
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

        if(waitRes == nullptr) //no response
        {
            return false;
        }
        else
        {
            //start heartbeat handling
            heartbeatThread = new std::thread([this](){this->handleHeartbeat();});
            return true;
        }
    }

//LOGOUT
    void QuoteSession::logout()
    {
        sendMessage(
            FIX::MsgType::tagValLogout,
            FIX::SenderCompID::tagVal("fxpig.3001287"),
            FIX::TargetCompID::tagVal("CSERVER"),
            FIX::TargetSubID::tagVal("QUOTE"),
            FIX::SenderSubID::tagVal("QUOTE"),
            FIX::MsgSeqNum::tagVal(msgSeqNum++),
            FIX::SendingTime::tagVal(FIX::getUTCDateAndTime())
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
            const Message* waitRes = waitForMessage(500, [](const Message& msg)->const bool{
                if(!strcmp(msg.tagVals[2].val, FIX::MsgType::valTestRequest)
                || !strcmp(msg.tagVals[2].val, FIX::MsgType::valHeartbeat))
                    return true;
                else
                    return false;
            });

            if(isTimeToStop)
                return;

            //If received TestRequest answer it
            if(waitRes != nullptr && !strcmp(waitRes->tagVals[2].val, FIX::MsgType::valTestRequest))
            {
                const char* testReqID = "error_not_found";
                for(auto tagVal : waitRes->tagVals)
                if(tagVal.tag == FIX::TestReqID::tag)
                {
                    testReqID = tagVal.val;
                    break;
                }

                sendMessage(
                    FIX::MsgType::tagValHeartbeat,
                    FIX::SenderCompID::tagVal("fxpig.3001287"),
                    FIX::TargetCompID::tagVal("CSERVER"),
                    FIX::TargetSubID::tagVal("QUOTE"),
                    FIX::SenderSubID::tagVal("QUOTE"),
                    FIX::MsgSeqNum::tagVal(msgSeqNum++),
                    FIX::SendingTime::tagVal(FIX::getUTCDateAndTime()),
                    FIX::TestReqID::tagVal(testReqID)
                );

                lastHeartbeatTime = clock::now();
            }

            if(waitRes != nullptr && !strcmp(waitRes->tagVals[2].val, FIX::MsgType::valHeartbeat))
            {
                lastRecvHeartbeatTime = clock::now();
            }

            //If its time to send heartbeat do it
            if(std::chrono::duration<float>(clock::now() - lastHeartbeatTime).count() >= heartbeatFrequency)
            {
                sendMessage(
                    FIX::MsgType::tagValHeartbeat,
                    FIX::SenderCompID::tagVal("fxpig.3001287"),
                    FIX::TargetCompID::tagVal("CSERVER"),
                    FIX::TargetSubID::tagVal("QUOTE"),
                    FIX::SenderSubID::tagVal("QUOTE"),
                    FIX::MsgSeqNum::tagVal(msgSeqNum++),
                    FIX::SendingTime::tagVal(FIX::getUTCDateAndTime())
                );

                lastHeartbeatTime = clock::now();
            }

            //If server didnt send heartbeat in time send TestRequest
            if(std::chrono::duration<float>(clock::now() - lastRecvHeartbeatTime).count() > heartbeatFrequency+1)
            {
                sendMessage(
                    FIX::MsgType::tagValTestRequest,
                    FIX::SenderCompID::tagVal("fxpig.3001287"),
                    FIX::TargetCompID::tagVal("CSERVER"),
                    FIX::TargetSubID::tagVal("QUOTE"),
                    FIX::SenderSubID::tagVal("QUOTE"),
                    FIX::MsgSeqNum::tagVal(msgSeqNum++),
                    FIX::SendingTime::tagVal(FIX::getUTCDateAndTime()),
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

} //namespace FIX
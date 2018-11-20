#pragma once
#include "Session.hpp"
#include "../Tags.hpp"
#include <functional>

namespace FIX
{

class QuoteSession : public Session
{
public:
    QuoteSession();

    bool start(const char* serverHostName, int port, const char* login, const char* password);
    void finish();

    void subscribeForCurrency(const char* currencySymbol,
                            std::function<void (float, float)> callbackFunc);

    ~QuoteSession();

private:
    bool login();
    void logout();

    std::thread* heartbeatThread;
    int heartbeatFrequency;
    void handleHeartbeat();

    std::thread* resendThread;
    void handleResending();

    std::mutex sendLock;
    std::map<int, std::vector<char> > sendMessages; //messages older than 1000 back are deleted

    template <class MsgTypeTagVal, class... TagVals>
    void sendNextMessage(const MsgTypeTagVal& msgTypeTagVal, const TagVals&... tagVals);
    // Automatically adds header and ending
    // and adds to list of sent messages for resending
};

    template <class MsgTypeTagVal, class... TagVals>
    void QuoteSession::sendNextMessage(const MsgTypeTagVal& msgTypeTagVal, const TagVals&... tagVals)
    {
        std::scoped_lock sendLockGuard(sendLock);

        auto msgLen = sendMessage(
            msgTypeTagVal, 
            FIX::SenderCompID::tagVal("fxpig.3001287"),
            FIX::TargetCompID::tagVal("CSERVER"),
            FIX::TargetSubID::tagVal("QUOTE"),
            FIX::SenderSubID::tagVal("QUOTE"),
            FIX::MsgSeqNum::tagVal(msgSeqNum),
            FIX::SendingTime::tagVal(FIX::getUTCDateAndTime()),
            tagVals...
        );
        
        if(sendMessages.size() > 1000)
            sendMessages.erase(sendMessages.begin());

        auto& curMsg = sendMessages[msgSeqNum];
        curMsg.resize(msgLen);
        memcpy(&curMsg[0], sendBuff, msgLen);

        msgSeqNum++;

        logg << "MESSAGE SENT: \n";
        for(char c : curMsg) logg << (c == FIX::SOH ? '|' : c); 
        logg << '\n';
    }   
} //namespace FIX
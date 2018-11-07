#pragma once
#include "../Tags.hpp"
#include "TCPSocket.hpp"
#include <Logger.hpp>
#include <deque>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>
#include <shared_mutex>
#include <unordered_map>

namespace FIX
{

class Session
{
public:
    Session();
    
    bool start(const char* serverHostName, int port, const char* login, const char* password);
    void finish();

    template <class... Args>
    void sendMessage(const Args&... args);

    ~Session();

private:
    class Receiver;
    #include "Receiver.hpp"

    struct TagVal
    {
        int tag;
        const char* val; //cstring with received value (unparsed)
    };

    struct Message
    {
        std::vector<TagVal> tagVals;
        int checkSum;
        Types::DateAndTime recvTime;

        Message();
        Message(const Message& msg);
        Message(Message&& msg); //to avoid unnecesary copying
        Message& operator=(const Message& msg);
        Message& operator=(Message&& msg);

        ~Message(){memory.reset();}
    private:
        friend Receiver;
        std::shared_ptr<const char*> memory;
    };

    TCPSocket socket;

    char* msgBuff; //Send Buffer
    char* msgContentStart; //SendBuffer after 8=FIX4.4|9=12345|

    Receiver* receiver;

    std::deque<Message> recvQueue;
    std::shared_mutex recvQueueLock;

    std::condition_variable newMessage;
    std::mutex newMessageLock;

    template <class ChronoTimePoint>
    bool waitForNewMessagesUntil(ChronoTimePoint timeout)
    {
        std::unique_lock<std::mutex> newMessageLockGuard(newMessageLock);
        auto waitRes = newMessage.wait_until(newMessageLockGuard, timeout);
        return (waitRes != std::cv_status::timeout);
    }

    //Writes to cstring tagVal0, SOH, tagVal1, SOH...
    template <class T, class... Args> 
    static inline char* addTagVal(char* where, T a, const Args&... args)
        {return addTagVal(addTagVal(where, a), args...);}

    static inline char* addTagVal(char* where, const char* cStr)
    {
        char* res = strcpy(where, cStr) + strlen(cStr);
        *res = FIX::SOH;
        return (res+1);
    }

    void onNewMessage(Message&& msg)
    {
        recvQueueLock.lock();

        logg << "\nReceived new message!\n";
        for(auto& tagVal : msg.tagVals)
            logg << toHuman(tagVal.tag, tagVal.val) << '\n';
        logg << '\n';
        
        recvQueue.emplace_back(std::move(msg));
        newMessage.notify_all();

        recvQueueLock.unlock();
    }


    bool login()
    {
        logg << "Logging in...\n";

        auto curTime = FIX::getCurUTCDateAndTime();

        sendMessage(
            FIX::MsgType::tagValLogon,
            FIX::SenderCompID::tagVal("fxpig.3001287"),
            FIX::TargetCompID::tagVal("CSERVER"),
            FIX::TargetSubID::tagVal("QUOTE"),
            FIX::SenderSubID::tagVal("QUOTE"),
            FIX::MsgSeqNum::tagVal(1),
            FIX::SendingTime::tagVal(curTime.day, curTime.month, curTime.year, curTime.hour, curTime.minute, curTime.second),
            FIX::EncryptMethod::tagValNoneOrOther,
            FIX::HeartBtInt::tagVal(30),
            FIX::ResetSeqNumFlag::tagValYesResetSequenceNumbers,
            FIX::Username::tagVal("3001287"),
            FIX::Password::tagVal("thisIsATemporaryPassword1337")
        );

        auto lastProccesedTime = curTime;

        bool result = false;
        bool resultFound = false;

        auto processMessage = [&](const Message& m){
            if(!(lastProccesedTime < m.recvTime))
                return;

            if(!strcmp(m.tagVals[2].val, FIX::MsgType::valLogon))
            {
                //Logged in nicely
                result = true;
                resultFound = true;
            }
        };

        auto loginTimeout = std::chrono::system_clock::now() + std::chrono::milliseconds(500);

        std::shared_lock<std::shared_mutex> recvQueueLockGuard(recvQueueLock);

        for(const Message& m : recvQueue)
        {
            processMessage(m);
            if(resultFound)
                return result;
        }

        recvQueueLockGuard.unlock();

        while(std::chrono::system_clock::now() < loginTimeout)
        {

            if(waitForNewMessagesUntil(loginTimeout))
            {
                recvQueueLockGuard.lock();
                for(const Message& m : recvQueue)
                {
                    processMessage(m);
                    if(resultFound)
                        return result;
                }       
                recvQueueLockGuard.unlock();
            }
            else
            {
                //Timeout reached - no result then login failed
                return false;
            }
        }

        return false;
    }
};


template <class... Args> 
void Session::sendMessage(const Args&... args)
{
    //All user-given tags
    auto last =  addTagVal(msgContentStart, args...);
    
    //BodyLen
    int bodyLen = last-msgContentStart;
    char bodyLenStr[10];
    sprintf(bodyLenStr, "%d", bodyLen);
    int bodyLenStrLen = strlen(bodyLenStr);
    strcpy(msgContentStart - bodyLenStrLen-1, bodyLenStr);
    for(char* c = msgContentStart-bodyLenStrLen-2; *c != '='; c--){*c = '0';}
    *(msgContentStart-1) = FIX::SOH;

    //Checksum
    int checkSum = 0;
    for(char* c = msgBuff; c < last; c++)
        checkSum = (checkSum + *c)%256;

    *(last++) = '1';
    *(last++) = '0';
    *(last++) = '=';
    *(last++) = '0' + (checkSum/100)%10;
    *(last++) = '0' + (checkSum/10)%10;
    *(last++) = '0' + (checkSum%10);
    *(last++) = FIX::SOH;
    *(last++) = 0;

    socket.send(msgBuff, last-msgBuff);

    logg << "MESSAGE SENT: \n";
    for(char* c = msgBuff; *c != 0; c++) logg << (*c == FIX::SOH ? '|' : *c); 
    logg << '\n';
}

}


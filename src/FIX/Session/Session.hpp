#pragma once
#include "../Tags.hpp"
#include "TCPSocket.hpp"
#include <Logger.hpp>
#include <deque>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>

namespace FIX
{

class Session
{
public:
    Session()
    {
        receiver = nullptr;
        isOnRecvQueue = new std::timed_mutex[1000]; // <- Max FIX tag number
    }
    
    bool start(const char* serverHostName, int port, const char* login, const char* password)
    {
        if(socket.connectTo(serverHostName, port))
            logg << "Succesfully connected to server " << serverHostName << ":" << port << "\n";
        else
        {
            logg << "Failed to connect to server " << serverHostName << ":" << port << "\n";
            return false;
        }

        receiver = new Receiver(this, socket);

        msgBuff = (char*)malloc(1024*1024); //Messages >1MB are not supported
        msgContentStart = addTagVal(msgBuff, FIX::BeginString::tagValFIX44, "9=12345");

        sendLogin();

        //Wait until there is Logon message in recvQueue
        //some mutex wait condition or some shit

        return true;
    }

    void finish()
    {
        //Logout
        if(receiver != nullptr)
        {
            receiver->finish();
            delete receiver;
            receiver = nullptr;
        }
        //Disconnect
    }

    template <class... Args>
    void sendMessage(const Args&... args);

    ~Session()
    {
        finish();
        free(msgBuff);
        delete[] isOnRecvQueue;
    }

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
    
    private:
        friend Receiver;
        std::shared_ptr<const char*> memory;
    };


    TCPSocket socket;
    Receiver* receiver;
    void (*onPriceChangeCallback)();
    
    std::deque<Message> recvQueue;
    std::mutex recvQueueMutex;

    //int howManyOfTypeOnQueue[...]
    std::timed_mutex* isOnRecvQueue;

    char* msgBuff;
    char* msgContentStart;

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
        if(msg.tagVals[2].tag != FIX::MsgType::tag)
            logg << "Oh shite\n";

        recvQueueMutex.lock();
        recvQueue.emplace_back(std::move(msg));
        recvQueueMutex.unlock();
    }

    void sendLogin()
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


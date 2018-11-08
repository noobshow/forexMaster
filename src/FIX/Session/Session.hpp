#pragma once
#include "../Tags.hpp"
#include "TCPSocket.hpp"
#include <Logger.hpp>
#include <list>
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

    ~Session();

private:
    using clock = std::chrono::system_clock;
    using timePoint = std::chrono::system_clock::time_point;

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
        timePoint recvTime;

        //Not important
        Message();
        Message(const Message& msg);
        Message(Message&& msg);
        Message& operator=(const Message& msg);
        Message& operator=(Message&& msg); //to avoid unnecesary copying

        ~Message(){if(memory.unique())delete[] tagVals[0].val;}
    private:
        friend Receiver;
        std::shared_ptr<bool> memory; 
        //keeps track of how many copies of this message exist
        //this is ugly will be handled better in the future
    };

    TCPSocket socket;

    char* sendBuff;
    char* sendBuffContentStart; //Send Buffer after 8=FIX4.4|9=12345|
    std::mutex sendLock;
    
    template <class... Args> 
    void sendMessage(Args&&... tagVals); //TODO - add thread safety
    // Usage e.g. sendMessage(FIX::MsgType::tagValLogon, FIX::Price::tagVal(40));

    Receiver* receiver;

    std::list<Message> recvQueue; // <- probably could be fixed size queue for speed without realloc
    std::shared_mutex recvQueueLock;

    std::condition_variable newMessage;
    std::mutex newMessageLock;


    // Callback called by receiver (from its thread) when new message is received
    void onNewMessage(Message&& msg);

    // Waits until specified message arrives
    // evalFunc should return true if message given 
    // is the one we are waiting for
    // false otherwise
    // If Message is found pointer to it is returned
    // nullptr otherwise
    const Message* waitForMessage(int timeoutMS,
                                  const bool (*evalFunc)(const Message& m),
                                  timePoint fromWhen = clock::now());

    bool login()
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
            FIX::MsgSeqNum::tagVal(1),
            FIX::SendingTime::tagVal(curTime.day, curTime.month, curTime.year, curTime.hour, curTime.minute, curTime.second),
            FIX::EncryptMethod::tagValNoneOrOther,
            FIX::HeartBtInt::tagVal(30),
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

        return waitRes != nullptr;
    }
};


    template <class... Args> 
    void Session::sendMessage(Args&&... tagVals)
    {
        std::scoped_lock sendLockGuard(sendLock);

        char* last = sendBuffContentStart;

        auto addTagVal = [&last](const char* tagVal){
            last = strcpy(last, tagVal) + strlen(tagVal);
            *(last++) = FIX::SOH;
        };

        //Add all user-given tags
        (... , addTagVal(tagVals));
        
        //BodyLen
        int bodyLen = last-sendBuffContentStart;
        char bodyLenStr[10];
        sprintf(bodyLenStr, "%d", bodyLen);
        int bodyLenStrLen = strlen(bodyLenStr);
        strcpy(sendBuffContentStart - bodyLenStrLen-1, bodyLenStr);
        for(char* c = sendBuffContentStart-bodyLenStrLen-2; *c != '='; c--){*c = '0';}
        *(sendBuffContentStart-1) = FIX::SOH;

        //Checksum
        int checkSum = 0;
        for(char* c = sendBuff; c < last; c++)
            checkSum = (checkSum + *c)%256;

        *(last++) = '1';
        *(last++) = '0';
        *(last++) = '=';
        *(last++) = '0' + (checkSum/100)%10;
        *(last++) = '0' + (checkSum/10)%10;
        *(last++) = '0' + (checkSum%10);
        *(last++) = FIX::SOH;
        *(last++) = 0;

        socket.send(sendBuff, last-sendBuff);

        logg << "MESSAGE SENT: \n";
        for(char* c = sendBuff; *c != 0; c++) logg << (*c == FIX::SOH ? '|' : *c); 
        logg << '\n';
    }



}


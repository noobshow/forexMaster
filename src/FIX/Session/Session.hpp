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

    char* msgBuff; //Send Buffer
    char* msgContentStart; //Send Buffer after 8=FIX4.4|9=12345|

    template <class... Args> 
    void sendMessage(const Args&... tagVals)
    {
        char* last = msgContentStart;

        auto addTagVal = [&last](const char* tagVal){
            last = strcpy(last, tagVal) + strlen(tagVal);
            *(last++) = FIX::SOH;
        };

        //Add all user-given tags
        (... , addTagVal(tagVals));
        
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


    Receiver* receiver;

    std::list<Message> recvQueue; // <- probably could be fixed size queue for speed without realloc
    std::shared_mutex recvQueueLock;

    std::condition_variable newMessage;
    std::mutex newMessageLock;

    void onNewMessage(Message&& msg)
    {
        logg << "\nReceived new message!\n";
        for(auto& tagVal : msg.tagVals)
            logg << toHuman(tagVal.tag, tagVal.val) << '\n';
        logg << '\n';

        recvQueueLock.lock();
        recvQueue.emplace_back(std::move(msg));
        recvQueueLock.unlock();

        newMessageLock.lock();
        newMessage.notify_all();
        newMessageLock.unlock();
    }

    // evalFunc should return true if message given 
    // is the one we are waiting for
    // false otherwise
    // If Message is found pointer to it is returned
    // nullptr otherwise
    const Message* waitForMessage(int timeoutMS,
                                  const bool (*evalFunc)(const Message& m),
                                  timePoint fromWhen = clock::now())
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

        const Message*  waitRes = waitForMessage(500, [](const Message& m)->const bool{
            if(strcmp(m.tagVals[2].val, FIX::MsgType::valLogon) == 0)
                return true;

            return false;
        });

        return waitRes != nullptr;
    }
};

}


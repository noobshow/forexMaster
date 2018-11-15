#pragma once
#include "TCPSocket.hpp"
#include "../Types.hpp"
#include <Logger.hpp>
#include <list>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>
#include <shared_mutex>
#include <unordered_map>
#include <map>

namespace FIX
{

class Session
{
public:
    Session();

    void finish();
    ~Session();

protected:
//Basic Session functionality
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

        bool isMsgType(const char*) const;

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
        //this is ugly will be handled better in the future //TODO
    };

    TCPSocket socket;

//Sending
    char* sendBuff;
    char* sendBuffContentStart; //Send Buffer after 8=FIX4.4|9=12345|
    
    template <class... Args> 
    int sendMessage(const Args&... tagVals);
    // Usage e.g. sendMessage(FIX::MsgType::tagValLogon, FIX::Price::tagVal(40));
    // Not thread safe - its derivative class job

    //helpers for sendMessage
    void addTagVal(const char* tagVal, char*& last);
    template <class T>
    void addTagVal(const writeableTagVal<T>& writeableTagVal, char*& last);

    std::shared_mutex sendMessagesLock;

//Receiving
    Receiver* receiver;

    std::list<Message> recvQueue; // <- probably could be fixed size queue for speed without realloc //TODO
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
    template <class EvalFunc> // bool evalFunc(const Message& m) <- template for capture lambdas
    const Message* waitForMessage(int timeoutMS,
                                  EvalFunc evalFunc,
                                  timePoint fromWhen = clock::now());

//Session handling
    std::atomic<bool> isTimeToStop; // <- to stop threads and session

    std::atomic<int> msgSeqNum;
};


    //Template funcs definitions
    template <class T>
    void Session::addTagVal(const writeableTagVal<T>& writeableTagVal, char*& last){
        last = writeableTagVal.writeThere(last);
    };


    template <class... Args> 
    int FIX::Session::sendMessage(const Args&... tagVals)
    {
        char* last = sendBuffContentStart;

        //Add all user-given tags
        (... , addTagVal(tagVals, last));
        
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

        return last - sendBuff;
    }

    template <class EvalFunc>
    const Session::Message* Session::waitForMessage(int timeoutMS,
                                  EvalFunc evalFunc,
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
            newMessageLockGuard.unlock();

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
}//namespace FIX


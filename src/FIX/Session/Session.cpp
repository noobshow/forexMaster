#include "Session.hpp"
#include "../Tags.hpp"
#include <cstring>

namespace FIX
{
    Session::Session()
    {
        receiver = nullptr;
        sendBuff = nullptr;
        isTimeToStop = false;
    }
    
    void Session::finish()
    {
        isTimeToStop = true;
        if(receiver != nullptr)
        {
            receiver->finish();
            delete receiver;
            receiver = nullptr;
        }
    }

    Session::~Session()
    {
        finish();
        if(sendBuff != nullptr)
            free(sendBuff);
    }

    void Session::addTagVal(const char* tagVal, char*& last){
        last = strcpy(last, tagVal) + strlen(tagVal);
        *(last++) = FIX::SOH;
    };

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
    
} //namespace FIX
#include "Session.hpp"
#include "../Tags.hpp"
#include <cstring>

namespace FIX
{
    Session::Session() 
    : recvQueue(100)
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
        recvQueue.emplace(std::move(msg));
        recvQueueLock.unlock();

        newMessageLock.lock();
        newMessage.notify_all();
        newMessageLock.unlock();
    }

    bool Session::waitForMessage(int timeoutMS,
                                 const std::function<bool (const Message& m)>& evalFunc,
                                 int& lastCheckedIndex)
    {
        // Checks out messages from lastCheckedIndex to newest and returns true if 
        // the one waited for is found
        auto checkOutNewMessages = [this, &lastCheckedIndex, &evalFunc]()
        ->bool{
            std::shared_lock recvQueueLockGouard(recvQueueLock);

            int start = lastCheckedIndex+1;
            if(start < recvQueue.beginIndex())
                start = recvQueue.beginIndex();

            for(int curMsgIndex = start; curMsgIndex < recvQueue.endIndex(); curMsgIndex++)
            {
                lastCheckedIndex = curMsgIndex;
                const Message& cur = recvQueue[curMsgIndex];
                if(evalFunc(cur))
                    return true;
            }

            return false;
        };

        //Check out existing messages
        if(!recvQueue.empty())
            if(checkOutNewMessages())
                return true;

        auto untilTimeout = clock::now() + std::chrono::milliseconds(timeoutMS);
        while(true)
        {
            //Wait for new messages
            std::unique_lock<std::mutex> newMessageLockGuard(newMessageLock);

            auto waitRes = newMessage.wait_until(newMessageLockGuard, untilTimeout);

            newMessageLockGuard.unlock();

            if(waitRes == std::cv_status::timeout)
                return false;
            
            if(checkOutNewMessages())
                return true;
        }
    }

    void Session::doForNewMessages(const std::function<void (const Message& m)>& doFunc)
    {
        recvQueueLock.lock_shared();
        int lastCheckedIndex = recvQueue.beginIndex();
        recvQueueLock.unlock_shared();

        auto doForNewMessages = [this, &lastCheckedIndex, &doFunc]()
        {
            std::shared_lock recvQueueLockGouard(recvQueueLock);

            int start = lastCheckedIndex+1;
            if(start < recvQueue.beginIndex())
                start = recvQueue.beginIndex();

            for(int curMsgIndex = start; curMsgIndex < recvQueue.endIndex(); curMsgIndex++)
            {
                lastCheckedIndex = curMsgIndex;                
                doFunc(recvQueue[curMsgIndex]);
            }
        };

        if(!recvQueue.empty())
            doForNewMessages();

        while(!isTimeToStop)
        {
            std::unique_lock newMessageLockGuard(newMessageLock);

            auto waitRes = newMessage.wait_for(newMessageLockGuard, std::chrono::milliseconds(500));

            newMessageLockGuard.unlock();

            if(waitRes != std::cv_status::timeout)
                doForNewMessages();
        }
    }

    int Session::getLastMessageIndex()
    {
        std::shared_lock recvQueueLockGuard(recvQueueLock);
        return recvQueue.endIndex()-1;
    }
} //namespace FIX
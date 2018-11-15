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
    
} //namespace FIX
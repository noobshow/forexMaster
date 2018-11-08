#include "Session.hpp"

namespace FIX
{
    Session::Session()
    {
        receiver = nullptr;
        sendBuff = nullptr;
    }
    
    bool Session::start(const char* serverHostName, int port, const char* login, const char* password)
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

        return this->login();
    }

    void Session::finish()
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

    Session::~Session()
    {
        finish();
        if(sendBuff != nullptr)
            free(sendBuff);
    }

    void Session::onNewMessage(Message&& msg)
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

}
#include "Session.hpp"

namespace FIX
{
    Session::Session()
    {
        receiver = nullptr;
        msgBuff = nullptr;
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

        msgBuff = (char*)malloc(1024*1024); //Messages >1MB are not supported
        std::string msgBegin;
        msgBegin += FIX::BeginString::tagValFIX44; 
        msgBegin += FIX::SOH;
        msgBegin += "9=12345";
        msgBegin += FIX::SOH;
        strcpy(msgBuff, msgBegin.c_str());
        msgContentStart = msgBuff + msgBegin.size();

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
        if(msgBuff != nullptr)
            free(msgBuff);
    }
}
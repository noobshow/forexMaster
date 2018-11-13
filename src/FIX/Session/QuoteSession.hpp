#pragma once
#include "Session.hpp"

namespace FIX
{

class QuoteSession : public Session
{
public:
    QuoteSession();

    bool start(const char* serverHostName, int port, const char* login, const char* password);
    void finish();

    ~QuoteSession();

private:
    bool login();
    void logout();

    std::thread* heartbeatThread; // handleHeartbeat()
    int heartbeatFrequency;
    void handleHeartbeat();
};

} //namespace FIX
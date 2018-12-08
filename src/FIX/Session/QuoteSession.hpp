#pragma once
#include "Session.hpp"
#include "../Tags.hpp"
#include <functional>

namespace FIX
{

class QuoteSession : public Session
{
public:
    QuoteSession(const Logger& superLogger);

    void finish();

    void subscribeForCurrency(const char* currencySymbol,
                            const std::function<void (float, float)>& callbackFunc);

    ~QuoteSession();

private:
    std::thread* subscriptionThread;
    void handleSubscriptions();
    std::unordered_map <std::string, std::function<void(float,float)> >
        subscribeCallbacks;
    std::mutex subscribeCallbacksLock;
    //TODO ^ replace std::string with something to avoid new copying and stuff
};

} //namespace FIX
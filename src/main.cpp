#include <thread>
#include <Logger.hpp>
#include <FIX/FIX.hpp>

int main()
{
    FIX::QuoteSession fixSession;
    if(fixSession.start("h18.p.ctrader.com", 5201, "asd", "thisIsATemporaryPassword"))
    {
        logg << "Session started!\n";
    }
    else
    {
        logg << "Session failed to start!\n";
    }

    fixSession.subscribeForCurrency([](float a, float b){});

    std::this_thread::sleep_for(std::chrono::seconds(10020));

    fixSession.finish();

    return 0;
}
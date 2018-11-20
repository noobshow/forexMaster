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

    fixSession.subscribeForCurrency("1", [](float bid, float ask){
        logg << "Price for EUR/USD changed to " << bid << "(bid) " << ask << "(ask)\n";
    });

    std::this_thread::sleep_for(std::chrono::seconds(100));

    fixSession.finish();

    return 0;
}
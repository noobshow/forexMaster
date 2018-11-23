#include <thread>
#include <Logger.hpp>
#include <FIX/FIX.hpp>

void testQuoteSession()
{
    FIX::QuoteSession quoteSession;
    if(quoteSession.start("h18.p.ctrader.com", 5201, 
                          "fxpig.3001287", "QUOTE",
                          "CSERVER", "QUOTE",
                          "3001287", "thisIsATemporaryPassword1337"))
    {
        logg << "Session started!\n";
    }
    else
    {
        logg << "Session failed to start!\n";
        return;
    }

    quoteSession.subscribeForCurrency("1", [](float bid, float offer){
        logg << "Price for EUR/USD changed to " << bid << "(bid) " << offer << "(offer)\n";
    });

    quoteSession.subscribeForCurrency("2", [](float bid, float offer){
        logg << "Price for GBP/USD changed to " << bid << "(bid) " << offer << "(offer)\n";
    });

    std::this_thread::sleep_for(std::chrono::seconds(100));

    quoteSession.finish();
}

void testTradeSession()
{   
    FIX::TradeSession* tradeSession = new FIX::TradeSession;
    /*
    Host name: h23.p.ctrader.com
    (Current IP address 46.105.103.224 can be changed without notice)
    Port: 5212 (SSL), 5202 (Plain text).
    Password: (a/c 3001287 password)
    SenderCompID: fxpig.3001287
    TargetCompID: CSERVER
    SenderSubID: TRADE
    */
    if(tradeSession->start("h23.p.ctrader.com", 5202,
                            "fxpig.3001287", "TRADE",
                            "CSERVER", "TRADE",
                            "3001287", "thisIsATemporaryPassword1337"))
    {
        logg << "Session started!\n";
    }
    else
    {
        logg << "Session failed to start!\n";
        return;
    }

    std::this_thread::sleep_for(std::chrono::seconds(2));

    tradeSession->finish();
}

int main()
{
    testTradeSession();    

    return 0;
}
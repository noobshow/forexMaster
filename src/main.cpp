#include <thread>
#include <utils/Logger.hpp>
#include <FIX/FIX.hpp>
#include "Symbols.hpp"

void testQuoteSession()
{
    FIX::QuoteSession quoteSession(fileLogg);
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
    
    FIX::TradeSession* tradeSession = new FIX::TradeSession(fileLogg);
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

    float tradedQuantity = 10000;
    auto newPos = tradeSession->newOrderSell("1", tradedQuantity);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    auto newPos2 = tradeSession->newOrderSell("1", tradedQuantity);

    /*
    if(newPos != nullptr)
    {
        logg << "Succesfully opened position (" 
            << newPos->quantity << " at " << newPos->lastOpPrice << ")!\n";

        float openPrice = newPos->lastOpPrice;

        std::this_thread::sleep_for(std::chrono::seconds(10));
        tradeSession->newOrderBuy(newPos->quantity, *newPos);

        float closePrice = newPos->lastOpPrice;

        float gain = (openPrice * (1.0/closePrice)) - 1.0;
        logg << "Closed position. Gain: " << std::fixed << gain*tradedQuantity << '\n';
    }
    else
        logg << "Failed to open position!";
    */

    tradeSession->finish();

    delete tradeSession;
}

int main()
{
    testTradeSession();    

    return 0;
}
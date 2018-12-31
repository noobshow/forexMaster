#include "BasicTradeBot.hpp"

BasicTrader::BasicTrader(TradeInterface* myInterface)
    : tradeInterface(myInterface)
{
    tradeInterface->subscribeForPrice(Symbols::EURUSD,
    [this](TradeInterface::Tick tick){
        lastTicks.emplace_back(tick);

        if(lastTicks.size() > 10)
            lastTicks.pop_front();

        if(lastTicks.size() < 10)
            return;

        float lowestPrice = lastTicks.front().bid;
        for(auto&& t : lastTicks)
            lowestPrice = std::min(t.bid, lowestPrice);

        if(tick.bid == lowestPrice)
        {
            positions.emplace_back(tradeInterface->buyBet(Symbols::EURUSD,
            tradeInterface->getBalance()));
        }
        //Buy

        while(positions.size() > 10)
        {
            auto curPos = positions.front();
            positions.pop_front();

            float quantity = curPos.quantity;
            float gain = tradeInterface->closePosition(curPos);

            logg << "CLosed Position! Balance: " << tradeInterface->getBalance() << '\n';
        }
    });
}
            
BasicTrader::~BasicTrader()
{

}

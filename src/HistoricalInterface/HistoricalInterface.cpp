#include "HistoricalInterface.hpp"

HistoricalInterface::HistoricalInterface(
        int fromDay, int fromMonth, int fromYear,
        int toDay, int toMonth, int toYear,
        Symbols::Symbol baseCurrnecy, float startingBalance,
        std::chrono::milliseconds delay
    )
    : TradeInterface(baseCurrency, startingBalance),
    connectionDelay(delay)
{


}

void HistoricalInterface::subscribeForPrice(Symbols::Pair pair, 
            std::function<void(float, float, timePoint)> callback)
{


}

TradeInterface::Position HistoricalInterface::buyBet(Symbols::Pair pair, float quantity)
{


}

TradeInterface::Position HistoricalInterface::sellBet(Symbols::Pair pair, float quantity)
{


}

float HistoricalInterface::closePosition(Position& pos)
{


}

float HistoricalInterface::calculateGain(const Position& pos, float closePrice) const
{


}

HistoricalInterface::~HistoricalInterface()
{

}

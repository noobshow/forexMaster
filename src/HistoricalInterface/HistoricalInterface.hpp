#pragma once

#include "../TradeInterface.hpp"
#include "../Symbols.hpp"

class HistoricalInterface : public TradeInterface
{
public:
    HistoricalInterface(
        int fromDay, int fromMonth, int fromYear,
        int toDay, int toMonth, int toYear,
        Symbols::Symbol baseCurrnecy, float startingBalance,
        std::chrono::milliseconds connectionDelay = std::chrono::milliseconds(20)
    );

    /* Interface overwiev is in TradeInterface.hpp */
    void subscribeForPrice(Symbols::Pair pair, 
                           std::function<void(float, float, timePoint)> callback);

    Position buyBet(Symbols::Pair pair, float quantity);
    Position sellBet(Symbols::Pair pair, float quantity);

    float closePosition(Position& pos);

    float calculateGain(const Position& pos, float closePrice) const;

    ~HistoricalInterface();

private:
    std::chrono::milliseconds connectionDelay;
};
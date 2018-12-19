#pragma once

#include "../TradeInterface.hpp"
#include "../Symbols.hpp"
#include "DataReader.hpp"
#include <utils/Logger.hpp>

class HistoricalInterface : public TradeInterface
{
public:
    HistoricalInterface(
        Symbols::Symbol baseCurrnecy, float startingBalance,
        int fromMonth, int fromYear,
        int toMonth, int toYear,
        const Logger& superLogger
    );

    /* Interface overwiev is in TradeInterface.hpp */
    void subscribeForPrice(Symbols::Pair pair, 
                           std::function<void(float, float, TimePoint)> callback);

    Position buyBet(Symbols::Pair pair, float quantity);
    Position sellBet(Symbols::Pair pair, float quantity);

    float closePosition(Position& pos);

    float calculateGain(const Position& pos, float closePrice) const;

    ~HistoricalInterface();

private:
    Logger myLogg;
    std::unique_ptr<DataReader> dataReader;

    std::chrono::milliseconds connectionDelay;
};
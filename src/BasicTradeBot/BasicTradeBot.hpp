#pragma once

#include "../TradeInterface.hpp"
#include <deque>

class BasicTrader
{
public:
    BasicTrader(TradeInterface* tradeInterface);

    ~BasicTrader();
private:
    TradeInterface* tradeInterface;

    std::deque <TradeInterface::Tick> lastTicks;
    std::deque<TradeInterface::Position> positions;
};

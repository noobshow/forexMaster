#pragma once

#include "../TradeInterface.hpp"

class BasicTrader
{
public:
    BasicTrader(TradeInterface* tradeInterface);

    ~BasicTrader();
private:
    TradeInterface* tradeInterface;
};

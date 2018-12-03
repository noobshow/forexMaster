#pragma once

#include "Symbols.hpp"
#include <functional>
#include <memory>

class TradeInterface
{
public:
    const Symbols::symbol tradedSymbol;

    virtual void subscribeForPrice(std::function<void(float, float)> callback) = 0;

    /* Buys/Sells <amount> of first currency in tradedSymbol */
    virtual float buy(float amount) = 0;
    virtual float sell(float amout) = 0;

    /* Returns amount of money of both currencies in the traded symbol*/
    virtual std::pair<float, float> getMoney() const = 0; 

    TradeInterface(Symbols::symbol symbol) : tradedSymbol(symbol){}
};

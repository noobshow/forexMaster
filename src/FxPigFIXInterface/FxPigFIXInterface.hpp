#pragma once

#include "../TradeInterface.hpp"
#include "../FIX/Session/QuoteSession.hpp"
#include "../FIX/Session/TradeSession.hpp"
#include "../Symbols.hpp"
#include <string>

class FxPigFIXInterface : TradeInterface
{
public:
    FxPigFIXInterface(Symbols::symbol symbol, long long userNumber, std::string password);

    void subscribeForPrice(std::function<void(float, float)> callback) = 0;

    /* Buys/Sells <amount> of first currency in tradedSymbol */
    float buy(float amount);
    float sell(float amout);

    /* Returns amount of money of both currencies in the traded symbol*/
    std::pair<float, float> getMoney() const; 

    ~FxPigFIXInterface();

private:
    FIX::TradeSession tradeSession;
    FIX::QuoteSession quoteSession;

    std::string userNumber;
    std::string password;

    void setupSymbolToFxPigID();
    static const char* symbolToFxPigID[Symbols::size];
};

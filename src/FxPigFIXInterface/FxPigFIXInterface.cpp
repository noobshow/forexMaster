#include "FxPigFIXInterface.hpp"

const char* FxPigFIXInterface::symbolToFxPigID[Symbols::size];

FxPigFIXInterface::FxPigFIXInterface
    (Symbols::symbol symbol, long long userNum, std::string passwd)
    : TradeInterface(symbol), userNumber(std::to_string(userNum)), password(passwd)
{
    std::string userName = "fxpig" + userNumber;

    if(!quoteSession.start("h18.p.ctrader.com", 5201, 
                          userName.c_str(), "QUOTE",
                          "CSERVER", "QUOTE",
                          userNumber.c_str(), password.c_str()))
    {
        logg << "Failed to start quoteSession!\n";
        return;
    }

    if(!tradeSession.start("h23.p.ctrader.com", 5202,
                            userName.c_str(), "TRADE",
                            "CSERVER", "TRADE",
                            userNumber.c_str(), password.c_str()))
    {
        logg << "Failed to start tradeSession!\n";
        return;
    }

    setupSymbolToFxPigID();
}

void FxPigFIXInterface::subscribeForPrice(std::function<void(float, float)> callback)
{

}

float FxPigFIXInterface::buy(float amount)
{

}

float FxPigFIXInterface::sell(float amout)
{

}

std::pair<float, float> FxPigFIXInterface::getMoney() const
{

}



void FxPigFIXInterface::setupSymbolToFxPigID()
{
    static bool wasSymbolToFxPigSetup = false;

    if(wasSymbolToFxPigSetup)
        return;

    symbolToFxPigID[Symbols::EURUSD] = "1";

    wasSymbolToFxPigSetup = true;
}
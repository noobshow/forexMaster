#pragma once

#include "../TradeInterface.hpp"
#include "../FIX/Session/QuoteSession.hpp"
#include "../FIX/Session/TradeSession.hpp"
#include "../Symbols.hpp"
#include <string>
#include <memory>

/*
    Provides interface for FXPIG broker over FIX Protocol (using cTrader)
*/

class FxPigFIXInterface : public TradeInterface
{
public:
    FxPigFIXInterface(Symbols::Symbol baseCurrency, float balance,
                      long long userNumber, std::string password,
                      const Logger& superLogg);

    /* Interface overwiev is in TradeInterface.hpp */
    void subscribeForPrice(Symbols::Pair pair, 
                           std::function<void(float, float, TimePoint)> callback);

    Position buyBet(Symbols::Pair pair, float quantity);
    Position sellBet(Symbols::Pair pair, float quantity);

    float closePosition(Position& pos);

    float calculateGain(const Position& pos, float closePrice) const;

    ~FxPigFIXInterface(){}
private:
    Logger myLogg;

    std::string userNumber;
    std::string password;

    std::unique_ptr<FIX::QuoteSession> quoteSession;
    std::unique_ptr<FIX::TradeSession> tradeSession;
    
    std::unordered_map <int, std::unique_ptr<FIX::TradeSession::Position> > positions;
    int nxtPosID = 0;

    void setupPairToFxPigID();
    static const char* pairToFxPigID[Symbols::size][Symbols::size];
};

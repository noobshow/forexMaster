#include "FxPigFIXInterface.hpp"

const char* FxPigFIXInterface::pairToFxPigID[Symbols::size][Symbols::size];

FxPigFIXInterface::FxPigFIXInterface
    (Symbols::Symbol baseCurr, float startBalance,
    long long userNum, std::string passwd, 
    const Logger& superLogger)
    : TradeInterface(baseCurr, startBalance),
      userNumber(std::to_string(userNum)), password(passwd)
{
    myLogg = superLogger.subLogger("FxPigTradeInterface", "FxPigTradeInterfaceLog.txtx");

    tradeSession = std::make_unique<FIX::TradeSession>(myLogg);
    quoteSession = std::make_unique<FIX::QuoteSession>(myLogg);

    std::string userName = "fxpig" + userNumber;

    if(!quoteSession->start("h18.p.ctrader.com", 5201, 
                          userName.c_str(), "QUOTE",
                          "CSERVER", "QUOTE",
                          userNumber.c_str(), password.c_str()))
    {
        myLogg << "Failed to start quoteSession!\n";
        return;
    }

    if(!tradeSession->start("h23.p.ctrader.com", 5202,
                            userName.c_str(), "TRADE",
                            "CSERVER", "TRADE",
                            userNumber.c_str(), password.c_str()))
    {
        myLogg << "Failed to start tradeSession!\n";
        return;
    }

    setupPairToFxPigID();
}

void FxPigFIXInterface::subscribeForPrice(Symbols::Pair pair,
                                     std::function<void(float, float, TimePoint)> callback)
{

    quoteSession->subscribeForCurrency(pairToFxPigID[pair.first][pair.second], 
    [callback](float bid, float ask)->void
    {   
        auto curDate = FIX::getUTCDateAndTime();

        TimePoint now = TimePoint(curDate.year, curDate.month, curDate.day, curDate.hour, curDate.minute, curDate.second, curDate.millisec);

        callback(bid, ask, now);
    });
}

TradeInterface::Position FxPigFIXInterface::buyBet(Symbols::Pair pair, float amount)
{
    int curID = nxtPosID++;

    auto& fixPos = positions[curID];
    fixPos = tradeSession->newOrderBuy(pairToFxPigID[pair.first][pair.second], amount);

    Position res;
    res.pair = pair;

    if(fixPos == nullptr)
    {
        res.quantity = 0;
        res.type = Position::Type::Closed;
        res.closePrice = 0;
        getPosID(res) = -1;
        positions.erase(curID);
    }
    else
    {
        res.quantity = fixPos->quantity;
        res.type = Position::Type::Buy;
        res.closePrice = fixPos->lastOpPrice;
        getPosID(res) = curID;
    }

    return res;
}

TradeInterface::Position FxPigFIXInterface::sellBet(Symbols::Pair pair, float amount)
{
    int curID = nxtPosID++;

    auto& fixPos = positions[curID];
    fixPos = tradeSession->newOrderSell(pairToFxPigID[pair.first][pair.second], amount);

    Position res;
    res.pair = pair;

    if(fixPos == nullptr)
    {
        res.quantity = 0;
        res.type = Position::Type::Closed;
        res.closePrice = 0;
        getPosID(res) = -1;
        positions.erase(curID);
    }
    else
    {
        res.quantity = fixPos->quantity;
        res.type = Position::Type::Sell;
        res.closePrice = fixPos->lastOpPrice;
        getPosID(res) = curID;
    }

    return res;
}

float getGainPerOne(float openPrice, float closePrice)
{
    float commision = 30.0 / 1e6 * 2; //FXPIG charges 30 per milion traded
    return openPrice * (1.0-closePrice) - commision;
}

float FxPigFIXInterface::calculateGain(const Position& pos, float closePrice) const
{
    return pos.quantity * getGainPerOne(pos.openPrice, closePrice);
}

float FxPigFIXInterface::closePosition(Position& pos)
{
    auto fixPos = positions.find(getPosID(pos));

    if(fixPos == positions.end())
        return 0.f;

    if(pos.type == Position::Type::Closed)
        return 0.f;

    float quantityBefore = pos.quantity;

    if(pos.type == Position::Type::Buy)
        tradeSession->newOrderBuy(fixPos->second->quantity, *fixPos->second);
    else
        tradeSession->newOrderSell(fixPos->second->quantity, *fixPos->second);

    pos.closePrice = fixPos->second->lastOpPrice;
    pos.quantity = fixPos->second->quantity;

    if(pos.quantity == 0)
        pos.type = Position::Type::Closed;

    float tradedQuantity = quantityBefore - pos.quantity;
    return tradedQuantity * getGainPerOne(pos.openPrice, pos.closePrice);
}

void FxPigFIXInterface::setupPairToFxPigID()
{
    static bool wasSymbolToFxPigSetup = false;

    if(wasSymbolToFxPigSetup)
        return;

    pairToFxPigID[Symbols::EUR][Symbols::USD] = "1";

    wasSymbolToFxPigSetup = true;
}
#include "HistoricalInterface.hpp"

HistoricalInterface::HistoricalInterface(
        Symbols::Symbol baseCurr, float startingBal,
        int fromMonth, int fromYear,
        int toMonth, int toYear,
        const Logger& superLogger
    ) : TradeInterface(baseCurr, startingBal)
{
    myLogg = superLogger.subLogger("HistoricalInterface", "HistoricalInterfaceLog.txt");

    curTime.month = fromMonth;
    curTime.year = fromYear;
    curTime.timeSinceStart = std::chrono::milliseconds(0);

    return;
}

void HistoricalInterface::subscribeForPrice(Symbols::Pair pair, 
            std::function<void(TradeInterface::Tick)> callback)
{
    Subscription* cur = new Subscription(pair, curTime.month, curTime.year, callback);

    subscribtions.emplace(cur);
}

void HistoricalInterface::update()
{
    if(subscribtions.empty())
    {
        abort();
    }

    Subscription* cur = *subscribtions.begin();
    subscribtions.erase(subscribtions.begin());
    auto curTick = cur->nextTick;
    cur->getNextTick();
    subscribtions.emplace(cur);

    curPrice[cur->pair] = {curTick.bid, curTick.ask};

    cur->callback(curTick);
}

TradeInterface::Position HistoricalInterface::buyBet(Symbols::Pair pair, float quantity)
{
    Position res;
    res.pair = pair;
    res.type = Position::Type::Buy;
    res.quantity = quantity;
    res.openPrice = curPrice[pair].first;
    res.closePrice = 0;

    getPosID(res) = -1;
    return res;
}

TradeInterface::Position HistoricalInterface::sellBet(Symbols::Pair pair, float quantity)
{
    Position res;
    res.pair = pair;
    res.type = Position::Type::Sell;
    res.quantity = quantity;
    res.openPrice = curPrice[pair].second;
    res.closePrice = 0;

    getPosID(res) = -1;
    return res;
}

float HistoricalInterface::closePosition(Position& pos)
{
    auto prices = curPrice[pos.pair];
    float closePrice;
    if(pos.type == Position::Type::Buy)
        closePrice = prices.first;
    else
        closePrice = prices.second;
    
    float gain = calculateGain(pos, closePrice);

    balance = balance - pos.quantity + pos.quantity * gain;

    pos.quantity = 0;
    pos.closePrice = closePrice;
    pos.type = Position::Type::Closed;

    return gain;
}

float HistoricalInterface::calculateGain(const Position& pos, float closePrice) const
{
    float ceanAB = closePrice;
    float ceanBA = 1.0/pos.openPrice;
    float dollarsbefore = 1.0;
    float dollarsAfter = dollarsbefore*ceanAB*ceanBA;
    float gayn = dollarsAfter / dollarsbefore;
    return gayn;
}

HistoricalInterface::~HistoricalInterface()
{
    for(Subscription* s : subscribtions)
        delete s;
    subscribtions.clear();
}

HistoricalInterface::Subscription::Subscription
    (Symbols::Pair thePair, int month, int year,
    const std::function<void(TradeInterface::Tick)>& callbackFunc)
{
    pair = thePair;
    callback = callbackFunc;

    try
        {dataReader = std::make_unique<DataReader>(pair, month, year);}

    catch(std::string& error)   
        {logg << "Error when data reading of " << Symbols::toStr(pair) << ": " << error << "\n";}

    getNextTick();
}

void HistoricalInterface::Subscription::getNextTick()
{
    DataReader::TickData newTick = dataReader->getNextTick();
    nextTick.bid = newTick.bid;
    nextTick.ask = newTick.ask;
    nextTick.time = newTick.time;
}
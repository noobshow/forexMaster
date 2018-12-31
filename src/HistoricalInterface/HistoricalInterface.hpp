#pragma once

#include "../TradeInterface.hpp"
#include "../Symbols.hpp"
#include "DataReader.hpp"
#include <utils/Logger.hpp>
#include <map>
#include <thread>
#include <mutex>
#include <atomic>
//#include <memory>

class HistoricalInterface : public TradeInterface
/* Interface overwiev is in TradeInterface.hpp */
{
public:
    HistoricalInterface(
        Symbols::Symbol baseCurrnecy, float startingBalance,
        int fromMonth, int fromYear,
        int toMonth, int toYear,
        const Logger& superLogger
    );

    /* This starts giving tick updates from start of current month */
    void subscribeForPrice(Symbols::Pair pair, 
                           std::function<void(TradeInterface::Tick)> callback);

    Position buyBet(Symbols::Pair pair, float quantity);
    Position sellBet(Symbols::Pair pair, float quantity);

    float closePosition(Position& pos);

    float calculateGain(const Position& pos, float closePrice) const;

    ~HistoricalInterface();

    void update(); // skoczy do nast ticku

private:
    Logger myLogg;
    TimePoint curTime;

    std::chrono::milliseconds connectionDelay;

    struct Subscription
    {
        Subscription(Symbols::Pair pair, int month, int year,
            const std::function<void(TradeInterface::Tick)>& callbackFunc);

        void getNextTick();

        TradeInterface::Tick nextTick;

        Symbols::Pair pair;
        std::unique_ptr<DataReader> dataReader;
        std::function<void(TradeInterface::Tick)> callback;
    };
    
    struct cmp {bool operator()(Subscription*  a, Subscription* b) const
     {
         if(a->nextTick.time < b->nextTick.time) return true;
         if(b->nextTick.time < a->nextTick.time) return false;
         return (long long)a < (long long)b;
     }};

    std::set<Subscription*, cmp> subscribtions;
    //std::vector<std::pair<float, float> > curPrice;

    std::map<Symbols::Pair, std::pair<float, float>> curPrice;
};

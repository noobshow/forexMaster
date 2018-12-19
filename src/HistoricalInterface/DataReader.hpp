#pragma once
#include "../TradeInterface.hpp"

class DataReader
{
public:
    DataReader(Symbols::Pair pair, 
               int startMonth, int startYear);

    struct TickData
    {
        float bid, ask;
        TradeInterface::TimePoint time;
    };

    TickData getNextTick();
    
    ~DataReader();

private:
    const Symbols::Pair myPair;
    FILE* curFile;
    int curYear, curMonth;
};
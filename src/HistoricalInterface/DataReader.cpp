#include "DataReader.hpp"
#include <arpa/inet.h>
#include <utils/Logger.hpp>

//converts num to string adds leading 0s to match length
std::string toStrWith0s(int num, int length) 
{
    std::string result = std::to_string(num);
    while(result.size() < length)
        result = "0" + result;
    return result;
}

std::string getFileName(Symbols::Pair pair, int month, int year)
{
    return "data/historical/data/" +
    Symbols::toStr(pair) + 
    "/" + toStrWith0s(year, 4) + toStrWith0s(month, 2) + ".bin";
}

DataReader::DataReader(Symbols::Pair pair,
                       int startMonth, int startYear)
    : myPair(pair)
{
    curMonth = startMonth;
    curYear = startYear;

    std::string&& fileName = getFileName(myPair, curMonth, curYear);

    curFile = fopen(fileName.c_str(), "rb");
    if(!curFile)
    {
        throw std::string("Couldnt open "+fileName+"!");
        return;
    }
}

float ntohFloat(float f)
{
    uint32_t casted = reinterpret_cast<uint32_t&>(f);
    uint32_t flipped = ntohl(casted);
    return reinterpret_cast<float&>(flipped);
}


DataReader::TickData DataReader::getNextTick()
{
    struct SavedData
    {
        unsigned millisFromStart;
        float bid;
        float ask;
    } savedData;

    if(fread(&savedData, 3*4, 1, curFile))
    {
        TickData result;

        unsigned tickTime = ntohl(savedData.millisFromStart);
        result.bid = ntohFloat(savedData.bid);
        result.ask = ntohFloat(savedData.ask);

        std::tm tstruct;
        tstruct.tm_year = curYear - 1900;
        tstruct.tm_mon = curMonth-1;
        
        int millis = tickTime%1000;
        tickTime /= 1000;
        int secs = tickTime%60;
        tickTime /= 60;
        int minutes = tickTime%60;
        tickTime /= 60;
        int hours = tickTime%24;
        tickTime /= 24;
        int days = tickTime;

        result.time = TradeInterface::TimePoint(curYear, curMonth, days, hours, minutes, secs, millis);

        return result;
    }
    else
    {
        
        if(curFile)
            fclose(curFile);

        curMonth++;
        if(curMonth == 13)
        {
            curMonth = 1;
            curYear++;
        }

        curFile = fopen(getFileName(myPair, curMonth, curYear).c_str(), "rb");

        if(!curFile)
        {   //Lay down and cry 

            logg << "COuldnt OpEn Next File (" << getFileName(myPair, curMonth, curYear) << ")\n";
            abort();
        }

        if(curYear > 2018)
            return {};
        return getNextTick();
    }
}

DataReader::~DataReader()
{
    if(curFile)
        fclose(curFile);
}
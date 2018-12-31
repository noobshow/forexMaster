#include "TradeInterface.hpp"


TradeInterface::TradeInterface(Symbols::Symbol baseSymbol, float startBalance)
    : baseCurrency(baseSymbol), balance(startBalance) {}

TradeInterface::TimePoint::TimePoint(int years, int months, int day, int hour, int minute, int secs, int millis)
{
    year = years;
    month = months;

    timeSinceStart = std::chrono::milliseconds(0);
    timeSinceStart += std::chrono::hours(24*day);
    timeSinceStart += std::chrono::hours(hour);
    timeSinceStart += std::chrono::minutes(minute);
    timeSinceStart += std::chrono::seconds(secs);
    timeSinceStart += std::chrono::milliseconds(millis);
}

bool TradeInterface::TimePoint::operator<(const TimePoint& b) const
{
    if(year != b.year)
        return year < b.year;
    
    if(month != b.month)
        return month < b.month;

    return timeSinceStart < b.timeSinceStart;
}

std::chrono::milliseconds TradeInterface::TimePoint::timeTo(const TradeInterface::TimePoint& b) const
{
    /*
    auto howManyDays = [](int month, int year)-> int
    {
        auto isLeap = [](int year)->bool
        {
            return (year%4 == 0 && year%100 ! = 0) 
                    || year%400 == 0;
        }

        switch(month)
        {
            case 1:
                return 31;
            case 2: 
                if(isLeap)
                    return 29;
                else
                    return 28;
            case 3:
                return 31:
            case 4:
                return 30;
            case 5:
                return 31;
            case 6:
                return 30;
            case 7:
                return 31;
            case 8: 
                return 31;
            case 9:
                return 30;
            case 10:
                return 31;
            case 11:
                return 30;
            case 12:
                return 31;
        }
    };

    int curYear = year;
    int curMonth = month;
    std::chrono::milliseconds res(0);
    std::chrono::milliseconds millisPerDay(1000*60*60*24);
    while(curYear != b.year || curMonth != b.month)
    {
        auto curMillis = millisPerDay*howManyDays(curMonth, curYear);

    }   
    */
    abort();
}


TradeInterface::TimePoint::Date TradeInterface::TimePoint::toDate() const
{
    Date res;
    res.year  = year;
    res.month = month;

    auto theTime = timeSinceStart.count();
    res.millisec = theTime%1000;
    theTime /= 1000;
    res.second = theTime%60;
    theTime /= 60;
    res.minute = theTime%60;
    theTime /= 60;
    res.hour = theTime%24;
    theTime /= 24;
    res.day = theTime;

    return res;
}

Logger& operator<<(Logger& logger, const TradeInterface::TimePoint t)
{
    auto date = t.toDate();
    logger("[ ", date.day, '.', date.month, '.', date.year, " - ");
    return logger(date.hour, '.', date.minute, '.', date.second, ':', date.millisec, " ]");
}
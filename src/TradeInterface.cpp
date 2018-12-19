#include "TradeInterface.hpp"

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

std::chrono::milliseconds TradeInterface::TimePoint::timeTo(const TradeInterface::TimePoint& b) const
{
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
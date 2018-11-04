#include "Tags.hpp"
#include <ctime>
#include <chrono>

namespace FIX
{
    char SOH = 0x01;

    Types::Date getCurDate()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Types::Date res;
        res.year = tstruct.tm_year + 1900;
        res.month = tstruct.tm_mon + 1;
        res.day = tstruct.tm_mday;
        return res;
    }

    Types::Time getCurTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Types::Time res;
        res.hour = tstruct.tm_hour;
        res.minute = tstruct.tm_min;
        res.second = tstruct.tm_sec;
        res.millisec = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;
        return res;
    }

    Types::DateAndTime getCurDateAndTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Types::DateAndTime res;
        res.year = tstruct.tm_year + 1900;
        res.month = tstruct.tm_mon + 1;
        res.day = tstruct.tm_mday;
        res.hour = tstruct.tm_hour;
        res.minute = tstruct.tm_min;
        res.second = tstruct.tm_sec;
        res.millisec = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;
        return res;
    }

    //UTC
    Types::Date getCurUTCDate()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Types::Date res;
        res.year = tstruct.tm_year + 1900;
        res.month = tstruct.tm_mon + 1;
        res.day = tstruct.tm_mday;
        return res;
    }

    Types::Time getCurUTCTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Types::Time res;
        res.hour = tstruct.tm_hour;
        res.minute = tstruct.tm_min;
        res.second = tstruct.tm_sec;
        res.millisec = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;
        return res;
    }

    Types::DateAndTime getCurUTCDateAndTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *gmtime(&now);

        Types::DateAndTime res;
        res.year = tstruct.tm_year + 1900;
        res.month = tstruct.tm_mon + 1;
        res.day = tstruct.tm_mday;
        res.hour = tstruct.tm_hour;
        res.minute = tstruct.tm_min;
        res.second = tstruct.tm_sec;
        res.millisec = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;
        return res;
    }
}


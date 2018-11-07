#include "Types.hpp"
#include <ctime>
#include <chrono>


namespace FIX
{
    namespace Types
    {
        //What about 1h time changes? //TODO
        //Time propably could be solved nicer (with POSIX epoch)

        template <class T>
        inline int cmp(const T& a, const T& b)
        {
            if(a < b) return -1;
            if(b < a) return 1;
            return 0;
        }

        bool MonthYear::operator<(const MonthYear& b) const
        {
            int cmpRes;
            cmpRes = cmp(year, b.year); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            cmpRes = cmp(month, b.month); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            return false;
        }

        bool Date::operator<(const Date& b) const
        {
            int cmpRes;
            cmpRes = cmp(year, b.year); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            cmpRes = cmp(month, b.month); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            cmpRes = cmp(day, b.day); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            return false;
        }

        bool Time::operator<(const Time& b) const
        {
            int cmpRes;
            cmpRes = cmp(hour, b.hour); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            cmpRes = cmp(minute, b.minute); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            cmpRes = cmp(second, b.second); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            cmpRes = cmp(millisec, b.millisec); 
            if(cmpRes < 0)return true; 
            if(cmpRes > 0)return false;
            return false;
        }

        bool DateAndTime::operator<(const DateAndTime& b) const
        {
            const Time& time = (Time&)*this;
            const Date& date = (Date&)*this;
            const Time& timeB = (Time&)b;
            const Date& dateB = (Date&)b;

            return cmp(date, dateB) < 0 ||
                    (cmp(date, dateB) == 0 && cmp(time, timeB) < 0);
        }
    }

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
#include "Types.hpp"

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <chrono>

namespace FIX
{
    Boolean boolOfStr(const char* str){
        return (str[0] == 'Y');
    }

    Char charOfStr(const char* str){
        return str[0];
    }

    Int intOfStr(const char* str){
        return atoi(str);
    }

    Float floatOfStr(const char* str){
        return atof(str);
    }

    String stringOfStr(const char* str){
        return str;
    } 

    MonthYear monthYearOfStr(const char* str){
        MonthYear monthYear;
        monthYear.year = 1000*(str[0]-'0') + 100*(str[1]-'0') + 10*(str[2]-'0') + (str[3]-'0');
        monthYear.month = 10*(str[4]-'0') + (str[5]-'0');
        return monthYear;
    }

    Date dateOfStr(const char* str){
        Date date;
        date.year = 1000*(str[0]-'0') + 100*(str[1]-'0') + 10*(str[2]-'0') + (str[3]-'0');
        date.month = 10*(str[4]-'0') + (str[5]-'0');
        date.day = 10*(str[6]-'0') + (str[7]-'0');
        return date;
    }

    Time timeOfStr(const char* str){
        Time res;
        res.hour = 10*(str[0]-'0')+(str[1]-'0');
        res.minute = 10*(str[3]-'0')+(str[4]-'0');
        res.second = 10*(str[6]-'0')+(str[7]-'0');
        if(str[8] == '.')
            res.millisec = 100*(str[9]-'0') + 10*(str[10]-'0') + (str[11]-'0');
        else
            res.millisec = 0;
        return res;
    }

    DateAndTime dateAndTimeOfStr(const char* str){
        DateAndTime dateAndTime;
        (Date&)dateAndTime = dateOfStr(str);
        (Time&)dateAndTime = timeOfStr(str+8);
        return dateAndTime;
    }

    char* writeThere(char* str, Char c){
        *str = c; return str+1;}

    char* writeThere(char* str, Int i){
        return str+sprintf(str, "%d", i);}

    char* writeThere(char* str, Float f){
        return str+sprintf(str, "%f", f);}

    char* writeThere(char* str, String theStr, unsigned size){
        strcpy(str, theStr); return str+size;}

    char* writeThere(char* str, const char* theStr){
        return writeThere(str, theStr, strlen(theStr));
    }

    char* writeThere(char* str, Data data)
    {
        memcpy(str, data.ptr, data.size);
        return str + data.size;
    }

    char* writeThere(char* str, Date date)
    { //YYYYMMDD
        str[0] = '0'+(date.year/1000)%10;
        str[1] = '0'+(date.year/100)%10;
        str[2] = '0'+(date.year/10)%10;
        str[3] = '0'+(date.year)%10;
        str[4] = '0'+(date.month/10)%10;
        str[5] = '0'+(date.month)%10;
        str[6] = '0'+(date.day/10)%10;
        str[7] = '0'+(date.day)%10;
        return str+8;
    }

    char* writeThere(char* str, MonthYear monthYear)
    { //MMDD
        str[0] = '0'+(monthYear.year/1000)%10;
        str[1] = '0'+(monthYear.year/100)%10;
        str[2] = '0'+(monthYear.year/10)%10;
        str[3] = '0'+(monthYear.year)%10;
        str[4] = '0'+(monthYear.month/10)%10;
        str[5] = '0'+(monthYear.month)%10;
        return str+6;
    }

    char* writeThere(char* str, Time time)
    { //YYYYMMDD-HH:MM:SS.sss
        str[0] = '0'+(time.hour/10)%10;
        str[1] = '0'+(time.hour)%10;
        str[2] = ':';
        str[3] = '0'+(time.minute/10)%10;
        str[4] = '0'+(time.minute)%10;
        str[5] = ':';
        str[6] = '0'+(time.second/10)%10;
        str[7] = '0'+(time.second)%10;

        if(time.millisec != 0)
        {
            str[8] = '.';
            str[9] = '0'+(time.millisec/100)%10;
            str[10] = '0'+(time.millisec/10)%10;
            str[11] = '0'+(time.millisec)%10;
            return str+12;
        }
        else
        {
            str[8] = 0;
            return str+8;
        }
    }

    char* writeThere(char* str, DateAndTime dateAndTime)
    {
        auto dateEnd = writeThere(str, (Date&)dateAndTime);
        *dateEnd = '-';
        return writeThere(dateEnd+1, (Time&)dateAndTime);
    }

    char* writeThere(char* str, const MulValString&)
    {
        return nullptr;
    }   


    // current Date and Time getters
    Date getDate()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Date res;
        res.year = tstruct.tm_year + 1900;
        res.month = tstruct.tm_mon + 1;
        res.day = tstruct.tm_mday;
        return res;
    }

    Time getTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Time res;
        res.hour = tstruct.tm_hour;
        res.minute = tstruct.tm_min;
        res.second = tstruct.tm_sec;
        res.millisec = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;
        return res;
    }

    DateAndTime getDateAndTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        DateAndTime res;
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
    Date getUTCDate()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Date res;
        res.year = tstruct.tm_year + 1900;
        res.month = tstruct.tm_mon + 1;
        res.day = tstruct.tm_mday;
        return res;
    }

    Time getUTCTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *localtime(&now);

        Time res;
        res.hour = tstruct.tm_hour;
        res.minute = tstruct.tm_min;
        res.second = tstruct.tm_sec;
        res.millisec = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;
        return res;
    }

    DateAndTime getUTCDateAndTime()
    {
        time_t now = time(0);
        tm tstruct;
        tstruct = *gmtime(&now);

        DateAndTime res;
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
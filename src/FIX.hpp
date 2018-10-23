#include <cstdio>
#include <cstring>
#include <cstdlib>

namespace FIX
{
    extern char SOH;

    namespace Types
    {
        using Boolean = bool;
        using Char = char;
        using Int = int;
        using Float = float;
        using String = const char*;
        struct Data; //Raw data pointer and size
        struct Date; //YYYYMMDD
        struct MonthYear; //YYYYMM
        struct Time; //HH:MM:SS or HH:MM:SS.sss
        struct DateAndTime; //YYYYMMDD-HH:MM:SS or YYYYMMDD-HH:MM:SS.sss
        struct MultipleValueString;

        inline void fromString(const char* str, Boolean& b){b = (str[0] == 'Y');}
        inline void fromString(const char* str, Char& c){c = str[0];}
        inline void fromString(const char* str, Int& i){i = atoi(str);}
        inline void fromString(const char* str, Float& f){f = atof(str);}
        inline void fromString(const char* str, String& theStr){theStr = str;}

        struct Data {void* ptr; unsigned size;};
        struct Date {unsigned short year, month, day;};
        struct MonthYear {unsigned short year, month;};
        struct Time {int hour, minute, second, millisec;};
        struct DateAndTime : Date, Time {};

        inline void fromString(const char* str, Data& data)
        {
            abort(); //xD I have no idea how to parse it yet
        }
        inline void fromString(const char* str, Date& date)
        {
            date.year = 1000*(str[0]-'0') + 100*(str[1]-'0') + 10*(str[2]-'0') + (str[3]-'0');
            date.month = 10*(str[4]-'0') + (str[5]-'0');
            date.day = 10*(str[6]-'0') + (str[7]-'0');
        }
        inline void fromString(const char* str, MonthYear& monthYear)
        {
            monthYear.year = 1000*(str[0]-'0') + 100*(str[1]-'0') + 10*(str[2]-'0') + (str[3]-'0');
            monthYear.month = 10*(str[4]-'0') + (str[5]-'0');
        }
        inline void fromString(const char* str, Time& time)
        {
            time.hour = 10*(str[0]-'0')+(str[1]-'0');
            time.minute = 10*(str[3]-'0')+(str[4]-'0');
            time.second = 10*(str[6]-'0')+(str[7]-'0');
            if(str[8] == '.')
                time.millisec = 100*(str[9]-'0') + 10*(str[10]-'0') + (str[11]-'0');
            else
                time.millisec = 0;
        }
        inline void fromString(const char* str, DateAndTime& dateAndTime)
        {
            fromString(str, (Date&)dateAndTime);
            fromString(str+8, (Time&)dateAndTime);
        }

        struct MultipleValueString
        {

        };

        inline void fromString(const char* str, MultipleValueString& m)
        {}

        template <class T> 
        struct Value
        {
            Value(const char* str) {fromString(str, val);}
            T val;
        };

        inline char* writeThere(char* str, Char c){*str = c; return str+1;}
        inline char* writeThere(char* str, Int i){return str+sprintf(str, "%d", i);}
        inline char* writeThere(char* str, Float f){return str+sprintf(str, "%f", f);}
        inline char* writeThere(char* str, String theStr, unsigned size){strcpy(str, theStr); return str+size;}
        inline char* writeThere(char* str, Data data){return str;}
        inline char* writeThere(char* str, Date date)
        {
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
        inline char* writeThere(char* str, MonthYear monthYear)
        {
            str[0] = '0'+(monthYear.year/1000)%10;
            str[1] = '0'+(monthYear.year/100)%10;
            str[2] = '0'+(monthYear.year/10)%10;
            str[3] = '0'+(monthYear.year)%10;
            str[4] = '0'+(monthYear.month/10)%10;
            str[5] = '0'+(monthYear.month)%10;
            return str+6;
        }
        inline char* writeThere(char* str, Time time)
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
        inline char* writeThere(char* str, DateAndTime dateAndTime)
        {
            auto dateEnd = writeThere(str, (Date&)dateAndTime);
            *dateEnd = '-';
            return writeThere(dateEnd+1, (Time&)dateAndTime);
        }
    } //namespace Types

    Types::Date getCurDate();
    Types::Time getCurTime();
    Types::DateAndTime getCurDateAndTime();

    Types::Date getCurUTCDate();
    Types::Time getCurUTCTime();
    Types::DateAndTime getCurUTCDateAndTime();

} //namespace FIX

#include "genTags.hpp"

#pragma once
#include <cstring>

namespace FIX{
    //Possible types in val field of tag-val 
    using Boolean = bool;
    using Char = char;
    using Int = int;
    using Float = float;
    using String = const char*;

    struct MonthYear {unsigned short year, month; };
    struct Date : MonthYear {unsigned short day; };
    struct Time {int hour, minute, second, millisec; };
    struct DateAndTime : Date, Time {};

    struct Data {void* ptr; unsigned size;}; // Raw Data

    struct MulValString{}; //Not implemented yet


    //Parses data from c-string
    Boolean     boolOfStr(const char*);
    Char        charOfStr(const char*);
    Int         intOfStr(const char*);
    Float       floatOfStr(const char*);
    String      stringOfStr(const char*); // <- actually useless but kept for consistency 
    MonthYear   monthYearOfStr(const char*);
    Date        dateOfStr(const char*);
    Time        timeOfStr(const char*);
    DateAndTime dateAndTimeOfStr(const char*);

    MulValString mulValStrOfStr(const char*) = delete; // MulValString not implemented yet

    //Writes data to specified str and returns pointer to after-last character
    char* writeThere(char* str, Char c);
    char* writeThere(char* str, Int i);
    char* writeThere(char* str, Float f);
    char* writeThere(char* str, const char* theStr);
    char* writeThere(char* str, const char* theStr, unsigned size); //better preformance (?)
    char* writeThere(char* str, Data data);
    char* writeThere(char* str, Date date);
    char* writeThere(char* str, MonthYear monthYear);
    char* writeThere(char* str, Time time);
    char* writeThere(char* str, DateAndTime dateAndTime);
    char* writeThere(char* str, const MulValString&); //not handled yet

    // Current time and date getters
    Date getDate();
    Time getTime();
    DateAndTime getDateAndTime();

    Date geUTCDate();
    Time getUTCTime();
    DateAndTime getUTCDateAndTime();

    //These are returned by Tags structs when asked for specific tagValue
    //See session for exampe use
    extern char SOH;

    template <class T>
    struct writeableTagVal
    {
        writeableTagVal(const char* tagInStr, int tagStrLen, T val) 
        : tag(tagInStr), tagLen(tagStrLen), value(val)
        {}

        const char* tag = "123";
        int tagLen;
        T value;

        char* writeThere(char* where) const {
            strcpy(where, tag);
            where += tagLen;
            *(where++) = '=';
            where = FIX::writeThere(where, value);
            *(where++) = FIX::SOH;
            return where;
        }
    };
} //namespace FIX
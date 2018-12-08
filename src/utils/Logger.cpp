#include "Logger.hpp"

Logger logg;
Logger fileLogg("logs", "log.txt");

Logger::Logger() : outStream(&std::cout), directory("stdout") {}
Logger::Logger( const char* dir, const char* fileName)
{
    outStream = &logFile;

    directory = dir;

    namespace fs = std::filesystem;

    if (!fs::is_directory(directory) || !fs::exists(directory))
    {
        try {fs::create_directory(directory);}

        catch(std::filesystem::__cxx11::filesystem_error& err)
        {
            logg << "[LOGGER ERROR] - " << err.what() << '\n';
        }
    }

    logFile.open(directory + "/" + fileName);
    if(!logFile.is_open())
        logg("[LOGGER ERROR] - couldnt open ", directory, "/", fileName, "!\n");
}

Logger Logger::coLogger(const char* fileName) const
{
    return Logger(directory.c_str(), fileName);
}

Logger Logger::subLogger(const char* subDir, const char* fileName) const
{
    return Logger((directory + "/" + subDir).c_str(), fileName);
}

Logger::Logger(Logger&& toMove)  
{
    *this = std::move(toMove);
}


//21:07:34.007
char* writeTime(char* where, time_t now)
{
    tm tstruct = *gmtime(&now);
    int hours = tstruct.tm_hour;
    int minutes = tstruct.tm_min;
    int seconds = tstruct.tm_sec;
    int milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() % 1000;

    (*where++) = '0' + hours/10;
    (*where++) = '0' + hours%10;
    (*where++) = ':';
    (*where++) = '0' + minutes/10;
    (*where++) = '0' + minutes%10;
    (*where++) = ':';
    (*where++) = '0' + seconds/10;
    (*where++) = '0' + seconds%10;
    (*where++) = '.';
    (*where++) = '0' + milliseconds/100;
    (*where++) = '0' + (milliseconds/10)%10;
    (*where++) = '0' + milliseconds%10;
    return where;
}

//24.12.2018
char* writeDate(char* where, time_t now)
{
    tm tstruct;
    tstruct = *gmtime(&now);

    int year = tstruct.tm_year + 1900;
    int month = tstruct.tm_mon + 1;
    int day = tstruct.tm_mday;

    (*where++) = '0' + day/10;
    (*where++) = '0' + day%10;
    (*where++) = '.';
    (*where++) = '0' + month/10;
    (*where++) = '0' + month%10;
    (*where++) = '.';
    (*where++) = '0' + year/1000;
    (*where++) = '0' + (year/100)%10;
    (*where++) = '0' + (year/10)%10;
    (*where++) = '0' + year%10;
    return where;
}

//[ 21:07:34.007 ]
std::string timeStamp()
{
    std::string result;
    result.resize(2+ 2+1 +2+1 +2+1 +3 +2);
    result[0] = '[';
    result[1] = ' ';
    char* last = writeTime(&result[2], time(0));
    (*last++) = ' ';
    (*last++) = ']';
    return result;
}

//[ 24.12.2018 ]
std::string dateStamp()
{
    std::string result;
    result.resize(2 + 2+1 + 2+1 + 4 + 2);
    result[0] = '[';
    result[1] = ' ';
    char* last = writeDate(&result[2], time(0));
    (*last++) = ' ';
    (*last++) = ']';
    return result;
}

//[ 24.12.2018 - 21:07:34.123 ]
std::string dateAndTimeStamp()
{
    std::string result;
    result.resize(2 + 2+1 + 2+1 + 4 +3+ 2+1+ 2+1 +2+1 + 3 + 2);

    auto now = time(0);

    result[0] = '[';
    result[1] = ' ';
    char* last = writeDate(&result[2], now);
    (*last++) = ' ';
    (*last++) = '-';
    (*last++) = ' ';
    last = writeTime(last, now);
    (*last++) = ' ';
    (*last++) = ']';
    return result;
}
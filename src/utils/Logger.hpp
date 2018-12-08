#pragma once

#include <iostream>
#include <fstream>
#include <filesystem>

/*
    This a class for structured logging
    Each logger has its directory and file and can create 
    others either in same directory or in subFolder
    usage:
        Writing:
        Logger << "starting new log!" << std::endl << ...;
        Logger("starting new log", std::endl, ...);

        Creating others:
        Logger.coLogger(fileName) ->  creates Logger in same directory
        Logger.subLogger(subDir, fileName) -> creates Logger in subDir
    
    There are two predefined Loggers:
        logg -> outputs to stdout
        fileLogg -> outputs to logs/log.txt 
        //This is thought of as base for other co/sub-Loggers

    Helper funcs: 
        (All times are in UTC)
        string timeStamp(); -> [ 21:07:34.007 ]
        string dateStamp(); -> [ 24.12.2018 ]
        string dateAndTimeStamp(); -> [ 24.12.2018 - 21:07:34.123 ]

    Definitions of custom operator<<(Logger&, ...) are at the end of this file
*/


namespace LoggerStuff
{
    template <class T, class Test> struct checker : std::false_type {};
    template <class T> struct checker <T, decltype(std::declval<std::ostream>() << std::declval<T>())> : std::true_type {};
    template <class T> constexpr bool canWrite() {return checker<T, std::ostream&>::value;}
    //canWrite<T>() checks if T can be streamed into std::ostream
}

class Logger
{
public:
    Logger(); //Will output to stdout
    Logger(const char* directory, const char* fileName); //Will output to file in directory

    //Logger << a << b << c ... usage
    template <class T>  typename std::enable_if<LoggerStuff::canWrite<T>(), Logger&>::type
    operator<<(const T& t)
        {*outStream << t; return *this;}

    //Logger(a, b, c, ...) usage
    template <class... Args> void operator()(const Args&... args)
        {((*this) << ... << args);}

    //Co-logger - file will be created in the same folder as base
    Logger coLogger(const char* fileName) const; 

    //Sub-logger - file will be created in subdirectory of base
    Logger subLogger(const char* subDirectory, const char* fileName) const;

    //std::endl etc.
    Logger& operator<<(std::ostream&(*ioManip)(std::ostream&)) 
        {*outStream << ioManip; return *this;}

    Logger(const Logger& other) = delete;
    Logger(Logger&& toMove);
    Logger& operator=(Logger&& toMove)
    {   
        outStream = (toMove.outStream == &toMove.logFile) ? &logFile : &std::cout;
        logFile = std::move(toMove.logFile);
        directory = std::move(toMove.directory);
        return *this;
    }
    

private:
    std::ofstream logFile;
    std::ostream* outStream;

    std::string directory;
};

std::string timeStamp(); // -> [ 21:07:34.007 ]
std::string dateStamp(); // -> [ 24.12.2018 ]
std::string dateAndTimeStamp(); // -> [ 24.12.2018 - 21:07:34.123 ]

//Base project Loggers
extern Logger logg; // logs to stdout
extern Logger fileLogg; //Base file logger


// << operators for some non-std-handled classes

    //std::pair
template <class A, class B>
Logger& operator<<(Logger& logger, const std::pair<A,B>& p)
{
    return logger << "(" << p.first << "," << p.second << ")";
}

    //Iterable containers
template <class T, class I = typename T::const_iterator>
typename std::enable_if<!LoggerStuff::canWrite<T>(), Logger&>::type
operator<<(Logger& logger, const T& t)
{
    logger << "{";
    typename T::const_iterator it = t.begin();
    while(it != t.end())
    {
        logger << *it;
        ++it;
        if(it != t.end())
            logger << ", ";        
    }
    return logger << "}";
}

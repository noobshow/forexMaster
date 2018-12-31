 #pragma once

#include "Symbols.hpp"
#include <functional>
#include <chrono>
#include <utils/Logger.hpp>

/*
    Trade interface provides interface for trading on hedged(multiposition) account
    with one base currency by placing CFD bets (Positions)
    This is a purely virtual class aiming to unify trading interface within the project
*/

class TradeInterface
{
public:
    const Symbols::Symbol baseCurrency; // currency in which money is held

    struct TimePoint;
    struct Tick;

    virtual void subscribeForPrice(Symbols::Pair pair,
                std::function<void(Tick)> callback) = 0;
                //void callback(float bid, float ask, timePoint updateTime);

    struct Position;

    /* "Buys"/"Sells" <amount> of first currency in pair */
    virtual Position buyBet(Symbols::Pair pair, float quantity) = 0;
    virtual Position sellBet(Symbols::Pair pair, float quantitiy) = 0;

    /* Returns gain - position may not be fully closed(!) IOC market order */
    virtual float closePosition(Position& pos) = 0;

    /* Calculates gain if position was to be closed with some price */
    /* Includes for.ex. broker commisions */
    virtual float calculateGain(const Position& pos, float closePrice) const = 0;

    float getBalance() const { return balance; };


    struct TimePoint
    {
        int year, month;
        std::chrono::milliseconds timeSinceStart; //time since start of the month

        TimePoint(){}
        TimePoint(int year, int month, int day, int hour, int minute, int secs, int millis);

        std::chrono::milliseconds timeTo(const TimePoint& b) const;
        bool operator<(const TimePoint& b) const;

        struct Date
        {
            int year, month, day;
            int hour, minute, second, millisec;
        };

        Date toDate() const;
    };

    struct Tick
    {
        float bid, ask;
        TimePoint time;
    };

    struct Position
    {
        Symbols::Pair pair;
        float quantity;
        float openPrice;
        float closePrice;

        enum Type
        {
            Buy,
            Sell,
            Closed
        };
        Type type;

    private:
        friend TradeInterface;
        int ID;
    };
    TradeInterface() : baseCurrency(Symbols::EUR){}
    TradeInterface(Symbols::Symbol baseSymbol, float startBalance);

protected:
    float balance; //in baseCurrency

    //For derivative classes to access Position::ID
    int& getPosID(Position& pos) const { return pos.ID; };
};

Logger& operator<<(Logger& logger, const TradeInterface::TimePoint t);
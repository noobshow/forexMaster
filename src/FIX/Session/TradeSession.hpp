#pragma once

#include "Session.hpp"

namespace FIX
{
class TradeSession : public Session
{
public:
    TradeSession(const Logger& superLogger);

    struct Position
    {
        std::string symbol;
        float quantity; 
        float lastOpPrice;

        enum struct Type{
            Sell,
            Buy,
            Closed
        };
        Type type;
    
    private:
        friend TradeSession;
        std::string ID;
    };

    // Tries to open new position with price between lowestPrice/highestPrice
    // On fail returns nullptr
    // (!!) symbol is broker-specific
    std::unique_ptr<Position> newOrderBuy(const char* symbol, float quantity);
    std::unique_ptr<Position> newOrderSell(const char* symbol, float quantity);
    
    // Modifies position by selling some/buying more etc.
    void newOrderBuy(float quantity, Position& pos);
    void newOrderSell(float quantity, Position& pos);

    void finish();

    ~TradeSession();
private:
    std::unique_ptr<Position> newOrder(Position::Type type, const char* symbol, float quantity);
    void newOrder(Position::Type type, float quantity, Position& pos);

    std::atomic<int> nxtOrderID;
}; //class TradeSession
} //namespace FIX
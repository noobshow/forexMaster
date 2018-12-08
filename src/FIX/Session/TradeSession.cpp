#include "TradeSession.hpp"

namespace FIX
{
    TradeSession::TradeSession(const Logger& superLogger)
    {
        sessionLogg = superLogger.subLogger("tradeSesssion", "tradeSessionLog.txt");
        nxtOrderID = 1;
    }

    void TradeSession::finish()
    {
        ((Session*)this)->finish();
    }

    TradeSession::~TradeSession()
    {
        finish();
    }

    //TODO add order canceling if not filled
    std::unique_ptr<TradeSession::Position> TradeSession::newOrder(
                Position::Type orderType, const char* symbol, float quantity)
    {
        std::string myOrderID = std::to_string(nxtOrderID++);

        int lastCheckedIndex = getLastMessageIndex();
        sendNextMessage(
            FIX::MsgType::tagValOrderSingle,
            FIX::ClOrdID::tagVal(myOrderID.c_str()),
            FIX::Symbol::tagVal(symbol),
            (orderType == Position::Type::Buy ? FIX::Side::tagValBuy : FIX::Side::tagValSell),
            FIX::TransactTime::tagVal(FIX::getUTCDateAndTime()),
            FIX::OrderQty::tagVal(quantity),
            FIX::OrdType::tagValMarket
        );

        std::unique_ptr<Position> result;

        waitForMessage(1000, [&](const Message& msg)->bool
        {
            bool isMyOrder = false;
            char orderStatus;
            const char* positionID;
            float price;
            float filledQuantity;
            
            if(msg.isMsgType(FIX::MsgType::valExecutionReport))
                for(auto&& tagVal : msg.tagVals)
                {
                    if(tagVal.tag == FIX::ClOrdID::tag)
                    {
                        isMyOrder = !strcmp(tagVal.val, myOrderID.c_str());
                    }

                    if(tagVal.tag == FIX::OrdStatus::tag)
                        orderStatus = tagVal.val[0];

                    if(tagVal.tag == FIX::PosMaintRptID::tag)
                        positionID = tagVal.val;

                    if(tagVal.tag == FIX::AvgPx::tag)
                        price = FIX::floatOfStr(tagVal.val);

                    if(tagVal.tag == FIX::CumQty::tag)
                        filledQuantity = FIX::floatOfStr(tagVal.val);
                }

            if(isMyOrder && 
            (orderStatus == FIX::OrdStatus::valFilled
            || orderStatus == FIX::OrdStatus::valPartiallyFilled))
            {
                result = std::make_unique<Position>();
                result->type = orderType;
                result->symbol = symbol;
                result->ID = positionID;
                result->quantity = filledQuantity;
                result->lastOpPrice = price;
                return true;
            }
            else
                return false;

        }, lastCheckedIndex);

        return result;
    }

    std::unique_ptr<TradeSession::Position> TradeSession::newOrderBuy(
                            const char* symbol, float quantity)
        {return newOrder(Position::Type::Buy, symbol, quantity);}

    
    std::unique_ptr<TradeSession::Position> TradeSession::newOrderSell(
                            const char* symbol, float quantity)
        {return newOrder(Position::Type::Sell, symbol, quantity);}


    void TradeSession::newOrder(Position::Type orderType, float quantity, Position& pos)
    {
        std::string myOrderID = std::to_string(nxtOrderID++);

        int lastCheckedIndex = getLastMessageIndex();
        sendNextMessage(
            FIX::MsgType::tagValOrderSingle,
            FIX::ClOrdID::tagVal(myOrderID.c_str()),
            FIX::Symbol::tagVal(pos.symbol.c_str()),
            (orderType == Position::Type::Buy ? FIX::Side::tagValBuy : FIX::Side::tagValSell),
            FIX::TransactTime::tagVal(FIX::getUTCDateAndTime()),
            FIX::OrderQty::tagVal(quantity),
            FIX::OrdType::tagValMarket,
            FIX::PosMaintRptID::tagVal(pos.ID.c_str())
        );

        waitForMessage(1000, [&myOrderID, &pos](const Message& msg)->bool{
            bool isMyOrder = false;
            char orderStatus = FIX::OrdStatus::valStopped;
            float avgPrice = -1;
            float filledQuantity = 0;

            if(msg.isMsgType(FIX::MsgType::valExecutionReport))
                for(auto&& tagVal : msg.tagVals)
                {
                    if(tagVal.tag == FIX::ClOrdID::tag)
                        isMyOrder = !strcmp(tagVal.val, myOrderID.c_str());

                    if(tagVal.tag == FIX::OrdStatus::tag)
                        orderStatus = tagVal.val[0];

                    if(tagVal.tag == FIX::AvgPx::tag)
                        avgPrice = FIX::floatOfStr(tagVal.val);

                    if(tagVal.tag == FIX::CumQty::tag)
                        filledQuantity = FIX::floatOfStr(tagVal.val);
                }

            if(isMyOrder && 
            (orderStatus == FIX::OrdStatus::valFilled 
            || orderStatus == FIX::OrdStatus::valPartiallyFilled))
            {
                pos.quantity -= filledQuantity;
                pos.lastOpPrice = avgPrice;

                if(pos.quantity == 0)
                    pos.type = Position::Type::Closed;

                if(pos.quantity < 0)
                {
                    if(pos.type == Position::Type::Buy)
                        pos.type = Position::Type::Sell;
                    else
                        pos.type = Position::Type::Sell;
                }

                return true;
            }

            return false;
        }, lastCheckedIndex);
    }

    void TradeSession::newOrderBuy(float quantity, Position& pos)
        {newOrder(Position::Type::Buy, quantity, pos);}

    void TradeSession::newOrderSell(float quantity, Position& pos)
        {newOrder(Position::Type::Sell, quantity, pos);}

} //namespace FIX
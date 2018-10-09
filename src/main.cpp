#include "Logger.hpp"
#include "TCPSocket.hpp"
#include <string>



namespace FIX
{
    namespace Types
    {
        //Char
        class Char;
        using Boolean = Char; // Y/N

        //Int
        class Int;
        using DayOfMonth = Int;
        using Length = Int;
        using NumInGroup = Int;
        using SeqNum = Int;
        using TagNum = Int;

        //Float
        class Float;
        using Amt = Float;
        using Percentage = Float;
        using Price = Float;
        using PriceOffset = Float;
        using Qty = Float;

        //String
        class String;
        using Country = String;
    }
}


namespace FIX
{
    namespace Tags
    {
        constexpr const int MsgType = 35;
        constexpr const int Price = 44;
    }

    namespace TagVal
    {
        struct MsgType
        {
            MsgType 

            constexpr const char* Login = "35=1";
            constexpr const char* Logout = "35=2";
            constexpr const char* Reconnect = "34=3";
        }

        namespace Price
        {
            std::string val(float price){return std::string("44=")+std::to_string(price);}
        }

        namespace TradeCondition
        {
            int CashMarket = 1<<0;
            int AveragePriceTrade = 1<<1;

            std::string val(int options){return "oh_fuck";}
        }
    }
}

struct TagData
{
    int tag;
    char* data;
};


int main()
{
    TCPSocket socket;
    socket.connectTo("127.0.0.1", 80);

    using namespace FIX;

    //Writing
    logg << TagVal::MsgType::Login << '\n';
    logg << TagVal::Price::val(40) << '\n';
    logg << 
        TagVal::TradeCondition::val(
            TagVal::TradeCondition::CashMarket
            TagVal::TradeCondition::AveragePriceTrade
        )<< '\n';


    //Reading
    TagData tagData;
    tagData tag = 35;
    tagData data = "1";

    switch(tagData.tag)
    {
        case Tags::MsgType:
        {
            TagVal::MsgType value(tagData.data); //parsing happens here

            if(value.is(TagVal:::MsgType::valLogin)){/*...*/}
            if(value.is(TagVal::MsgType::valLogout)){/*....*/}

        } break;    

        case Tags::Price:
        {
            TagVal::Price value(tagData.data); //parsing happens here
            float price = value.get();


        } break;

        case Tags::TradeCondition:
        {
            TagVal::TradeCondition value(tagData.data);

        }break;

        default:
        {
            log << "unknown tag (" << tagData.tag << "=" << tagData.data << ")!\n";

        } break;
    }

    socket.close();
}


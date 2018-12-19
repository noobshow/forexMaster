#include "HistoricalInterface.hpp"

HistoricalInterface::HistoricalInterface(
        Symbols::Symbol baseCurrnecy, float startingBalance,
        int fromMonth, int fromYear,
        int toMonth, int toYear,
        const Logger& superLogger
    )
    : TradeInterface(baseCurrency, startingBalance)
{
    myLogg = superLogger.subLogger("HistoricalInterface", "HistoricalInterfaceLog.txt");

    try
    {
        dataReader = std::make_unique<DataReader>(Symbols::EURUSD, 1, 2009);
    }

    catch(std::string& error)
    {
        myLogg << "Error while reading historical data: " + error << "\n";
    }

    return;
}

void HistoricalInterface::subscribeForPrice(Symbols::Pair pair, 
            std::function<void(float, float, TimePoint)> callback)
{


}

TradeInterface::Position HistoricalInterface::buyBet(Symbols::Pair pair, float quantity)
{


}

TradeInterface::Position HistoricalInterface::sellBet(Symbols::Pair pair, float quantity)
{


}

float HistoricalInterface::closePosition(Position& pos)
{


}

float HistoricalInterface::calculateGain(const Position& pos, float closePrice) const
{


}

HistoricalInterface::~HistoricalInterface()
{

}
#include "Symbols.hpp"
#include <unordered_map>

namespace Symbols
{
std::unordered_map<std::string, int> strToSymbolMap = {{"AUDCAD", 0},{"AUDCHF", 1},{"AUDJPY", 2},{"AUDNZD", 3},{"AUDUSD", 4},{"BGNRON", 5},{"CADCHF", 6},{"CADJPY", 7},{"CHFBGN", 8},{"CHFJPY", 9},{"CHFRON", 10},{"CHFTRY", 11},{"EURAUD", 12},{"EURCAD", 13},{"EURCHF", 14},{"EURCZK", 15},{"EURDKK", 16},{"EURGBP", 17},{"EURHKD", 18},{"EURHUF", 19},{"EURILS", 20},{"EURJPY", 21},{"EURMXN", 22},{"EURNOK", 23},{"EURNZD", 24},{"EURPLN", 25},{"EURRON", 26},{"EURRUB", 27},{"EURSEK", 28},{"EURSGD", 29},{"EURTRY", 30},{"EURUSD", 31},{"EURZAR", 32},{"GBPAUD", 33},{"GBPBGN", 34},{"GBPCAD", 35},{"GBPCHF", 36},{"GBPCZK", 37},{"GBPDKK", 38},{"GBPHKD", 39},{"GBPHUF", 40},{"GBPJPY", 41},{"GBPNOK", 42},{"GBPNZD", 43},{"GBPPLN", 44},{"GBPRON", 45},{"GBPSEK", 46},{"GBPSGD", 47},{"GBPTRY", 48},{"GBPUSD", 49},{"GBPZAR", 50},{"HKDJPY", 51},{"NZDCAD", 52},{"NZDCHF", 53},{"NZDJPY", 54},{"NZDUSD", 55},{"SGDHKD", 56},{"SGDJPY", 57},{"TRYBGN", 58},{"TRYJPY", 59},{"TRYRON", 60},{"USDBGN", 61},{"USDCAD", 62},{"USDCHF", 63},{"USDCZK", 64},{"USDDKK", 65},{"USDHKD", 66},{"USDHUF", 67},{"USDILS", 68},{"USDJPY", 69},{"USDMXN", 70},{"USDNOK", 71},{"USDPLN", 72},{"USDRON", 73},{"USDRUB", 74},{"USDSEK", 75},{"USDSGD", 76},{"USDTRY", 77},{"USDZAR", 78}};
const char* symbolToStrMap[] = {"AUDCAD","AUDCHF","AUDJPY","AUDNZD","AUDUSD","BGNRON","CADCHF","CADJPY","CHFBGN","CHFJPY","CHFRON","CHFTRY","EURAUD","EURCAD","EURCHF","EURCZK","EURDKK","EURGBP","EURHKD","EURHUF","EURILS","EURJPY","EURMXN","EURNOK","EURNZD","EURPLN","EURRON","EURRUB","EURSEK","EURSGD","EURTRY","EURUSD","EURZAR","GBPAUD","GBPBGN","GBPCAD","GBPCHF","GBPCZK","GBPDKK","GBPHKD","GBPHUF","GBPJPY","GBPNOK","GBPNZD","GBPPLN","GBPRON","GBPSEK","GBPSGD","GBPTRY","GBPUSD","GBPZAR","HKDJPY","NZDCAD","NZDCHF","NZDJPY","NZDUSD","SGDHKD","SGDJPY","TRYBGN","TRYJPY","TRYRON","USDBGN","USDCAD","USDCHF","USDCZK","USDDKK","USDHKD","USDHUF","USDILS","USDJPY","USDMXN","USDNOK","USDPLN","USDRON","USDRUB","USDSEK","USDSGD","USDTRY","USDZAR"};

std::string toStr(Symbols::symbol symbol)
{
  if(0 <= symbol && symbol < Symbols::size)
    return symbolToStrMap[symbol];
  else
    return "NONE";
}

Symbols::symbol fromStr(const char* str)
{
  auto findRes = strToSymbolMap.find(str);
  if(findRes != strToSymbolMap.end())
    return (Symbols::symbol)findRes->second;
  else
    return (Symbols::symbol)-1;
}
} //namespace Symbols

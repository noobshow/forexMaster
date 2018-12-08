#include "Symbols.hpp"
#include <map>
#include <cstring> //for memcpy

namespace Symbols{
  const std::array<Symbol, size> symbols = {AUD,BGN,CAD,CHF,CZK,DKK,EUR,GBP,HKD,HUF,ILS,JPY,MXN,NOK,NZD,PLN,RON,RUB,SEK,SGD,TRY,USD,ZAR};
  const std::set<Pair> pairs = {{AUD,CAD},{AUD,CHF},{AUD,JPY},{AUD,NZD},{AUD,USD},{BGN,RON},{CAD,CHF},{CAD,JPY},{CHF,BGN},{CHF,JPY},{CHF,RON},{CHF,TRY},{EUR,AUD},{EUR,CAD},{EUR,CHF},{EUR,CZK},{EUR,DKK},{EUR,GBP},{EUR,HKD},{EUR,HUF},{EUR,ILS},{EUR,JPY},{EUR,MXN},{EUR,NOK},{EUR,NZD},{EUR,PLN},{EUR,RON},{EUR,RUB},{EUR,SEK},{EUR,SGD},{EUR,TRY},{EUR,USD},{EUR,ZAR},{GBP,AUD},{GBP,BGN},{GBP,CAD},{GBP,CHF},{GBP,CZK},{GBP,DKK},{GBP,HKD},{GBP,HUF},{GBP,JPY},{GBP,NOK},{GBP,NZD},{GBP,PLN},{GBP,RON},{GBP,SEK},{GBP,SGD},{GBP,TRY},{GBP,USD},{GBP,ZAR},{HKD,JPY},{NZD,CAD},{NZD,CHF},{NZD,JPY},{NZD,USD},{SGD,HKD},{SGD,JPY},{TRY,BGN},{TRY,JPY},{TRY,RON},{USD,BGN},{USD,CAD},{USD,CHF},{USD,CZK},{USD,DKK},{USD,HKD},{USD,HUF},{USD,ILS},{USD,JPY},{USD,MXN},{USD,NOK},{USD,PLN},{USD,RON},{USD,RUB},{USD,SEK},{USD,SGD},{USD,TRY},{USD,ZAR}};

  std::map<std::string, Symbol> strToSymbolMap = {{"AUD",AUD},{"BGN",BGN},{"CAD",CAD},{"CHF",CHF},{"CZK",CZK},{"DKK",DKK},{"EUR",EUR},{"GBP",GBP},{"HKD",HKD},{"HUF",HUF},{"ILS",ILS},{"JPY",JPY},{"MXN",MXN},{"NOK",NOK},{"NZD",NZD},{"PLN",PLN},{"RON",RON},{"RUB",RUB},{"SEK",SEK},{"SGD",SGD},{"TRY",TRY},{"USD",USD},{"ZAR",ZAR}};

  Symbols::Symbol symbolFromStr(const char* symbolStr){
    auto findRes = strToSymbolMap.find(symbolStr);
    if(findRes == strToSymbolMap.end())
      return (Symbol)-1;
    else
      return findRes->second;
  }

  Symbols::Pair pairFromStr(const char* symbolPairStr){
    char frst[4];
    memcpy(frst, symbolPairStr, 3); frst[3] = 0;
    return Pair(symbolFromStr(frst), symbolFromStr(symbolPairStr+3));
  }

  const char* symbolToStrMap[] = {"AUD","BGN","CAD","CHF","CZK","DKK","EUR","GBP","HKD","HUF","ILS","JPY","MXN","NOK","NZD","PLN","RON","RUB","SEK","SGD","TRY","USD","ZAR"};

  std::string toStr(Symbols::Symbol symbol){
    if(0 <= symbol && symbol < Symbols::size)
      return symbolToStrMap[symbol];
    else
      return "ERR";
  }

  std::string toStr(Symbols::Pair pair)
    {return toStr(pair.first) + toStr(pair.second);}

const Pair AUDCAD = {AUD, CAD};
const Pair AUDCHF = {AUD, CHF};
const Pair AUDJPY = {AUD, JPY};
const Pair AUDNZD = {AUD, NZD};
const Pair AUDUSD = {AUD, USD};
const Pair BGNRON = {BGN, RON};
const Pair CADCHF = {CAD, CHF};
const Pair CADJPY = {CAD, JPY};
const Pair CHFBGN = {CHF, BGN};
const Pair CHFJPY = {CHF, JPY};
const Pair CHFRON = {CHF, RON};
const Pair CHFTRY = {CHF, TRY};
const Pair EURAUD = {EUR, AUD};
const Pair EURCAD = {EUR, CAD};
const Pair EURCHF = {EUR, CHF};
const Pair EURCZK = {EUR, CZK};
const Pair EURDKK = {EUR, DKK};
const Pair EURGBP = {EUR, GBP};
const Pair EURHKD = {EUR, HKD};
const Pair EURHUF = {EUR, HUF};
const Pair EURILS = {EUR, ILS};
const Pair EURJPY = {EUR, JPY};
const Pair EURMXN = {EUR, MXN};
const Pair EURNOK = {EUR, NOK};
const Pair EURNZD = {EUR, NZD};
const Pair EURPLN = {EUR, PLN};
const Pair EURRON = {EUR, RON};
const Pair EURRUB = {EUR, RUB};
const Pair EURSEK = {EUR, SEK};
const Pair EURSGD = {EUR, SGD};
const Pair EURTRY = {EUR, TRY};
const Pair EURUSD = {EUR, USD};
const Pair EURZAR = {EUR, ZAR};
const Pair GBPAUD = {GBP, AUD};
const Pair GBPBGN = {GBP, BGN};
const Pair GBPCAD = {GBP, CAD};
const Pair GBPCHF = {GBP, CHF};
const Pair GBPCZK = {GBP, CZK};
const Pair GBPDKK = {GBP, DKK};
const Pair GBPHKD = {GBP, HKD};
const Pair GBPHUF = {GBP, HUF};
const Pair GBPJPY = {GBP, JPY};
const Pair GBPNOK = {GBP, NOK};
const Pair GBPNZD = {GBP, NZD};
const Pair GBPPLN = {GBP, PLN};
const Pair GBPRON = {GBP, RON};
const Pair GBPSEK = {GBP, SEK};
const Pair GBPSGD = {GBP, SGD};
const Pair GBPTRY = {GBP, TRY};
const Pair GBPUSD = {GBP, USD};
const Pair GBPZAR = {GBP, ZAR};
const Pair HKDJPY = {HKD, JPY};
const Pair NZDCAD = {NZD, CAD};
const Pair NZDCHF = {NZD, CHF};
const Pair NZDJPY = {NZD, JPY};
const Pair NZDUSD = {NZD, USD};
const Pair SGDHKD = {SGD, HKD};
const Pair SGDJPY = {SGD, JPY};
const Pair TRYBGN = {TRY, BGN};
const Pair TRYJPY = {TRY, JPY};
const Pair TRYRON = {TRY, RON};
const Pair USDBGN = {USD, BGN};
const Pair USDCAD = {USD, CAD};
const Pair USDCHF = {USD, CHF};
const Pair USDCZK = {USD, CZK};
const Pair USDDKK = {USD, DKK};
const Pair USDHKD = {USD, HKD};
const Pair USDHUF = {USD, HUF};
const Pair USDILS = {USD, ILS};
const Pair USDJPY = {USD, JPY};
const Pair USDMXN = {USD, MXN};
const Pair USDNOK = {USD, NOK};
const Pair USDPLN = {USD, PLN};
const Pair USDRON = {USD, RON};
const Pair USDRUB = {USD, RUB};
const Pair USDSEK = {USD, SEK};
const Pair USDSGD = {USD, SGD};
const Pair USDTRY = {USD, TRY};
const Pair USDZAR = {USD, ZAR};
} //namespace Symbols

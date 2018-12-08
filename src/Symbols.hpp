#pragma once
#include <string>
#include <set>
#include <array>

namespace Symbols{
  enum Symbol{AUD = 0, BGN, CAD, CHF, CZK, DKK, EUR, GBP, HKD, HUF, ILS, JPY, MXN, NOK, NZD, PLN, RON, RUB, SEK, SGD, TRY, USD, ZAR  };
  static constexpr const int size = 23;

  extern const std::array<Symbol, size> symbols;


  using Pair = std::pair<Symbol, Symbol>;

  // Returns corresponding symbol index or -1 if not found
  Symbols::Symbol symbolFromStr(const char* symbolStr);
  Symbols::Pair pairFromStr(const char* symbolPairStr);

  std::string toStr(Symbols::Symbol symbol);
  std::string toStr(Symbols::Pair pair);

  extern const std::set<Pair> pairs;

  extern const Pair AUDCAD;
  extern const Pair AUDCHF;
  extern const Pair AUDJPY;
  extern const Pair AUDNZD;
  extern const Pair AUDUSD;
  extern const Pair BGNRON;
  extern const Pair CADCHF;
  extern const Pair CADJPY;
  extern const Pair CHFBGN;
  extern const Pair CHFJPY;
  extern const Pair CHFRON;
  extern const Pair CHFTRY;
  extern const Pair EURAUD;
  extern const Pair EURCAD;
  extern const Pair EURCHF;
  extern const Pair EURCZK;
  extern const Pair EURDKK;
  extern const Pair EURGBP;
  extern const Pair EURHKD;
  extern const Pair EURHUF;
  extern const Pair EURILS;
  extern const Pair EURJPY;
  extern const Pair EURMXN;
  extern const Pair EURNOK;
  extern const Pair EURNZD;
  extern const Pair EURPLN;
  extern const Pair EURRON;
  extern const Pair EURRUB;
  extern const Pair EURSEK;
  extern const Pair EURSGD;
  extern const Pair EURTRY;
  extern const Pair EURUSD;
  extern const Pair EURZAR;
  extern const Pair GBPAUD;
  extern const Pair GBPBGN;
  extern const Pair GBPCAD;
  extern const Pair GBPCHF;
  extern const Pair GBPCZK;
  extern const Pair GBPDKK;
  extern const Pair GBPHKD;
  extern const Pair GBPHUF;
  extern const Pair GBPJPY;
  extern const Pair GBPNOK;
  extern const Pair GBPNZD;
  extern const Pair GBPPLN;
  extern const Pair GBPRON;
  extern const Pair GBPSEK;
  extern const Pair GBPSGD;
  extern const Pair GBPTRY;
  extern const Pair GBPUSD;
  extern const Pair GBPZAR;
  extern const Pair HKDJPY;
  extern const Pair NZDCAD;
  extern const Pair NZDCHF;
  extern const Pair NZDJPY;
  extern const Pair NZDUSD;
  extern const Pair SGDHKD;
  extern const Pair SGDJPY;
  extern const Pair TRYBGN;
  extern const Pair TRYJPY;
  extern const Pair TRYRON;
  extern const Pair USDBGN;
  extern const Pair USDCAD;
  extern const Pair USDCHF;
  extern const Pair USDCZK;
  extern const Pair USDDKK;
  extern const Pair USDHKD;
  extern const Pair USDHUF;
  extern const Pair USDILS;
  extern const Pair USDJPY;
  extern const Pair USDMXN;
  extern const Pair USDNOK;
  extern const Pair USDPLN;
  extern const Pair USDRON;
  extern const Pair USDRUB;
  extern const Pair USDSEK;
  extern const Pair USDSGD;
  extern const Pair USDTRY;
  extern const Pair USDZAR;

} //namespace Symbols

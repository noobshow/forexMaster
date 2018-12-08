#!/usr/bin/python3

import sys

pairList = sorted(open(sys.argv[1], "r").read().split())
print(pairList)

symbolList = [pair[:3] for pair in pairList] + [pair[3:] for pair in pairList]
symbolList = sorted(list(set(symbolList)))

print(symbolList)

tab = "  "

#HPP
'''
#pragma once
#include <string>
#include <set>
#include <array>

namespace Symbols{
  enum Symbol
  {
    EUR = 0, USD, GBP, ...
  };
  static constexpr const int size = (symbolsNum); //number of symbols

  extern std::array<Symbol, size> symbols;


  //Pairs
  using Pair = std::pair<Symbol, Symbol>;

  extern const std::set<Pair> pairs;

  // Returns corresponding symbol index or -1 if not found
  Symbols::Symbol symbolFromStr(const char* symbolStr);
  Symbols::Pair pairFromStr(const char* symbolPairStr);

  std::string toStr(Symbols::Symbol symbol);
  std::string toStr(Symbols::Pair pair);

  extern const Pair EURUSD;
  extern const Pair USDGBP;
  ...
} //namespace Symbols
'''

result = open("src/Symbols.hpp", "w")
result.write("#pragma once\n")
result.write("#include <string>\n")
result.write("#include <set>\n")
result.write("#include <array>\n")
result.write("\n")
result.write("namespace Symbols{\n")

#enum Symbol
result.write(tab+"enum Symbol{")

for (i, symbol) in enumerate(symbolList):
    result.write(symbol)
    if i == 0:
        result.write(" = 0")
    if i+1 != len(symbolList):
        result.write(", ")

result.write(tab+"};\n")
result.write(tab+"static constexpr const int size = "+str(len(symbolList))+";\n")
result.write("\n")
result.write(tab+"extern const std::array<Symbol, size> symbols;\n")
result.write("\n")

result.write("\n")
#Pair
result.write(tab+"using Pair = std::pair<Symbol, Symbol>;\n")
result.write("\n")
result.write(tab+"// Returns corresponding symbol index or -1 if not found\n")
result.write(tab+"Symbols::Symbol symbolFromStr(const char* symbolStr);\n")
result.write(tab+"Symbols::Pair pairFromStr(const char* symbolPairStr);\n")
result.write("\n")
result.write(tab+"std::string toStr(Symbols::Symbol symbol);\n")
result.write(tab+"std::string toStr(Symbols::Pair pair);\n")
result.write("\n")
result.write(tab+"extern const std::set<Pair> pairs;\n")
result.write("\n")
for pair in pairList:
    result.write(tab+"extern const Pair "+pair+";\n")
result.write("\n")
result.write("} //namespace Symbols\n")

#CPP
'''
#include "Symbols.hpp"
#include <map>
#include <cstring> //for memcpy

namespace Symbols{
    extern const std::array<Symbol, "+len(symbolList)+"> symbols = {EUR, USD, ...};
    extern const std::set<Pair> pairs = {{EUR,USD}, ..}

    std::map<std::string, Symbol> strToSymbolMap = {{"EUR", EUR},...};

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

    const char* symbolToStrMap[] = {"EUR", ...};

    std::string toStr(Symbols::Symbol symbol){
        if(0 <= symbol && symbol < Symbols::size)
            return symbolToStrMap[symbol];
        else
            return "ERR";
    }

    std::string toStr(Symbols::Pair pair)
        {return toStr(pair.first) + toStr(pair.second);}

    const Pair EURUSD = {EUR, USD};
    ...

} //namespace Symbols
'''
result = open("src/Symbols.cpp", "w")
result.write("#include \"Symbols.hpp\"\n")
result.write("#include <map>\n")
result.write("#include <cstring> //for memcpy\n")
result.write('\n')
result.write("namespace Symbols{\n")

result.write(tab+"const std::array<Symbol, size> symbols = {")
for (i, symbol) in enumerate(symbolList):
    result.write(symbol)
    if i+1 != len(symbolList):
        result.write(",")
result.write("};\n")

result.write(tab+"const std::set<Pair> pairs = {")
for (i, pair) in enumerate(pairList):
    result.write("{" + pair[:3] + "," + pair[3:] + "}")
    if i+1 != len(pairList):
        result.write(",")
result.write("};\n")
result.write("\n")

#symbolToStrMap
result.write(tab+"std::map<std::string, Symbol> strToSymbolMap = {")
for (i, symbol) in enumerate(symbolList):
    result.write("{\"" + symbol + "\"," + symbol + "}")
    if i+1 != len(symbolList):
        result.write(",")
result.write("};\n")
result.write("\n")

#symbolFromStr
result.write(tab+"Symbols::Symbol symbolFromStr(const char* symbolStr){\n")
result.write(tab+tab+"auto findRes = strToSymbolMap.find(symbolStr);\n")
result.write(tab+tab+"if(findRes == strToSymbolMap.end())\n")
result.write(tab+tab+tab+"return (Symbol)-1;\n")
result.write(tab+tab+"else\n")
result.write(tab+tab+tab+"return findRes->second;\n")
result.write(tab+"}\n")
result.write("\n")

result.write(tab+"Symbols::Pair pairFromStr(const char* symbolPairStr){\n")
result.write(tab+tab+"char frst[4];\n")
result.write(tab+tab+"memcpy(frst, symbolPairStr, 3); frst[3] = 0;\n")
result.write(tab+tab+"return Pair(symbolFromStr(frst), symbolFromStr(symbolPairStr+3));\n")
result.write(tab+"}\n")
result.write("\n")

#strFromSymbol
result.write(tab+"const char* symbolToStrMap[] = {")
for (i, symbol) in enumerate(symbolList):
    result.write('"'+symbol+'"')
    if i+1 != len(symbolList):
        result.write(",")
result.write("};\n")
result.write("\n")

result.write(tab+"std::string toStr(Symbols::Symbol symbol){\n")
result.write(tab+tab+"if(0 <= symbol && symbol < Symbols::size)\n")
result.write(tab+tab+tab+"return symbolToStrMap[symbol];\n")
result.write(tab+tab+"else\n")
result.write(tab+tab+tab+'return "ERR";\n')
result.write(tab+"}\n")
result.write("\n")

result.write(tab+"std::string toStr(Symbols::Pair pair)\n")
result.write(tab+tab+"{return toStr(pair.first) + toStr(pair.second);}\n")
result.write("\n")

#pairs
for pair in pairList:
    result.write("const Pair " + pair + " = " + "{" + pair[:3] + ", " + pair[3:] + "};\n")




result.write("} //namespace Symbols\n")


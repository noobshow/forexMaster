import sys

symbolList = open(sys.argv[1], "r").read().split()
print(symbolList)

tab = "  "

#HPP
result = open("src/Symbols.hpp", "w")
result.write("#pragma once\n")
result.write("#include <string>\n")
result.write("\n")
result.write("namespace Symbols{\n")
result.write("enum symbol{\n")
result.write(tab+ symbolList[0] + " = 0, ")

for i in range(1, len(symbolList)):
    result.write(symbolList[i]+", ")
result.write("\n" + tab+ "size\n")

result.write(tab+"};\n")
result.write("\n")

result.write(tab+ "Symbols::symbol fromStr(const char* symbolStr);")
result.write("// Returns corresponding symbol index or -1 if not found\n")
result.write(tab+"std::string toStr(Symbols::symbol symbol);\n")
result.write("\n")
result.write("}\n")

#CPP
result = open("src/Symbols.cpp", "w")
result.write("#include \"Symbols.hpp\"\n")
result.write("#include <unordered_map>\n")
result.write("\n")
result.write("namespace Symbols\n{\n")
result.write("std::unordered_map<std::string, int> strToSymbolMap = {")

for (i, symbol) in enumerate(symbolList):
    result.write("{\""+symbol+"\", " + str(i) + "}")
    if i != len(symbolList)-1:
        result.write(",")
result.write("};\n")

result.write("const char* symbolToStrMap[] = {")
for (i, symbol) in enumerate(symbolList):
    result.write("\""+symbol+"\"")
    if i != len(symbolList)-1:
        result.write(",")
result.write("};\n")
result.write("\n")
result.write("std::string toStr(Symbols::symbol symbol)\n")
result.write("{\n")
result.write(tab+ "if(0 <= symbol && symbol < Symbols::size)\n")
result.write(tab+tab + "return symbolToStrMap[symbol];\n")
result.write(tab+ "else\n")
result.write(tab+tab + "return \"NONE\";\n")
result.write("}\n")
result.write("\n")
result.write("Symbols::symbol fromStr(const char* str)\n")
result.write("{\n")
result.write(tab+ "auto findRes = strToSymbolMap.find(str);\n")
result.write(tab+ "if(findRes != strToSymbolMap.end())\n")
result.write(tab+tab+ "return findRes->second;\n")
result.write(tab+ "else\n")
result.write(tab+tab + "return -1;\n")
result.write("}\n")

result.write("} //namespace Symbols\n")


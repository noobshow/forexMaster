import sys;


realType = {
"Boolean" : "Boolean",
"char" : "Char",
"data" : "Data",
"float" : "Float",
"Amt" : "Float",
"Percentage" : "Float",
"Price" : "Float",
"PriceOffset" : "Float",
"Qty" : "Float",
"int" : "Int",
"day-of-month" : "Int",
"Length" : "Int",
"NumInGroup" : "Int",
"SeqNum" : "Int",
"TagNum" : "Int",
"String" : "String",
"Country" : "String",
"Currency" : "String",
"Exchange" : "String",
"LocalMktDate" : "Date",
"month-year" : "MonthYear",
"MultipleValueString" : "MulValString",
"UTCDateOnly" : "Date",
"UTCTimeOnly" : "Time",
"UTCTimestamp" : "DateAndTime"
}

tab = "  "


#HPP
def startHpp(hpp):
    hpp.write("#pragma once\n\n")
    hpp.write("#include <string>\n")
    hpp.write("#include \"Types.hpp\"\n")
    hpp.write("\n")
    hpp.write("namespace FIX\n")
    hpp.write("{\n")
    hpp.write("std::string toHuman(int tag, const char* val);\n\n")

def createHpp(tagNum, tagName, tagType, vals, hpp):
        #Beggining of the class
        hpp.write("struct " + tagName + "\n")
        hpp.write("{\n")
        hpp.write(tab + "constexpr static const int tag = " + tagNum + ";\n")
        hpp.write(tab + "constexpr static const char* name = \"" + tagName + "\";\n")
        hpp.write("\n")

        if tagType != "MulValStr":
            hpp.write(tab + "static writeableTagVal<" + tagType + "> tagVal(")
            if tagType == "Boolean":
                hpp.write("bool data")
            if tagType == "Char":
                hpp.write("char data")
            if tagType == "Int":
                hpp.write("int data")
            if tagType == "Float":
                hpp.write("float data")
            if tagType == "String":
                hpp.write("const char* data")
            if tagType == "Data":
                hpp.write("Data data")
            if tagType == "Date":
                hpp.write("Date data")
            if tagType == "MonthYear":
                hpp.write("MonthYear data")
            if tagType == "Time":
                hpp.write("Time data")
            if tagType == "DateAndTime":
                hpp.write("DateAndTime data")
            hpp.write(");\n")
            
        #Possible values
        if len(vals) > 0:
            hpp.write("\n")
        for valName, val in vals:
            if tagType == "Boolean":
                hpp.write(tab + "constexpr static const bool val" + valName + " = " + ("true" if val == 'Y' else "false") + ";\n")
            if tagType == "Char":
                hpp.write(tab + "constexpr static const char val" + valName + " = " + "'" + val + "';\n")
            if tagType == "Int":
                hpp.write(tab + "constexpr static const int val" + valName + " = " + val + ";\n")
            if tagType == "Float":
                hpp.write(tab + "constexpr static const float val" + valName + " = " + val + ";\n")
            if tagType == "String" or tagType == "MulValString":
                hpp.write(tab + "constexpr static const char* val" + valName + " = " + "\"" + val + "\";\n")

        #Possible tag+val values
        if len(vals) > 0:
            hpp.write("\n")
        for valName, val in vals:
            hpp.write(tab+ "constexpr static const char* tagVal" + valName + " = \"" + tagNum + "=" + val + "\";\n")

        hpp.write("\n")
        hpp.write("};\n")
        hpp.write("\n")

def endHpp(hpp):
    hpp.write("} //namespace FIX\n")

    
#CPP
def startCpp(cpp):
    cpp.write("#include \"Tags.hpp\"\n")
    cpp.write("#include <cstring>\n")
    cpp.write("#include <cstdio>\n")
    cpp.write("\n")
    cpp.write("namespace FIX\n")
    cpp.write("{\n")

def createCpp(tagNum, tagName, tagType, vals, cpp):
    if tagType != "MulValStr":
        cpp.write(tab + "writeableTagVal<" + tagType + "> " + tagName + "::tagVal(")
        if tagType == "Boolean":
            cpp.write("bool data")
        if tagType == "Char":
            cpp.write("char data")
        if tagType == "Int":
            cpp.write("int data")
        if tagType == "Float":
            cpp.write("float data")
        if tagType == "String":
            cpp.write("const char* data")
        if tagType == "Data":
            cpp.write("Data data")
        if tagType == "Date":
            cpp.write("Date data")
        if tagType == "MonthYear":
            cpp.write("MonthYear data")
        if tagType == "Time":
            cpp.write("Time data")
        if tagType == "DateAndTime":
            cpp.write("DateAndTime data")
        cpp.write(")\n")
        cpp.write(tab + "{\n")

        if tagType != "MulValString":
            cpp.write(tab+tab+ "return writeableTagVal<" + tagType + ">(\"")
            cpp.write(tagNum+ "\", " + str(len(tagNum)) + ", data);\n")
        cpp.write(tab + "}\n")
    cpp.write('\n')

    

def endCpp(cpp, tagVals):
    cpp.write("std::string toHuman(int tag, const char* val)\n")
    cpp.write("{\n")
    cpp.write(tab+ "std::string res;\n")
    cpp.write(tab+ "bool foundValue = false;\n")
    cpp.write(tab+ "switch(tag)\n")
    cpp.write(tab+ "{\n")
    
    for (tagNum, tagName, tagType, vals) in tagVals:
        cpp.write(tab+ "case FIX::" + tagName + "::tag: {\n")
        

        if len(vals) > 0:
            if tagType == "Boolean":
                cpp.write(tab+tab+ "FIX::Boolean value = boolOfStr(val);\n")
            if tagType == "Char":
                cpp.write(tab+tab+ "FIX::Char value = charOfStr(val);\n")
            if tagType == "Int":
                cpp.write(tab+tab+ "FIX::Int value = intOfStr(val);\n")
            if tagType == "Float":
                cpp.write(tab+tab+ "FIX::Float value = floatOfStr(val);\n")
            if tagType == "String":
                cpp.write(tab+tab+ "FIX::String value = stringOfStr(val);\n")
            #if tagType == "MulValString":
                

        cpp.write(tab+tab+ "res = \"" + tagName + " = \";\n")

        if tagType != "MulValString": #unhandled
            for (valueName, value) in vals:
                if tagType == "String":
                    cpp.write(tab+tab+ "if(!strcmp(value, FIX::"+tagName+"::val"+valueName+"))\n")
                else:
                    cpp.write(tab+tab+ "if(value == FIX::"+tagName+"::val"+valueName+")\n")
                cpp.write(tab+tab+ "{\n")
                cpp.write(tab+tab+tab+ "foundValue = true;\n")
                cpp.write(tab+tab+tab+ "res += \"" + valueName + "\";\n")
                cpp.write(tab+tab+ "}\n")
        cpp.write(tab+tab+ "if(!foundValue)\n")
        cpp.write(tab+tab+tab+ "res += val;\n")
        cpp.write(tab+"}break;\n\n")

    cpp.write("}\n")

    cpp.write("return res;\n")
    cpp.write("}\n")
    cpp.write("} //namespace FIX\n")



#Main function
if len(sys.argv) < 2:
    print("You have to provide dictionary file as an argument!")
    exit()

dicFilePath = sys.argv[1]
dicFile = open(dicFilePath, "r")
dictionary = dicFile.read().split()

tagVals = []

curDicPos = 0
while curDicPos < len(dictionary):
    tagNum = dictionary[curDicPos]
    curDicPos += 1

    tagName = dictionary[curDicPos]
    curDicPos += 1

    tagType = dictionary[curDicPos]
    curDicPos += 1
    tagType = realType[tagType]

    vals = []

    while curDicPos < len(dictionary):
        val = dictionary[curDicPos]
        curDicPos += 1
        
        if val[0] == '#':
            break

        valName = dictionary[curDicPos]
        curDicPos += 1
        vals += [(valName, val)]

    tagVals += [(tagNum, tagName, tagType, vals)]

hpp = open("src/FIX/Tags.hpp", "w")
cpp = open("src/FIX/Tags.cpp", "w")

welcomeMessage = """
// This file has been automatically generated via fixGen/dic2Code.py
// On base of """ + dicFilePath + " fix dictionary\n"; 

hpp.write(welcomeMessage)
cpp.write(welcomeMessage)

startHpp(hpp)
startCpp(cpp)

for (tagNum, tagName, tagType, vals) in tagVals:
    createHpp(tagNum, tagName, tagType, vals, hpp)
    createCpp(tagNum, tagName, tagType, vals, cpp)

endHpp(hpp)
endCpp(cpp, tagVals)

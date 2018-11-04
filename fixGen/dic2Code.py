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
"MultipleValueString" : "MultipleValueString",
"UTCDateOnly" : "Date",
"UTCTimeOnly" : "Time",
"UTCTimestamp" : "DateAndTime"
}

tab = "  "


#HPP
def startHpp(hpp):
    hpp.write("#include <string>\n")
    hpp.write("\n")
    hpp.write("namespace FIX\n")
    hpp.write("{\n")
    hpp.write(tab+"std::string toHuman(int tag, const char* val);\n")

def createHpp(tagNum, tagName, tagType, vals, hpp):
        #Beggining of the class
        hpp.write("struct " + tagName + " : Types::Value<Types::" + tagType + ">\n")
        hpp.write("{\n")
        hpp.write(tab + "constexpr static const int tag = " + tagNum + ";\n")
        hpp.write(tab + "constexpr static const char* name = \"" + tagName + "\";\n")
        hpp.write("\n")

        #static const char* tagVal(value...)
        hpp.write(tab + "static const char* tagVal(")
        if tagType == "Boolean":
            hpp.write("bool b")
        if tagType == "Char":
            hpp.write("char c")
        if tagType == "Int":
            hpp.write("int i")
        if tagType == "Float":
            hpp.write("float f")
        if tagType == "String":
            hpp.write("const char* str")
        if tagType == "Data":
            hpp.write("void* data, unsigned size")
        if tagType == "Date":
            hpp.write("int day, int month, int year")
        if tagType == "MonthYear":
            hpp.write("int month, int year")
        if tagType == "Time":
            hpp.write("int hour, int minute, int second, int millisec = 0")
        if tagType == "DateAndTime":
            hpp.write("int day, int month, int year" + ", " +  "int hour, int minute, int second, int millisec = 0")
        hpp.write(")\n")
        hpp.write(tab + "{\n")
        if tagType != "Data" and tagType != "MultipleValueString": #unhandled types
            hpp.write(tab+tab+ "char* whereWrite = toStrBuff + " + str(len(tagNum)+1) + ";\n") 

        if tagType == "Boolean":
            hpp.write(tab+tab + "Types::writeThere(whereWrite, b);\n")
        if tagType == "Char":
            hpp.write(tab+tab + "Types::writeThere(whereWrite, c);\n")
        if tagType == "Int":
            hpp.write(tab+tab + "Types::writeThere(whereWrite, i);\n")
        if tagType == "Float":
            hpp.write(tab+tab + "Types::writeThere(whereWrite, f);\n")
        if tagType == "String":
            hpp.write(tab+tab + "Types::writeThere(whereWrite, str, 0);\n")
        #if(tagType == "Data"):

        if tagType == "Date":
            hpp.write(tab+tab + "Types::Date date; date.year = year; date.month = month; date.day = day;\n")
            hpp.write(tab+tab + "Types::writeThere(whereWrite, date);\n")
  
        if tagType == "MonthYear":
            hpp.write(tab+tab + "Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;\n")
            hpp.write(tab+tab + "Types::writeThere(whereWrite, monthYear);\n")
        if tagType == "Time":
            hpp.write(tab+tab + "Types::Time time; time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;\n")
            hpp.write(tab+tab + "Types::writeThere(whereWrite, time);\n")
        if tagType == "DateAndTime":
            hpp.write(tab+tab + "Types::DateAndTime dateAndTime; ")
            hpp.write(tab+tab + "Types::Date& date = dateAndTime; ")
            hpp.write(tab+tab + "Types::Time& time = dateAndTime;\n")
            hpp.write(tab+tab + "date.year = year; date.month = month; date.day = day;\n")
            hpp.write(tab+tab + "time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;\n")
            hpp.write(tab+tab + "Types::writeThere(whereWrite, dateAndTime);\n")
        hpp.write(tab+tab+ "return toStrBuff;\n")
        hpp.write(tab + "}\n")
        
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
            if tagType == "String":
                hpp.write(tab + "constexpr static const char* val" + valName + " = " + "\"" + val + "\";\n")
            #if(tagType == "Data"):

        #Possible tag+val values
        if len(vals) > 0:
            hpp.write("\n")
        for valName, val in vals:
            hpp.write(tab+ "constexpr static const char* tagVal" + valName + " = \"" + tagNum + "=" + val + "\";\n")

        hpp.write("\n")
        #Value constructor
        hpp.write(tab+"using Types::Value<Types::" + tagType + ">::Value;\n")
        hpp.write("\n")
        #Buffer used to create tagVal
        hpp.write(tab+"static char toStrBuff[];\n")
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
    cpp.write("char " + tagName + "::toStrBuff[1024];\n")
    cpp.write("char " + tagName + "StrBuffInit = (memcpy(" + tagName + "::toStrBuff, \"" + str(tagNum) + r"=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0" + "\", 10), 0);\n")
    cpp.write("\n")

def endCpp(cpp):
    cpp.write("std::string toHuman(int tag, const char* val)\n")
    cpp.write("{\n")
    cpp.write("return \"\";\n")
    cpp.write("}\n")
    cpp.write("} //namespace FIX\n")



#Main function
if len(sys.argv) < 2:
    print("You have to provide dictionary file as an argument!")
    exit()

dicFilePath = sys.argv[1]
dicFile = open(dicFilePath, "r")
dictionary = dicFile.read().split()

hpp = open("src/FIX/genTags.hpp", "w")
cpp = open("src/FIX/genTags.cpp", "w")

startHpp(hpp)
startCpp(cpp)


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
    
    createHpp(tagNum, tagName, tagType, vals, hpp)
    createCpp(tagNum, tagName, tagType, vals, cpp)

endHpp(hpp)
endCpp(cpp)

#include <bits/stdc++.h>

using namespace std;

struct Tag
{
    int num;
    string name;
    string type;
    vector<pair<string, string> > values;
};

map <string, string> realType = {
{"Boolean", "Boolean"},
{"char", "Char"},
{"data", "Data"},
{"float", "Float"},
{"Amt", "Float"},
{"Percentage", "Float"},
{"Price", "Float"},
{"PriceOffset", "Float"},
{"Qty", "Float"},
{"int", "Int"},
{"day-of-month", "Int"},
{"Length", "Int"},
{"NumInGroup", "Int"},
{"SeqNum", "Int"},
{"TagNum", "Int"},
{"String", "String"},
{"Country", "String"},
{"Currency", "String"},
{"Exchange", "String"},
{"LocalMktDate", "Date"},
{"month-year", "MonthYear"},
{"MultipleValueString", "MultipleValueString"},
{"UTCDateOnly", "Date"},
{"UTCTimeOnly", "Time"},
{"UTCTimestamp", "DateAndTime"}
};


string tab = "  ";
string nop = "";

string generateHPPCode(const Tag& tag)
{
    string result;
    
    result += "struct " + tag.name + " : " + "Types::Value<Types::" + tag.type + ">\n";
    result += "{\n";
    result += tab + "static constexpr const int tag = " + to_string(tag.num) + ";\n";
    result += "\n";

    if(tag.type != "Boolean")
    {
        result += tab + "static const char* tagVal(";
        if(tag.type == "Char") result += nop+"char c";
        if(tag.type == "Int") result += nop+"int i";
        if(tag.type == "Float") result += nop+"float f";
        if(tag.type == "String") result += nop+"const char* str";
        if(tag.type == "Data") result += nop+"void* data, unsigned size";
        if(tag.type == "Date") result += nop+"int day, int month, int year";
        if(tag.type == "MonthYear") result += nop+"int month, int year";
        if(tag.type == "Time") result += nop+"int hour, int minute, int second, int millisec = 0";
        if(tag.type == "DateAndTime") result += nop+"int day, int month, int year" + ", " +  "int hour, int minute, int second, int millisec = 0";
        result += ")\n";
        result += tab + "{\n";

        auto tagLen = to_string(tag.num).size();

        if(false || (tag.type != "Data" && tag.type != "MultipleValueString")) //unhandled types
        {
            cout << tag.type << '\n';
        result += tab+tab+ "char* whereWrite = toStrBuff + " + to_string(tagLen+1) + ";\n"; 
        }

        if(tag.type == "Char"){result += tab+tab + "Types::writeThere(whereWrite, c);\n";}
        if(tag.type == "Int"){result += tab+tab + "Types::writeThere(whereWrite, i);\n";}
        if(tag.type == "Float"){result += tab+tab + "Types::writeThere(whereWrite, f);\n";}
        if(tag.type == "String"){result += tab+tab + "Types::writeThere(whereWrite, str, 0);\n";}
        if(tag.type == "Data"){}
        if(tag.type == "Date")
        {
            result += tab+tab + "Types::Date date; date.year = year; date.month = month; date.day = day;\n";
            result += tab+tab + "Types::writeThere(whereWrite, date);\n";
        }   
        if(tag.type == "MonthYear")
        {
            result += tab+tab + "Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;\n";
            result += tab+tab + "Types::writeThere(whereWrite, monthYear);\n";
        }
        if(tag.type == "Time")
        {
            result += tab+tab + "Types::Time time; time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;\n";
            result += tab+tab + "Types::writeThere(whereWrite, time);\n";
        }
        if(tag.type == "DateAndTime")
        {
            result += tab+tab + "Types::DateAndTime dateAndTime; ";
            result += tab+tab + "Types::Date& date = dateAndTime; ";
            result += tab+tab + "Types::Time& time = dateAndTime;\n";
            result += tab+tab + "date.year = year; date.month = month; date.day = day;\n";
            result += tab+tab + "time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;\n";
            result += tab+tab + "Types::writeThere(whereWrite, dateAndTime);\n";
        }

        result += tab+tab + "return toStrBuff;\n";
        result += tab+"}\n\n";
    }

    for(auto& val : tag.values)
    {
        if(tag.type == "Boolean") 
            result += tab + "static constexpr const bool val" + val.second + " = " +
            (val.first == "Y" ? "true" : "false") + ";\n";

        if(tag.type == "Char")
            result += tab + "static constexpr const char val" + val.second + " = '" +
            val.first + "';\n";

        if(tag.type == "String" || tag.type == "MultipleValueString")
            result += tab + "static constexpr const char* val" + val.second + " = \"" +
            val.first + "\";\n";

        if(tag.type == "Int")
            result += tab + "static constexpr const int val" + val.second + " = " +
            val.first + ";\n";

        if(tag.type == "Float")
            result += tab + "static constexpr const float val" + val.second + " = " +
            val.first + ";\n";
    }
    if(!tag.values.empty()){result += '\n';}

    for(auto& val : tag.values)
    {
        result += tab + "static constexpr const char* tagVal" + val.second +
         " = \"" + to_string(tag.num) + "=" + val.first + "\";\n";
    }
    if(!tag.values.empty()){result += '\n';}

    result += tab + "using Types::Value<Types::" + tag.type + ">::Value;\n\n";

    if(tag.type != "Boolean")
    {
        result += tab + "static char toStrBuff[];\n";
    }

    result += "};\n";
    result += "\n";

    return result;
}

string generateCPPCode(const Tag& tag)
{
    string result;

    int toStrBuffSize = 1024;

    if(tag.type != "Boolean")
    {
        result += "char " + tag.name + "::toStrBuff[" + to_string(toStrBuffSize) + "];\n";
        result += "char " + tag.name + "StrBuffInit = (memcpy(" + tag.name + "::toStrBuff, \"" + to_string(tag.num) +
        "=\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\", 10), 0);\n";
        result += '\n';
    }

    return result;
}



int main(int argc, char* argv[])
{
    if(argc < 2){cout << "Specify File on input!!!\n"; abort();}

    vector<Tag> tags;

    ifstream dicFile(argv[1]);
    if(!dicFile.is_open())
    {
        cout << "Couldnt open " << argv[1] << "!!\n";
        abort();
    }

    for(;;)
    {
        Tag& curTag = (tags.emplace_back(), tags.back());
        if(!(dicFile >> curTag.num))
        {
            tags.pop_back();
            break;
        }
        dicFile >> curTag.name;
        dicFile >> curTag.type;

        string str;
        dicFile >> str;
        for(;str[0] != '#'; dicFile >> str)
        {
            auto value = str;
            string variableName;   dicFile >> variableName;
            curTag.values.emplace_back(value, variableName); //vale-variableName
        }
    }

    for(auto& tag : tags)
            tag.type = realType[tag.type];

    if(bool uniqueTypeOnly = false)
    {
        sort(tags.begin(), tags.end(), [](const Tag& a, const Tag& b)->bool{
            return a.values.size() > b.values.size();
        });

        vector<Tag> uniqueTypeTags;

        set<std::string> typesAdded;

        for(auto tag : tags)
        {
            tag.type = realType[tag.type];

            if(typesAdded.find(tag.type) == typesAdded.end())
            {
                typesAdded.emplace(tag.type);
                uniqueTypeTags.emplace_back(tag);
            }
        }

        tags = uniqueTypeTags;
    }

    ofstream outHpp("src/genTags.hpp");
    ofstream outCpp("src/genTags.cpp");

    outHpp << "namespace FIX {\n";
    for(auto& tag : tags)
    {
        outHpp << generateHPPCode(tag);
    }
    outHpp << "} //namespace FIX\n";

    outCpp << "#include \"FIX.hpp\"\n";
    outCpp << "#include <cstring>\n";
    outCpp << "#include <cstdio>\n";
    outCpp << "\n";
    outCpp << "namespace FIX {\n";
    outCpp << "using namespace Types;\n";
    for(auto& tag : tags)
    {
        outCpp << generateCPPCode(tag);
    }
    outCpp << "} //namespace FIX\n";

    


    return 0;
}
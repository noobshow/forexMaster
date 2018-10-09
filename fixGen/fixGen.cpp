#include <bits/stdc++.h>

using namespace std;

string removeSpacesFromSides(string s)
{
    string result;

    int i = 0;
    while(i < s.size() && s[i] == ' ')i++;

    int j = s.size()-1;
    while(j > 0 && s[j] == ' ')j--;

    return s.substr(i, j-i+1);
}

string descriptionToVarName(string d)
{
    for(auto &c : d)
    {
        if(c == '-')
            c = ' ';

        if(c == '_')
            c = ' ';
    }

    if('a' <= d[0] && d[0] <= 'z')
        d[0] -= 'a'-'A';

    for(int i = 1; i < d.size(); i++)
    {
        if(d[i-1] == ' ' && 'a' <= d[i] && d[i] <= 'z')
            d[i] -= 'a'-'A';
    }
    
    auto eliminateChar = [&d](char c){
        while(d.find(c) != string::npos)
        {
            auto charPos = d.find(c);
            d = d.substr(0, charPos) + d.substr(charPos+1, d.size()-charPos);
        }
    };



    eliminateChar(' ');
    eliminateChar('\'');
    eliminateChar('\"');
    eliminateChar('\n');
    eliminateChar(',');

    if(d.back() == ')' && d.find("(") != string::npos)
    {
        int i = d.size()-2;
        while(d[i] != '(')
            i--;
        d = d.substr(0, d.size()-(d.size()-i)) + ' ' + d.substr(i, d.size()-i);
    }
 
    return d;
}

int main()
{   
    cout << "Starting FIX files generation from Downloaded Dictionary...\n";

    #define outFile cout


    vector<string> files;
    {
        system("ls dicDownload | grep Solutions.html > fixGen/files.txt");

        ifstream filesFile("fixGen/files.txt");

        for(std::string curFile; getline(filesFile, curFile);)
            files.emplace_back(curFile);

        filesFile.close();
    }

    //sorting files by tag number
    sort(files.begin(), files.end(), [](const string& a, const string& b)->bool{
        auto getNum = [](const string& s)->auto{
            auto firstV = s.find_first_of("<");
            auto lastV = s.find_last_of(">");
            return stoi(s.substr(firstV+1, lastV-firstV-1).c_str());
        };
 
        return getNum(a) < getNum(b);
    });

    int maxTag = 956;
    //maxTag = 50;


    while(files.size() > maxTag)
        files.pop_back();

    auto readFile = [](std::string fileName)->std::string{
        ifstream file(fileName);

        if(!file.is_open())
            cout << "Couldnt read \"" << fileName << "\"!!!!\n";

        string result;
        for(string line; getline(file, line);)
            result += line + "\n";
        file.close();
        return result;
    };


    //Just some checks
    int totalValidValues = 0;
    set<int> missingTags;
    for(int i = 1; i <= maxTag; i++)
        missingTags.emplace(i);

    for(auto&& fileName : files)
    {
        int tagNmbr;
        string tagName;

        //parsing fileName for tagNmbr and tagName
        {
            auto firstV = fileName.find_first_of("<"); //first <
            auto lastV = fileName.find_last_of(">");      //last >

            tagNmbr = stoi(fileName.substr(firstV+1, lastV-firstV-1).c_str());
            tagName = fileName.substr(0, firstV-1);
        }

        string file = readFile(string("dicDownload/")+fileName);

        string lowerFile = file;
        std::transform(lowerFile.begin(),lowerFile.end(), lowerFile.begin(), ::tolower);

        std::string tagType;    //finding tagType
        {
            size_t typePos = file.find("Type:");
            typePos = file.find("index.html#", typePos);
            typePos += 11;

            int endPos = file.find("\"", typePos);

            tagType = file.substr(typePos, endPos-typePos);
        }



        vector<pair<string, string> > validValues;
        {
            auto pos = lowerFile.find("valid values:");

            if(pos != string::npos)
            {
            //validValues.emplace_back("xD","laughID");

            auto endPos = lowerFile.find("usedin", pos);

            assert(endPos != string::npos);            

            
            for(auto curPos = 3+file.find("<p>", pos); curPos < endPos; curPos = 3+file.find("<p>", curPos))
            {
                auto equalPos = min(file.find("=", curPos), file.find("-", curPos));
                auto lastPPos = min(file.find("</p>", curPos), file.find("&", curPos));

                string curValue = file.substr(curPos, equalPos-curPos);
                curValue = removeSpacesFromSides(curValue);

                string curDescription;
                for(int i = lastPPos-1; i > equalPos && file[i] != '>'; i--)
                    curDescription += file[i];

                curDescription = removeSpacesFromSides(curDescription);
                reverse(curDescription.begin(), curDescription.end());

                if(min(curDescription.find("*"), curDescription.find("<")) != string::npos)
                    continue;

                if(curValue.find("<") != string::npos)
                    continue;

                curDescription = descriptionToVarName(curDescription);

                validValues.emplace_back(curValue, curDescription);
            }
            


            }
        }

        missingTags.erase(tagNmbr);
        
        if(tagNmbr > 20000){continue;}
        if(validValues.empty())continue;
        outFile << "#########################################\n";
        outFile << tagNmbr << '\n';
        outFile << tagName << '\n';
        outFile << tagType << '\n';

        for(auto validVal : validValues)
            outFile << validVal.first << ' ' << validVal.second << '\n';

        totalValidValues += validValues.size();
        
        if((tagType == "char" || tagType == "int" || tagType == "Boolean") && tagName.find("(no longer used)") == string::npos)
            assert(!validValues.empty());
    }

    cout << "Missing tags:"; for(auto t : missingTags)cout << t << ' '; cout << '\n';
    cout << "totalValidValues: " << totalValidValues << '\n';



    return 0;
}
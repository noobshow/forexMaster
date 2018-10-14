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

auto replaceString = [](string& d, string s, string r)
    {
        while(d.find(s) != string::npos)
        {
            auto pos = d.find(s);
            d = d.substr(0, pos) + r + (pos+s.size() < d.size() ? d.substr(pos + s.size(), d.size()-pos-s.size()) : "");
        }
    };

auto eliminateChar = [](string& d, char c){
    while(d.find(c) != string::npos)
    {
        auto charPos = d.find(c);
        d = d.substr(0, charPos) + d.substr(charPos+1, d.size()-charPos);
    }
};


string descriptionToVarName(string d)
{
    for(auto &c : d)
    {
        if(c == '-' || c == '[' || c == ']' || c == '_')
            c = ' ';
    }

    for(int i = 1; i < d.size(); i++)
    {
        if(d[i-1] == ' ' && 'a' <= d[i] && d[i] <= 'z')
            d[i] -= 'a'-'A';
    }

    eliminateChar(d, '\"');
    eliminateChar(d, '\n');
    eliminateChar(d, '\'');
    eliminateChar(d, '\\');
    eliminateChar(d, ',');
    eliminateChar(d, '.');
    eliminateChar(d, ':');
    eliminateChar(d, '=');

    replaceString(d, "/", "Or");
    replaceString(d, "+", "plus");

    if(d.back() == ')' && d.find("(") != string::npos)
    {
        int i = d.size()-2;
        while(d[i] != '(')
            i--;
        d = d.substr(0, d.size()-(d.size()-i)); //+ ' ' + d.substr(i, d.size()-i);
    }

    eliminateChar(d, '(');
    eliminateChar(d, ')');

    eliminateChar(d, ' ');
    if('a' <= d[0] && d[0] <= 'z')
        d[0] -= 'a'-'A';
 
    return d;
}

void skipSection(std::string& file, int& i)
{
    i++;
    for(; i < file.size(); i++)
    {
        if(file[i] == '<')
            skipSection(file, i);

        if(file[i] == '>')
        {
            i++;
            return;
        }
    }
}



int main()
{   
    ios_base::sync_with_stdio(false);

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

    int minTag = 1;
    int maxTag = 956;
    //minTag = 235;
    //maxTag = 235;

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
    for(int i = minTag; i <= maxTag; i++)
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
            tagName = tagName.substr(0, min(tagName.size(), tagName.find(' ')-1));
        }

        missingTags.erase(tagNmbr);

        if(tagNmbr < minTag || maxTag < tagNmbr)
            continue;

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
                auto lastPPos = file.find("</p>", curPos);

                string curValue = file.substr(curPos, equalPos-curPos);
                curValue = removeSpacesFromSides(curValue);

                eliminateChar(curValue, '\"');

                string valStr = file.substr(curPos, lastPPos-curPos);
                //eliminateChar(valStr, ' ');

                //cout << valStr << '\n';

                string curDescription;
                int semicolonNmbr = 0;
                int andNmbr = 0;
                for(int i = curValue.size(); i < valStr.size(); i++)
                {
                    if(valStr[i] == '<')
                        skipSection(valStr, i);

                    if(valStr[i] == ';')
                    {
                        semicolonNmbr++;
                        continue;
                    }

                    if(valStr[i] == '&')
                    {
                        andNmbr++;
                        continue;
                    }
                    
                    if(semicolonNmbr%2 == 0 && andNmbr%2 == 0)
                        curDescription += valStr[i];
                }

                curDescription = removeSpacesFromSides(curDescription);
                //reverse(curDescription.begin(), curDescription.end());

                if(min(curDescription.find("*"), curDescription.find("<")) != string::npos)
                    continue;

                if(curValue.find("<") != string::npos)
                    continue;

                curDescription = descriptionToVarName(curDescription);

                validValues.emplace_back(curValue, curDescription);
            }
            


            }

        }

        
        if(tagNmbr > 20000){continue;}
        outFile << "#########################################\n";
        outFile << tagNmbr << '\n';
        outFile << tagName << '\n';
        outFile << tagType << '\n';

        for(auto validVal : validValues)
            outFile << validVal.first << ' ' << validVal.second << '\n';

        totalValidValues += validValues.size();
    }

    cout << "Missing tags:"; for(auto t : missingTags)cout << t << ' '; cout << '\n';
    cout << "totalValidValues: " << totalValidValues << '\n';



    return 0;
}
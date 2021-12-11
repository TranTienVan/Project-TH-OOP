#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
#include<json/json.h>
#include<json/value.h>
#include<json/reader.h>
#include"../database/Vocabulary/vocabulary.json"
#include"../vocabulary/vocabulary.h"
using namespace std;

class dict{
private:
    vector<Vocabulary> _dict;
    dict(){};
public:
    static int Instance;
    dict* CreateNewDict();
    void importData(const string path);
    Vocabulary* findWord(string word);
    void sortDict();
};
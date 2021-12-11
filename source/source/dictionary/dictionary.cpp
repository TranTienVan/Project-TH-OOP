#include<dictionary.h>

int dict::Instance = 0;

dict::dict(){
    
}

void dict::sortDict(){
    sort(_dict.begin(), _dict.end());
}

Vocabulary dict::findWord(string word){
    int l = 0;
    int r = _dict.size() - 1;
    while (l < r){
        int mid = (r - l) / 2 + l;
        if (_dict[mid].getWord() == word){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            string date = to_string(ltm->tm_mday)+"/"+to_string(ltm->tm_mon)+"/"+to_string(ltm->tm_year);
            _look_up_history.push_back(make_pair(_dict[mid], date));
            return _dict[mid];
        }
        if (_dict[mid].getWord() < word)    l = mid + 1;
        else r = mid - 1;
    }
    return NULL;
}

void dict::importData(const string path){

    std::fstream f(path, std::ios::in);
    Json::Value actualJson;
    Json::Reader reader;
    reader.parse(f, actualJson);
    
    // std::cout<<name << std::endl;   
    for (int j = 0; j < actualJson.size(); j++){
        // std::cout<<actualJson[j] << std::endl;
        std::string word = actualJson[j]["word"].asString();
        std::string image = "";
        std::string audio = "";
        std::string definition = "";
        std::string type = "";
        std::string spelling = "";
        std::vector<std::string> examples;
        std::string topic = "";
        

        if (actualJson[j]["image"].size() > 0){
            image = actualJson[j]["image"][0].asString();
        }

        if (actualJson[j]["definition"].size() > 0) {
            definition = actualJson[j]["definition"][0].asString();
        }

        if (actualJson[j]["audio"].isArray() && actualJson[j]["audio"].size() > 0) {
            audio = actualJson[j]["audio"][0].asString();
        }

        if (actualJson[j]["audio"].isString()) {
            audio = actualJson[j]["audio"].asString();
        }

        
        if (actualJson[j]["order"].size() > 1) {
            spelling = actualJson[j]["order"][0].asString();
            type = actualJson[j]["order"][1].asString();

            for (int k = 2; k < actualJson[j]["order"].size(); k++){
                examples.push_back(actualJson[j]["order"][k].asString());
            }
        }


        Vocabulary vocab = Vocabulary(
            word,
            definition,
            image,
            audio,
            type,
            spelling,
            examples,
            topic,
            Process()
        );
        _dict.push_back(vocab);
    }

}


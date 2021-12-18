#include"dictionary.h"

dict::dict(){

}

dict::dict(Json::Value dict){
    for (int i = 0; i < dict.size(); i++){
        _look_up_history_index.push_back(dict[i].asInt());
    }
}

int dict::findWord(std::string word){
    int l = 0;
    int r = _dict.size() - 1;
    while (l <= r){
        int mid = (r + l) / 2;
        if (_dict[mid].getWord() == word){
            // time_t now = time(0);
            // tm *ltm = localtime(&now);
            // std::string date = std::to_string(ltm->tm_mday)+"/"+std::to_string(ltm->tm_mon)+"/"+std::to_string(ltm->tm_year);
            return mid;
        }
        if (_dict[mid].getWord() < word)    
            l = mid + 1;
        else 
            r = mid - 1;
    }

    return -1;

}



void dict::updateDictionary(Json::Value &obj){
    Json::Value p;
    for (int i = 0; i < _look_up_history_index.size(); i++){
        p.append(_look_up_history_index[i]);
        
    }

    obj["En-Vi"] = p;
}
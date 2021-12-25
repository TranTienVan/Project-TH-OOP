#include"dictionary.h"
#include"EnToVi.h"
#include"ViToEn.h"

dict::dict(){

}

void dict::initDictionary(Json::Value obj){
    EnToVi* appEnToVi = new EnToVi();
	ViToEn* appViToEn = new ViToEn();

    for (int i = 0; i < obj[0].size(); ++i){
        appEnToVi->_look_up_history_index.push_back(obj[0][i].asInt());
    }

    for (int i = 0; i < obj[1].size(); ++i){
        appViToEn->_look_up_history_index.push_back(obj[1][i].asInt());
    }

    this->Add(appEnToVi);
    this->Add(appViToEn);
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

Json::Value dict::toJsonValue(){
    Json::Value result = Json::Value(Json::arrayValue);
    for (int i = 0; i < _look_up_history_index.size(); ++i){
        result.append(_look_up_history_index[i]);
    }

    return result;
};

void dict::updateToDatabase(Json::Value &obj){
    Json::Value result;
    for (int i = 0; i < children.size(); ++i){
        result.append(children[i]->toJsonValue());
    }
    
    obj["dictionary"] = result;
}
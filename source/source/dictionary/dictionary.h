#pragma once

#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
#include<json/json.h>
#include<json/value.h>
#include<json/reader.h>
#include<time.h>
#include"../component/component.h"
#include"../vocabulary/vocabulary.h"




class dict : public AppComponent {
private: 
    std::vector<AppComponent*> children;
public:
    
    std::vector<Vocabulary> _dict;
    std::vector<int> _look_up_history_index;


    void Add(AppComponent *component) {
        this->children.push_back(component);
        component->SetParent(this);
    }

    std::vector<AppComponent*> getChildren(){
        return this->children;
    }
    dict();
    
    
    int findWord(std::string word);
    void updateToDatabase(Json::Value &obj);
    Json::Value toJsonValue();
    void initDictionary(Json::Value obj);
    
};
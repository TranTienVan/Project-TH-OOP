#pragma once
#include"../component/component.h"
#include"../process/process.h"
#include"../dictionary/dictionary.h"
class Game : public AppComponent{
protected:
    
    std::vector<AppComponent*> children;
    
public:
    int score;
    Game(){

    }
    void Add(AppComponent *component) {
        this->children.push_back(component);
        component->SetParent(this);
    }

    virtual Json::Value toJsonValue() {
        return Json::Value();
    }
    
    std::vector<AppComponent*> getChildren(){
        return children;
    }
    int getScore(){
        return this->score;
    }

    void scanProcess(const Json::Value obj);
    void initGame(std::vector<AppComponent*> topics, dict* enToVi, Json::Value &obj);
    void initTraditionalGame(std::vector<AppComponent*> topics, Json::Value &obj);
    void initListWordGame(dict* enToVi, Json::Value &obj);
    void initMatrixWordGame(dict* enToVi, Json::Value &obj);
    void updateGame(Json::Value &obj);

};
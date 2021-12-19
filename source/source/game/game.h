#pragma once
#include"../component/component.h"
#include"../process/process.h"
#include"../dictionary/dictionary.h"
class Game : public AppComponent{
protected:
    
    std::vector<AppComponent*> children;
public:
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

    void scanProcess(const Json::Value obj);
    void initGame(std::vector<AppComponent*> topics, dict* enToVi);
    void initTraditionalGame(std::vector<AppComponent*> topics);
    void initListWordGame(dict* enToVi);
    void initMatrixWordGame(dict* enToVi);
};
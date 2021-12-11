#pragma once
#include<string>
#include<vector>
#include"../process/process.h"
#include"../component/component.h"
#include<json/json.h>
#include<json/value.h>
#include<fstream>
class Topic : public AppComponent{
protected:
    std::string definition;
    std::string image;
    std::string examples;
    std::string name;
    Process process;
    std::vector<AppComponent*> children;
public:
    std::vector<std::vector<std::string>> ALL_TOPICS_VOCABULARY; 
    std::vector<std::vector<std::string>> ALL_TOPICS_GRAMMAR;
    Topic(const Topic& other){
        this->definition = other.definition;
        this->image = other.image;
        this->examples = other.examples;
        this->name = other.name;
        this->process = other.process;
        this->children = other.children;
    }
    Topic(std::string name, std::string definition,std::string image, std::string examples,Process process) {
        this->name = name;
        this->definition = definition;
        this->image = image;
        this->examples = examples;
        this->process = process;
    }
    Topic(std::string path){
        name = "";
        definition = "";
        image = "";
        examples = "";
        process = Process();
        initALL_TOPICS_VOCABULARY(path);
        initALL_TOPICS_GRAMMAR(path);
    };
    std::string getDefinition(){ 
        return name; 
    }
    std::string getImage(){
        return this->image;
    }

    std::string getName(){
        return this->name;
    }
    std::vector<AppComponent*> getChildren(){
        return children;
    }
    void scanProcess(const Json::Value obj);
    
    void Add(AppComponent *component) {
        this->children.push_back(component);
        component->SetParent(this);
    }

    virtual Json::Value toJsonValue() {
        return Json::Value();
    }
    
    void initALL_TOPICS_VOCABULARY(std::string path); 
    void initALL_TOPICS_GRAMMAR(std::string path);
    void initVocabulary(std::string path, Json::Value obj);  
    void initGrammar(std::string path, Json::Value obj);
    void initTopics(std::string path, Json::Value obj);
    void updateGrammar(Json::Value &obj);
    void updateVocabulary(Json::Value &obj);
};
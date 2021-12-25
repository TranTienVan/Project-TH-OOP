#pragma once
#include<string>
#include<vector>
#include <json/json.h>
#include"../process/process.h"
#include<chrono>
#include<ctime>
class Grammar{
private:
    std::string category;
    std::string name;
    std::vector<std::string> structure;
    std::vector<std::string> explanation;
    std::vector<std::string> example;
    Process process;
public:
    Grammar();
    Grammar(Json::Value obj);
    Grammar(std::string, std::string, std::vector<std::string>, std::vector<std::string>, std::vector<std::string>, Process p);
    ~Grammar(){};
public:
    std::string getCategory() {return category;}
    std::string getName() {return name;}
    std::vector<std::string> getStructure(){return structure;}
    std::vector<std::string> getExplanation(){return explanation;}
    std::vector<std::string> getExample(){return example;}
    std::string showGrammar();
    Process getProcess(){
        return process;
    }
    void scanProcessGrammar(int value, std::string data){
        process.update(value, data);
    }

    void Grammar::addProcess();
};
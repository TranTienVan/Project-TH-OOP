#pragma once
#include<string>
#include<vector>
#include<json/json.h>
#include<json/value.h>

class Process{
protected:
    int isCompleted;
    std::string dateCompleted;
public:
    Process();
    std::string getDateCompleted(){
        return this->dateCompleted;
        
    }
    int getIsCompleted(){
        return this->isCompleted;
    }
    Process& operator=(const Process& other); 
    
    void update(int isCom, std::string date);

    Json::Value toJsonValue();
    void add(int isCom, std::string date);
};
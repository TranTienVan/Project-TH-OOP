#pragma once
#include"../process/process.h"

class ProcessExam : Process{
private:
    float score;
public:
    ProcessExam():
    Process(){
        this->score = 0.0;
    }

    void update(float score, std::string date){
        Process::update(1, date);
        this->score = score;
    }

    Json::Value toJsonValue(){
        Json::Value root = Json::arrayValue;
        root.append(this->score);
        root.append(this->dateCompleted);
        return root;
    }
};
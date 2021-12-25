#include"process.h"

Process::Process(){
    isCompleted = 0;
    dateCompleted = "";
}

Process& Process::operator=(const Process& other){
    isCompleted = other.isCompleted;
    dateCompleted = other.dateCompleted;

    return *this;
}

void Process::update(int isCom, std::string date){
    isCompleted = isCom;
    dateCompleted = date;
}

void Process::add(int isCom, std::string date){
    this->isCompleted += isCom;
    this->dateCompleted += date;
}

Json::Value Process::toJsonValue(){
    Json::Value root;
    root.append(isCompleted);
    root.append(dateCompleted);

    return root;
}
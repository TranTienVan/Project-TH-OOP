#pragma once
#include<string>
#include<vector>
#include"../process/process.h"
#include<json/json.h>
#include<json/value.h>
class Topic{
protected:
    std::string name;
    std::string definition;
    std::string image;
    std::string examples;
    Process process;
public:
    Topic(std::string _name, std::string _definition, std::string _image, std::string _examples, Process _process){
        name = _name;
        definition = _definition;
        image = _image;
        examples = _examples;
        process = _process;
    }
    Topic();
    std::string getDefinition(){ 
        return name; 
    }
    std::string getImage(){
        return this->image;
    }

    std::string getName(){
        return this->name;
    }
    void scanProcess(const Json::Value obj);
    
};
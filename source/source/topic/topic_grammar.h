#pragma once    

#include"../grammar/grammar.h"
#include"topic.h"
#include<json/json.h>
#include<json/value.h>
#include<json/reader.h>
#include<fstream>

class TopicGrammar : public Topic{
public:
    std::vector<Grammar> grammars;
public:
    TopicGrammar(std::string name, std::string definition, std::string image, std::string examples, Process process):
    Topic(name, definition, image, examples, process) {

    }
    std::vector<Grammar> getGrammars() {
        return this->grammars;
    }
    std::string getName() {
        return this->name;
    }
    void readFromDatabase(const std::string path);
    void updateToDatabase(const std::string path);
    
    void scanProcess(Json::Value obj);
    Json::Value toJsonValue();

    void updateProcess();
};
#pragma once    
#include"topic.h"
#include"../vocabulary/vocabulary.h"
#include<json/json.h>
#include<json/value.h>
#include<json/reader.h>
#include<fstream>

class TopicVocabulary : public Topic{
public:
    std::vector<Vocabulary> vocabs;
public:
    TopicVocabulary(std::string name, std::string definition, std::string image, std::string examples, Process process):
    Topic(name, definition, image, examples, process) {

    }
    TopicVocabulary() : 
    Topic("", "", "", "", Process()){

    }

    TopicVocabulary(const TopicVocabulary& other):
    Topic(other){
        this->vocabs = other.vocabs;
    }

    std::vector<Vocabulary> getVocabs() {
        return this->vocabs;
    }
    void updateProcess();
    void readFromDatabase(const std::string path);
    void updateToDatabase(const std::string path);
    
    void scanProcess(Json::Value obj);
    Json::Value toJsonValue();
};
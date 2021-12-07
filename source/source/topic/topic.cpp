#include"topic.h"
#include"topic_grammar.h"
#include"topic_vocabulary.h"
void Topic::initALL_TOPICS_VOCABULARY(std::string path) {
    std::fstream f(path, std::ios::in);

    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);

    // This software has 12 topics for vocabulary
    ALL_TOPICS_VOCABULARY.resize(12);
    
    for (int i = 0; i < actualJson.size(); i++){
        ALL_TOPICS_VOCABULARY[i].resize(4);
        ALL_TOPICS_VOCABULARY[i][0] = actualJson[i]["word"].asString();
        if (actualJson[i]["definition"].size() > 0){
            ALL_TOPICS_VOCABULARY[i][1] = actualJson[i]["definition"][0].asString();
        }
        ALL_TOPICS_VOCABULARY[i][2] = actualJson[i]["image"][0].asString();

        if (actualJson[i]["order"].size() > 0) {
            ALL_TOPICS_VOCABULARY[i][3] = actualJson[i]["order"][0].asString();
        }
    }
}

void Topic::initALL_TOPICS_GRAMMAR(std::string path){
    std::fstream f(path, std::ios::in);

    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);

    // This software has 4 topics for GRAMMAR
    ALL_TOPICS_GRAMMAR.resize(4);
    
    for (int i = 0; i < actualJson.size(); i++){
        ALL_TOPICS_GRAMMAR[i].resize(2);
        ALL_TOPICS_GRAMMAR[i][0] = actualJson[i]["name"].asString();
        ALL_TOPICS_GRAMMAR[i][1] = actualJson[i]["definition"].asString();
        
    }
}

void Topic::initVocabulary(std::string path, Json::Value obj){
    
    for (int i = 0; i < ALL_TOPICS_VOCABULARY.size(); i++){
        TopicVocabulary* topicVocab = new TopicVocabulary(
            ALL_TOPICS_VOCABULARY[i][0], ALL_TOPICS_VOCABULARY[i][1], ALL_TOPICS_VOCABULARY[i][2], ALL_TOPICS_VOCABULARY[i][3], Process()
        );

        topicVocab->readFromDatabase(path);
        if (obj["topicVocabularies"].size() > 0){
        
            topicVocab->scanProcess(obj["topicVocabularies"][i]);
        
        }
        this->Add(topicVocab);    
    }

    
    
    
}

void Topic::initGrammar(std::string path, Json::Value obj){
    for (int i = 0; i < ALL_TOPICS_GRAMMAR.size(); i++){
        TopicGrammar* topicGrammar = new TopicGrammar(
            ALL_TOPICS_GRAMMAR[i][0], ALL_TOPICS_GRAMMAR[i][1], "", "", Process()
        );

        topicGrammar->readFromDatabase(path);
        if (obj["topicGrammars"].size() > 0){
            
            topicGrammar->scanProcess(obj["topicGrammars"][i]);
        }
    
        this->Add(topicGrammar);
    }

    
}

void Topic::initTopics(std::string path, Json::Value obj){
    initALL_TOPICS_VOCABULARY(path + "Vocabulary/topics.json");
    initALL_TOPICS_GRAMMAR(path + "Grammar/Topic.json");
    initVocabulary(path + "Vocabulary/Topic", obj);
    initGrammar(path + "Grammar/Topic", obj);
}
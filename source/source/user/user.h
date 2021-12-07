#pragma once
#include<bits/stdc++.h>
#include <json/json.h>
#include <json/value.h>
#include <json/writer.h>
#include"../topic/topic_vocabulary.h"
#include"../topic/topic_grammar.h"
#include<iostream>
#include<fstream>
unsigned SHF(std::string input);
std::string ToHex(unsigned int input);

class User{
public:
    Json::Value obj;
    std::string id;
    std::string username;
    std::string email;
    std::string password;
    std::vector<TopicVocabulary> topicVocabularies;
    std::vector<TopicGrammar> topicGrammars;
public:
    int score;
    
    // Getter and setter
    std::string getId();
    std::string getUserName();
    std::string getEmail();
    std::string getPassword();
    std::vector<TopicVocabulary> getTopicVocabulary(){
        return this->topicVocabularies;
    }
    Json::Value getObj(){
        return obj;
    }
    std::vector<TopicGrammar> getTopicGrammar(){
        return this->topicGrammars;
    }
    void setPassword(std::string pass);
    
    // operation with database
    void insertToDatabase();

    bool comparePassword(std::string pass);

    static int getIndexByEmail(Json::Value arrUser, std::string email);
    static void updatePasswordByEmail(std::string email, std::string newPassword, std::string path);

    void init(std::string path);
   
    
    void updateGrammarToDatabase();
    void updateVocabularyToDatabase();
    void updateAllToDatabase(Json::Value &actualJson, int index, std::string path);
public:
    User(std::string id, std::string username, std::string email, std::string password);
    User(std::string id, std::string username, std::string email, std::string password, int score);
    User(Json::Value obj);
    User();
    

};


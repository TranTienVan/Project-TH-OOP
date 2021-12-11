#pragma once
#include<bits/stdc++.h>
#include <json/json.h>
#include <json/value.h>
#include <json/writer.h>
#include"../topic/topic_vocabulary.h"
#include"../topic/topic_grammar.h"
#include"../dictionary/dictionary.h"
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
    
public:
    int score;
    
    // Getter and setter
    std::string getId();
    std::string getUserName();
    std::string getEmail();
    std::string getPassword();
    
    void setPassword(std::string pass);
    
    // operation with database
    void insertToDatabase();

    bool comparePassword(std::string pass);

    static int getIndexByEmail(Json::Value arrUser, std::string email);
    static void updatePasswordByEmail(std::string email, std::string newPassword, std::string path);

    
   
public:
    User(std::string id, std::string username, std::string email, std::string password);
    User(std::string id, std::string username, std::string email, std::string password, int score);
    User(Json::Value obj);
    User();
    

};


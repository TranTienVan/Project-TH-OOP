#pragma once    
#include <string>
#include <iostream>
#include"../process/process.h"
#include<json/json.h>
#include<json/value.h>
#include <chrono>
#include <ctime> 
class Vocabulary {
private:
    // 
    std::string word;
    std::string definition;
    std::string image;
    std::string audio;
    std::string type;
    std::string spelling;
    std::vector<std::string> examples;
    std::string topic;
    Process process;
public:
    Vocabulary(){
        word = "";
        definition = "";        
    }
    Vocabulary(std::string w, std::string d){
        word = w;
        definition = d;
    }
    Vocabulary(std::string w, std::string d, std::string i, std::string a, std::string ty, std::string s, std::vector<std::string> e, std::string to, Process p){
        word = w;
        definition = d;
        image = i;
        audio = a;
        type = ty;
        spelling = s;
        examples = e;
        topic = to;
        process = p;
    }

    Vocabulary(const Vocabulary& other){
        this->word = other.word;
        this->definition = other.definition;
        this->image = other.image;
        this->audio = other.audio;
        this->spelling = other.spelling;
        this->type = other.type;
        this->examples = other.examples;
        this->topic = other.topic;
        this->process = other.process;
    }
    Process getProcess(){
        return process;
    }

    std::string getWord() {
        return this->word;
    }
    std::string getImage(){
        return this->image;
    }

    std::string getDefinition(){
        return this->definition;
    }

    std::string getAudio(){
        return this->audio;
    }

    std::string getType(){
        return this->type;
    }

    std::string getSpelling(){
        return this->spelling;
    }

    std::string getTopic(){
        return this->topic;
    }

    std::vector<std::string> getExamples(){
        return this->examples;
    }
    Vocabulary& operator=(const Vocabulary& other);
    void scanProcessVocab(int value, std::string date);
    void getFromData();
    void showWord();
    void showDefinition();
    void showImage();
    void playAudio();
    std::string showVocab();
    void addProcess();

};
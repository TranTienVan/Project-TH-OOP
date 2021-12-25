#include "vocabulary.h"

void Vocabulary::scanProcessVocab(int value, std::string date){
    process.update(value, date);
}

Vocabulary& Vocabulary::operator=(const Vocabulary& other){
    this->word = other.word;
    this->definition = other.definition;
    this->image = other.image;
    this->audio = other.audio;
    this->spelling = other.spelling;
    this->type = other.type;
    this->examples = other.examples;
    this->topic = other.topic;
    this->process = other.process;

    return *this;
}
void getFromData(){

}
void showWord(){

}
void showDefinition(){

}
void showImage(){

}
void playAudio(){
    
}

std::string Vocabulary::showVocab(){
    return "";
}

void Vocabulary::addProcess(){
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    this->process.add(1, std::ctime(&end_time));
}
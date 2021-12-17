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
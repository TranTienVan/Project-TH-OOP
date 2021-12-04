#include"grammar.h"

Grammar::Grammar(){
    category = "";
    name = "";
    
}

Grammar::Grammar(Json::Value obj){
    category = obj["category"].asString();
    name = obj["name"].asString();
    for(int i = 0; i < obj["structure"].size(); i++)
    {
        structure.push_back(obj["structure"][i].asString());
    }
    for(int i = 0; i < obj["explanation"].size(); i++)
    {
        explanation.push_back(obj["explanation"][i].asString());
    }
    for(int i = 0; i < obj["example"].size(); i++)
    {
        example.push_back(obj["example"][i].asString());
    }
}

Grammar::Grammar(std::string category, std::string name, std::vector<std::string> structure, std::vector<std::string> explanation, std::vector<std::string> example, Process p){
    this->category = category;
    this->name = name;
    this->structure = structure;
    this->explanation = explanation;
    this->example = example;
    this->process = p;
}

std::string Grammar::showGrammar(){
    std::string res = "";
    res += this->name + "\n\n";
    res += "1. Cấu trúc\n";
    for (int i = 0; i < structure.size(); i++)
        res += structure[i] + "\n";
    res += "2.Cách dùng\n";
    int nexplanation = explanation.size();
    int nexample = example.size();
    int min = nexample < nexplanation? nexample:nexplanation;
    int i = 0;
    for( i = 0; i < min; i++){
        res += explanation[i];
        res += "\t VD: " + example[i] + "\n";
    }
    for(int j = i; j < nexample; j++)
    {
        res += "\t VD: " + example[j]+"\n";
    }

    for(int j = i; j < nexplanation; j++)
    {
        res += explanation[j];
    }
    return res;
}

#pragma once

#include"../component/component.h"
#include"part.h"
#include<fstream>

class Exam : public AppComponent{
public:
    std::vector<Part> parts;
    Exam() {

    }
    Exam(std::string path, int i){
        path += "Exam/";

        std::fstream f(path+ "Exam" + std::to_string(i) + "/Exam" + std::to_string(i) + ".json", std::ios::in);
        Json::Value actualJson;
        Json::Reader reader;
        
        reader.parse(f, actualJson);
        parts.resize(actualJson.size());
        for (int i = 0; i < actualJson.size(); ++i){
            parts[i] = Part(actualJson[i]);
        }
    }


    int getScore(){
        int score = 0;

        for (int i = 0; i < parts.size(); ++i){
            score += parts[i].getScore();
        }

        return score;
    }

    int getNumberOfQuestion(){
        int nums = 0;

        for (int i = 0; i < parts.size(); ++i){
            nums += parts[i].getNumberOfQuestion();
        }

        return nums;
    }
};
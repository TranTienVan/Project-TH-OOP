#pragma once

#include <string>
#include <vector>
#include <Json/value.h>
#include<Json/reader.h>
#include<Json/writer.h>
class Part {
private:
    std::string type;
    std::string instruction;
    std::vector<std::string> question;
    std::vector<std::vector<std::string>> answer;
    std::vector<std::vector<std::string>> image;
    std::vector<std::string> result;
    std::vector<std::string> audio;
    std::vector<std::string> YourResult;
public:
    Part() {

    }
    Part(Json::Value obj){
        this->type = obj["type"].asString();
        this->instruction = obj["instruction"].asString();
        for (int i = 0; i < obj["question"].size(); ++i){
            this->question.push_back(obj["question"][i].asString());
        }

        for (int i = 0; i < obj["result"].size(); ++i){
            this->result.push_back(obj["result"][i].asString());
        }
        if (!obj["image"]) {
            this->image.resize(obj["image"].size());
            for (int i = 0; i < this->image.size(); ++i){
                if (obj["image"][i].isString()){
                    this->image[i].push_back(obj["image"][i].asString());
                }

                else {
                    for (int j = 0; j < obj["image"][i].size(); ++j){
                        this->image[i].push_back(obj["image"][i][j].asString());
                    }
                }

            }
        }

        if (!obj["audio"]){
            for (int i = 0; i < obj["audio"].size(); ++i){
                this->audio.push_back(obj["audio"][i].asString());
            }
        }

        if (!obj["answer"]){
            for (int i = 0; i < obj["answer"].size(); ++i){
                this->answer[i].resize(4);
                for (int j = 0; j < obj["answer"][i].size(); ++j){
                    this->answer[i].push_back(obj["answer"][i][j].asString());
                }
                
            }
        }

        YourResult = std::vector<std::string>(result.size(), "None");
        
    }

    void ChooseResult(int i, std::string res){
        this->YourResult[i] = res;
    }

    int getNumberOfQuestion(){
        return this->result.size();
    }

    int getScore(){
        int score = 0;
        for (int i = 0; i < YourResult.size(); ++i){
            if (YourResult[i] == result[i]){
                ++score;

            }
        }

        return score;
    }
};


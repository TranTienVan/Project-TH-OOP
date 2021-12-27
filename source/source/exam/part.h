#pragma once

#include <string>
#include <vector>

#include <Json/value.h>
#include <Json/reader.h>
#include <Json/writer.h>

#include<sstream>
class Part {
public:
    std::string type;
    std::string instruction;
    std::vector<std::string> question;
    std::vector<std::vector<std::string>> answer;
    std::vector<std::vector<std::string>> image;
    std::vector<std::string> result;
    std::vector<std::string> audio;
    std::vector<std::string> YourResult;
    std::vector<std::string> text;
    std::vector<int> number;

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

        std::vector<std::string> arr = obj.getMemberNames();

        if (find(arr.begin(), arr.end(), "image") != arr.end()){
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

        if (find(arr.begin(), arr.end(), "audio") != arr.end()){
            for (int i = 0; i < obj["audio"].size(); ++i){
                this->audio.push_back(obj["audio"][i].asString());
            }
        }

        if (find(arr.begin(), arr.end(), "answer") != arr.end()){
            for (int i = 0; i < obj["answer"].size(); ++i){
                this->answer.push_back({});
                
                for (int j = 0; j < obj["answer"][i].size(); ++j){
                    this->answer[i].push_back(obj["answer"][i][j].asString());
                }
                
            }
        }
        if (find(arr.begin(), arr.end(), "number") != arr.end()){
            for (int i = 0; i < obj["number"].size(); ++i){
                this->number.push_back(obj["number"][i].asInt());
            }
        }

        if (find(arr.begin(), arr.end(), "text") != arr.end()){
            for (int i = 0; i < obj["text"].size(); ++i){
                this->text.push_back(obj["text"][i].asString());
            }
        }
        YourResult = std::vector<std::string>(result.size(), "-");
        
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

    void updatePart(std::string ans, int i, int j){
        std::stringstream ss(ans);
        std::string s;
        std::vector<std::string> OPTION = {"A", "B", "C", "D", "-"};
        while (ss >> s){
            if (find(OPTION.begin(),OPTION.end(), s) != OPTION.end()){
                YourResult[i++] = s;
            }
            

            if (i > j){
                break;
            }
        }

    }

    std::string ToStringAnswer() {
        std::string res = "";
        for (int i = 0; i < this->YourResult.size() - 1; ++i) {
            
            res += YourResult[i] + " ";
        }

        res += YourResult[YourResult.size() - 1];
        return res;

    }

    std::string ToStringAnswer(int a, int b) {
        std::string res = "";
        for (int i = a; i < b; ++i) {

            res += YourResult[i] + " ";
        }

        res += YourResult[b];
        return res;

    }
};


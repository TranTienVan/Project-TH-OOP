#pragma once

#include"../component/component.h"
#include"part.h"
#include<fstream>
#include"time_exam.h"
#include<sstream>
#include"process_exam.h"
#include<chrono>
#include<ctime>
class Exam : public AppComponent{    
private:
    ProcessExam process;
public:
    std::vector<Part> parts;
    TimeExam time;
    

    Exam() {
        this->process = ProcessExam();
        this->time = TimeExam();
    }
    Exam(std::string path, int i){
        path += "Exam/";
        time = TimeExam(0, 0);
        std::fstream f(path+ "Exam" + std::to_string(i) + "/Exam" + std::to_string(i) + ".json", std::ios::in);
        Json::Value actualJson;
        Json::Reader reader;
        
        reader.parse(f, actualJson);
        parts.resize(actualJson.size());
        for (int i = 0; i < actualJson.size(); ++i){
            parts[i] = Part(actualJson[i]);
        }

        process = ProcessExam();

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

    void StartExam(){
        this->time.Start();
    }

    void updateAnswer(std::string ans, int index,int i, int j){
        this->parts[index].updatePart(ans, i, j);
    }

    void updateProcess(float score){
        auto start = std::chrono::system_clock::now();
        // Some computation here
        auto end = std::chrono::system_clock::now();

        std::chrono::duration<double> elapsed_seconds = end-start;
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        
        

        this->process.update(score, std::ctime(&end_time));
    }

    void updateExam(Json::Value &obj, int i) {
        // 10 exams
        Json::Value res, cur;
        if (i >= obj["exam"].size()){
            
            
            // 10 exams
            
                
            res = Json::arrayValue;
            cur = this->process.toJsonValue();
            if (cur[0].asFloat() != 0 && cur[1].asString() != ""){
                res.append(cur);
            }


            obj["exam"].append(res);
            

            
            return;
        }


        
        cur = this->process.toJsonValue();
        if (cur[0].asInt() != 0 && cur[1].asString() != ""){
                
            obj["exam"][i].append(cur);
        }

    }
};
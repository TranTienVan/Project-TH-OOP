#pragma once
#include<string>
#include<vector>

class TimeExam{
public:
    int m;
    int s;

    TimeExam(){

    }

    TimeExam(int m, int s){
        this->m = m;
        this->s = s;
    }

    std::string toString(){
        std::string str = "";
        if (m < 10){
            str += "0" + std::to_string(m) + ":";
        }

        else {
            str += std::to_string(m) + ":";
        }

        if (s < 10){
            str += "0" + std::to_string(s);
        }

        else {
            str += std::to_string(s);
        }

        return str;
    }

    void decrease(int second){
        if (s - second < 0){
            s = (s - second + 60) % 60;
            m += (s - second) / 60 - 1;
        }

        else {
            s -= 1;
        }
    }

    void increase(int second){
        if (s + second >59){
            s = (s + second) % 60;
            m += (s + second) / 60;
        }

        else {
            s += second;
        }
    }

    void Start(){
        this->m = 60;
        this->s = 0;
    }
};
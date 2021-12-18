#pragma once
#include "..\component\component.h"
#include "..\process\process.h"
#include "question.h"

class Exam : public AppComponent  {
private:
    std::vector<Question*> _questions;  //questions array
    unsigned int _numOfQues;            //number of questions
    unsigned int _timeLimit;            //time limit for the exam (in seconds), if timeLimit = 0 -> no limit time
    std::vector<std::string> _instructions; //Instructions for the test;
    unsigned int _score;
public:
    Exam() : _numOfQues(0), _timeLimit(0), _score(0) {}
    void ShowTest();
    
    Exam(unsigned int numQues, unsigned int timeL) : _numOfQues(numQues), _timeLimit(timeL), _score(0) {
        _questions.resize(numQues);
    }

    //another constructor initialize test from database...
    //Exam(...);

    void ShowInstructions();
    void Start();

    void Show(){
        this->ShowInstructions();
        for (int i = 0; i < _numOfQues; ++i){
            this->_questions[i]->ShowQuestion();
        }
    }

    void End();
    
    ~Exam(){
        for (unsigned int i = 0; i < _questions.size(); ++i){
            delete _questions[i];
        }
    }


};
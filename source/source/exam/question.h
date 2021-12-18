#pragma once
#include <string>
#include <vector>

class Question {
private:
    std::string _question;   //question
    std::string _image;
    std::string _audio;
    std::vector<std::string> _options; //4 options for the answer
    int _trueAns;            //true answer
    int _score;
    int _numAns;
    static void _RAND_MODE();
public:
    Question(int numAns = 4);

    Question(std::string ques, std::string img, std::string aud, std::vector<std::string> opts, int trueAns = 0);

    //need another constructor for initialize from database...
    //Question(){}

    int GetAnswerFromUser();

    int IsTrueAnswer(int choice){
        return (this->_trueAns == choice)? _score: 0;
    }

    void ShowQuestion();
    void ShowTrueAnswer();

    ~Question(){}
};


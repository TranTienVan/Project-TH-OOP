#include "question.h"
#include <cstdlib>
#include <ctime>

void Question::_RAND_MODE(){
    srand(time(0));
}

Question::Question(int numAns){
    _question = "";
    _image = "";
    _audio = "";
    _numAns = numAns;
    _options.resize(numAns);

    for (int i = 0; i < numAns; ++i){
        _options[i] = "";
    }

    _trueAns = 1;   //default answer is A
    _score = 1;     //default score is 1
}

//TrueAns = 0 -> random options order
//TrueAns > 0 -> the position of true answer
//default from database:
//ques|img|aud|opts|trueAns
//if img = "" question does not have image
//if aud = "" question does not have audio
//default true answer if there is no value of trueAns: true answer is the first one
Question::Question(std::string ques, std::string img, std::string aud, std::vector<std::string> opts, int trueAns){
    _question = ques;
    _image = img;
    _audio = aud;
    _numAns = opts.size();

    if (trueAns) _trueAns = trueAns;
    else 
        trueAns = rand() % (opts.size()) + 1;

    for (int i = 0; i < opts.size(); ++i){
        _options.push_back(opts[i]);
    }

    if (trueAns != 1){
        int j = trueAns - 1;
        std::string corrAns = _options[j];
        _options[j] = _options[0];
        _options[0] = corrAns;
    }

    _score = 1;     //default score is 1
}    

int Question::GetAnswerFromUser(){
    int choice;
    //get...

    return choice;
}

void Question::ShowQuestion(){

}

void Question::ShowTrueAnswer(){
    
}

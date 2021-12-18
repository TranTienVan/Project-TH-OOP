#include "exam.h"

void Exam::ShowInstructions(){

}

//set countdown time for the test 
void Exam::Start(){

}

//end of test and show statistics
void Exam::End(){
    for (int i = 0; i < _numOfQues; ++i){
        _score += this->_questions[i]->IsTrueAnswer();
    }

    
}

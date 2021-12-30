#pragma once
#include"../topic/topic_vocabulary.h"
#include"game.h"
#include<random>
#include<vector>

class TraditionalGame : public Game{    
public:
    std::string Question1;
    std::string Question2;
    std::string Question3;
    int prev;

    TopicVocabulary* topic;
    std::string answer;

    TraditionalGame(TopicVocabulary* t){
        this->Question1 = "Nghĩa của từ \"";
        this->Question2 = "Tiếng Anh của \"";
        
        this->Question3 = "Nghe và điền từ vào chỗ trống?";

        topic = t;
        this->score = 0;
        this->prev = 0;

        
        
    }
    int getVocabulary(){
        int k;
        while(1){
            
            k = rand() % this->topic->getVocabs().size();

            if (this->topic->getVocabs()[k].getAudio() != "" && this->topic->getVocabs()[k].getImage() != "" && k != prev){
                return k;
            }

        }

        return 0;

    }

    std::vector<std::string> getAnswerForQuestion1(){
        
        std::vector<int> nums(3, -1);
        std::vector<std::string> answer;
        int i = 0, k;
        while (i < nums.size()){
            
            k = rand() % this->topic->getVocabs().size();

            if (find(nums.begin(), nums.end(), k) == nums.end() && this->topic->getVocabs()[k].getDefinition() != ""){
                nums[i++] = k;
                
                answer.push_back(this->topic->getVocabs()[k].getDefinition());
                
            }
            
        }

        return answer;
    }

    std::vector<std::string> getAnswerForQuestion2(){
        
        std::vector<int> nums(3, -1);
        std::vector<std::string> answer;
        int i = 0, k;
        while (i < nums.size()){
            
            k = rand() % this->topic->getVocabs().size();

            if (find(nums.begin(), nums.end(), k) == nums.end() && this->topic->getVocabs()[k].getWord() != ""){
                nums[i++] = k;
                
                answer.push_back(this->topic->getVocabs()[k].getWord());
                
            }
            
        }

        return answer;
    }
    std::vector<std::string> getQuestion(){
        
        int id = rand() % 3;
        int i = getVocabulary();
        this->prev = i;
        std::vector<std::string> res;
        if (id == 1){
            int id_answer = rand()%4;
            res = getAnswerForQuestion1();
            res.push_back(this->topic->getVocabs()[i].getDefinition());
            swap(res[id_answer], res[3]);
            res.push_back(this->Question1 + this->topic->getVocabs()[i].getWord());
            res.push_back(this->topic->getVocabs()[i].getDefinition());
            
            res.push_back(this->topic->getVocabs()[i].getWord());
            
        }

        else if (id == 2){
            int id_answer = rand()%4;
            res = getAnswerForQuestion2();
            res.push_back(this->topic->getVocabs()[i].getWord());

            swap(res[id_answer], res[3]);
            res.push_back(this->Question2 + this->topic->getVocabs()[i].getDefinition());
            
            res.push_back(this->topic->getVocabs()[i].getWord());
            res.push_back(this->topic->getVocabs()[i].getWord());   
        }

        else {
            res.push_back(this->Question3);
            res.push_back(this->topic->getVocabs()[i].getWord());
        }
        
        return res;
    }

};
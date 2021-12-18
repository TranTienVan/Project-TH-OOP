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
    
    TopicVocabulary* topic;
    std::string answer;

    TraditionalGame(TopicVocabulary* t){
        this->Question1 = "Nghĩa của từ \"";
        this->Question2 = "Tiếng Anh của \"";
        
        this->Question3 = "Nghe và điền từ vào chỗ trống?";

        topic = t;
    }
    int getVocabulary(){
        while(1){
            int k = rand() % this->topic->getVocabs().size();

            if (this->topic->getVocabs()[k].getAudio() != "" && this->topic->getVocabs()[k].getImage() != ""){
                return k;
            }

        }

        return 0;

    }

    std::vector<std::string> getAnswer(int id){
        
        std::vector<int> nums;
        std::vector<std::string> answer;
        while (1){
            int k = rand() % this->topic->getVocabs().size();

            if (find(nums.begin(), nums.end(), k) == nums.end()){
                nums.push_back(k);
                if (id <= 2 && this->topic->getVocabs()[k].getDefinition() != "")
                    answer.push_back(this->topic->getVocabs()[k].getDefinition());
                
            }
            if (nums.size() == 3){
                break;
            }
        }

        return answer;
    }
    std::vector<std::string> getQuestion(){
        srand(time(0));
        int id = rand() % 3;
        int i = getVocabulary();
        std::vector<std::string> res;
        if (id == 1){
            int id_answer = rand()%4;
            res = getAnswer(id);
            res.insert(res.begin() + id_answer, this->topic->getVocabs()[i].getDefinition());
            res.push_back(this->Question1 + this->topic->getVocabs()[i].getWord());
            res.push_back(this->topic->getVocabs()[i].getDefinition());
            res.push_back(this->topic->getVocabs()[i].getWord());
            
        }

        else if (id == 2){
            int id_answer = rand()%4;
            res = getAnswer(id);
            res.insert(res.begin() + id_answer, this->topic->getVocabs()[i].getDefinition());
            res.push_back(this->Question1 + this->topic->getVocabs()[i].getWord());
            res.push_back(this->topic->getVocabs()[i].getDefinition());
            res.push_back(this->topic->getVocabs()[i].getWord());   
        }

        else {
            res.push_back(this->Question3);
            res.push_back(this->topic->getVocabs()[i].getWord());
        }
        
        return res;
    }

};
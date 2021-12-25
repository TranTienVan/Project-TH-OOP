#pragma once    
#include"game.h"
#include"../dictionary/dictionary.h"
#include<iostream>
#include<algorithm>
class ListWordGame : public Game{
public:
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> consonants = {
        'b', 'c', 'd', 'f', 'g',
        'h', 'j', 'k', 'l', 'm', 'n',
        'p', 'q', 'r', 's', 't',
        'v', 'w', 'x', 'y', 'z'
    };
public:
    dict* enToVi;
    
    std::vector<char> character;
    std::vector<std::string> result;
    int MIN(int a, int b){
        return a < b ? a : b;
    }
    ListWordGame(dict* enToVi){
        score = 0;
        srand(time(0));
        this->enToVi = enToVi;
        int num_vowels = 2;
        int num_consonants = MIN(rand() % 3 + 4, 8 - num_vowels);
        int v = rand() % vowels.size(), c = rand() % consonants.size();
        bool isMatch = 1;
        for (int i = 0; i < num_vowels; ++i){
            while (find(character.begin(), character.end(), vowels[v]) != character.end()){

                
                v = rand() % vowels.size();
            }
            character.push_back(vowels[v]);
        }

        for (int i = 0; i < num_consonants; ++i){
            while (find(character.begin(), character.end(), consonants[c]) != character.end()){

                
                c = rand() % consonants.size();
            }
            character.push_back(consonants[c]);
        }
        

        for each(Vocabulary vocab in this->enToVi->_dict){
            isMatch = true;

            for each (char c in vocab.getWord()){

                if (find(character.begin(), character.end(), c) == character.end()){
                    isMatch = false;
                    break;
                }
            }

            if (isMatch){
                result.push_back(vocab.getWord());
            }


        }
    }

    void ReLoad(){
        srand(time(0));
        character = {};
        result = {};
        int num_vowels = rand() % 2 +2;
        int num_consonants = rand() % 3 + 3;
        int v = rand() % vowels.size(), c = rand() % consonants.size();
        bool isMatch = true;
        for (int i = 0; i < num_vowels; ++i){
            while (find(character.begin(), character.end(), vowels[v]) != character.end()){

                
                v = rand() % vowels.size();
            }
            character.push_back(vowels[v]);
        }

        for (int i = 0; i < num_consonants; ++i){
            while (find(character.begin(), character.end(), consonants[c]) != character.end()){

                
                c = rand() % consonants.size();
            }
            character.push_back(consonants[c]);
        }

        for each(Vocabulary vocab in this->enToVi->_dict){
            isMatch = true;

            for each (char c in vocab.getWord()){
                if (find(character.begin(), character.end(), c) == character.end()){
                    isMatch = false;
                    break;
                }
            }

            if (isMatch){
                result.push_back(vocab.getWord());
            }


        }
    }

    int findResult(std::string word){
        int l = 0, r = result.size() - 1, m;

        while (l <= r){
            m = (l + r) / 2;
            if (word > result[m]){
                l = m + 1;
            }

            else if (word < result[m]){
                r = m - 1;
            }

            else{
                return m;

            }
        }

        return -1;

    }
};
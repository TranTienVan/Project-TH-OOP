#pragma once
#include"game.h"
#include"../dictionary/EnToVi.h"
#include <unordered_map>
#include<algorithm>
class MatrixAnswer{
public:
    int i1, j1;
    int i2, j2;

    std::string word;

    MatrixAnswer(int i1, int j1, int i2, int j2, std::string word){
        this->i1 = i1;
        this->j1 = j1;
        this->i2 = i2;
        this->j2 = j2;
        this->word = word;
        
    }
};
class MatrixWordGame : public Game{
public:
    int m = 13; // Number of rows
    int n = 17; // Number of columns
    std::vector<char> alphabet = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'
    };
public:
    
    std::vector<std::vector<char>> matrix;
    dict* enToVi;
    std::vector<MatrixAnswer> result;
    
    MatrixWordGame(dict* dic){
        srand(time(0));
        this->enToVi = dic;
        score = 0;
        matrix.resize(13);
        for (int i = 0; i < 13; ++i){
            matrix[i].resize(17);

            for (int j = 0; j < 17; ++j){
                
                matrix[i][j] = alphabet[rand() % 26];
                
            }
        }

        std::string temp, temp_reverse;
        int index;
        std::unordered_map<std::string, int> no;
        std::unordered_map<std::string, int> yes;

        for (int i = 0; i < 13; ++i){
            

            for (int j = 0; j < 17; ++j){
                temp = "";

                for (int k = j; k < 17; ++k){
                    temp += matrix[i][k];

                    // Forward
                    if (no.find(temp) != no.end()){
                        
                    }

                    else if (yes.find(temp) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, i, k, temp));
                        
                    }
                    
                    else {
                        index = enToVi->findWord(temp);

                        if (index == -1){
                            no[temp] = 1;
                        }
                        else {
                            yes[temp] = 1;
                            result.push_back(MatrixAnswer(i, j, i, k, temp));
                        }
                    }
                    

                    // Backward
                    temp_reverse = std::string(temp.rbegin(),temp.rend());

                    if (no.find(temp_reverse) != no.end()){
                        
                    }

                    else if (yes.find(temp_reverse) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, i, k, temp_reverse));
                        
                    }
                    else {
                        index = enToVi->findWord(temp_reverse);

                        if (index == -1){
                            no[temp_reverse] = 1;
                        }
                        else {
                            yes[temp_reverse] = 1;
                            result.push_back(MatrixAnswer(i, j, i, k, temp_reverse));
                        }
                    }
                    
                }

                temp = "";
                for (int k = i; k < 13; ++k){
                    temp += matrix[k][j];

                    // Forward
                    if (no.find(temp) != no.end()){
                        
                    }

                    else if (yes.find(temp) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, k, j, temp));
                        
                    }
                    else {
                        index = enToVi->findWord(temp);

                        if (index == -1){
                            no[temp] = 1;
                        }
                        else {
                            yes[temp] = 1;
                            result.push_back(MatrixAnswer(i, j, k, j, temp));
                        }
                    }
                    

                    // Backward
                    temp_reverse = std::string(temp.rbegin(),temp.rend());

                    if (no.find(temp_reverse) != no.end()){
                        
                    }

                    else if (yes.find(temp_reverse) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, k, j, temp_reverse));
                        
                    }

                    else {
                        index = enToVi->findWord(temp_reverse);

                        if (index == -1){
                            no[temp_reverse] = 1;
                        }
                        else {
                            yes[temp_reverse] = 1;
                            result.push_back(MatrixAnswer(i, j, k, j, temp_reverse));
                        }
                    }
                    
                }
            }
        }
        
        std::sort(result.begin(), result.end(), [](const MatrixAnswer& a, const MatrixAnswer& b){
            return a.word < b.word;
        });


        
    }

    void ReLoad(){
        srand(time(0));
        
        result = {};
        
        matrix.resize(13);
        for (int i = 0; i < 13; ++i){
            matrix[i].resize(17);

            for (int j = 0; j < 17; ++j){
                
                matrix[i][j] = alphabet[rand() % 26];
                
            }
        }

        std::string temp, temp_reverse;
        int index;
        std::unordered_map<std::string, int> no;
        std::unordered_map<std::string, int> yes;

        for (int i = 0; i < 13; ++i){
            

            for (int j = 0; j < 17; ++j){
                temp = "";

                for (int k = j; k < 17; ++k){
                    temp += matrix[i][k];

                    // Forward
                    if (no.find(temp) != no.end()){
                        
                    }

                    else if (yes.find(temp) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, i, k, temp));
                        
                    }
                    
                    else {
                        index = enToVi->findWord(temp);

                        if (index == -1){
                            no[temp] = 1;
                        }
                        else {
                            yes[temp] = 1;
                            result.push_back(MatrixAnswer(i, j, i, k, temp));
                        }
                    }
                    

                    // Backward
                    temp_reverse = std::string(temp.rbegin(),temp.rend());

                    if (no.find(temp_reverse) != no.end()){
                        
                    }

                    else if (yes.find(temp_reverse) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, i, k, temp_reverse));
                        
                    }
                    else {
                        index = enToVi->findWord(temp_reverse);

                        if (index == -1){
                            no[temp_reverse] = 1;
                        }
                        else {
                            yes[temp_reverse] = 1;
                            result.push_back(MatrixAnswer(i, j, i, k, temp_reverse));
                        }
                    }
                    
                }

                temp = "";
                for (int k = i; k < 13; ++k){
                    temp += matrix[k][j];

                    // Forward
                    if (no.find(temp) != no.end()){
                        
                    }

                    else if (yes.find(temp) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, k, j, temp));
                        
                    }
                    else {
                        index = enToVi->findWord(temp);

                        if (index == -1){
                            no[temp] = 1;
                        }
                        else {
                            yes[temp] = 1;
                            result.push_back(MatrixAnswer(i, j, k, j, temp));
                        }
                    }
                    

                    // Backward
                    temp_reverse = std::string(temp.rbegin(),temp.rend());

                    if (no.find(temp_reverse) != no.end()){
                        
                    }

                    else if (yes.find(temp_reverse) != yes.end()){
                        result.push_back(MatrixAnswer(i, j, k, j, temp_reverse));
                        
                    }

                    else {
                        index = enToVi->findWord(temp_reverse);

                        if (index == -1){
                            no[temp_reverse] = 1;
                        }
                        else {
                            yes[temp_reverse] = 1;
                            result.push_back(MatrixAnswer(i, j, k, j, temp_reverse));
                        }
                    }
                    
                }
            }
        }
        
        std::sort(result.begin(), result.end(), [](const MatrixAnswer& a, const MatrixAnswer& b){
            return a.word < b.word;
        });
    }

    int findResult(std::string s){
        int l = 0, r = result.size() - 1, m;

        while (l <= r){
            m = (l + r) / 2;
            if (result[m].word < s){
                l = m + 1;
            }

            else if (result[m].word > s){
                r = m - 1;
            }

            else {
                return m;
            }
        }

        return -1;
    }

};
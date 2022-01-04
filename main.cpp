#include"./source/source/user/user.h"
#include"./source/source/topic/topic_vocabulary.h"
#include<regex>

void demoUser() {
    std::fstream f("./database/user.json", std::ios::in);
    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);
    f.close();
    
    // int index = User::getIndexByEmail(actualJson, "tienvan0158@gmail.com");
    
    // User a = User(actualJson[index]);
    // a.init("./database/");
    // // std::cout<<a.topicVocabularies.size()<<std::endl;
    // // std::cout<<actualJson[index]<<std::endl;
    // // std::cout<<a.obj<<std::endl;
    // std::cout<<a.topicVocabularies[0].getVocabs()[2].getType()<<std::endl;
    // a.updateAllToDatabase(actualJson,  index, "./database/user.json");
    
    User::updatePasswordByEmail("tienvan0158@gmail.com", "123456789", "./database/user.json");

}

void demoDictionary(){
    std::fstream f("./database/Vocabulary/AllVocabulary.json", std::ios::in);
    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);
    int a[100] ={0}, b[100] = {0}, count_vowels = 0, count_consonants = 0;
    std::vector<char> vowel = {'a', 'e', 'i', 'o', 'u'}, temp_vowel, temp_consonant;
    std::string temp;
    for (int i = 0; i < actualJson.size(); i++){
        count_vowels = 0;
        count_consonants = 0;
        temp_vowel = {};
        temp_consonant = {};
        temp = actualJson[i]["word"].asString();
        for (int j = 0; j < temp.size(); j++){
            if (find(vowel.begin(), vowel.end(), temp[j]) != vowel.end() &&
                find(temp_vowel.begin(), temp_vowel.end(), temp[j]) == temp_vowel.end()){

                temp_vowel.push_back(temp[j]);
                ++count_vowels;
            }

            if (find(vowel.begin(), vowel.end(), temp[j]) == vowel.end() &&
                find(temp_consonant.begin(), temp_consonant.end(), temp[j]) == temp_consonant.end()){
                
                temp_consonant.push_back(temp[j]);
                ++count_consonants;
            }
        }

        a[count_vowels]++;
        b[count_consonants]++;

    }
    for (int i = 0; i < 100; ++i){
        if (a[i] != 0){
            std::cout<<i<<" "<<a[i]<< std::endl;
        }
    }
    std::cout<<"---------\n";
    for (int i = 0; i < 100; ++i){
        if (b[i] != 0){
            std::cout<<i<<" "<<b[i]<< std::endl;
        }
    }

    // 2 3
    // 4 5 6
    f.close();


}

void lengthALlWord(){
    std::fstream f("./database/Vocabulary/AllVocabulary.json", std::ios::in);
    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);
    int a[100] ={0}, b[100] = {0}, count_vowels = 0, count_consonants = 0;
    std::vector<char> vowel = {'a', 'e', 'i', 'o', 'u'}, temp_vowel, temp_consonant;
    std::string temp;

    for (int i = 0; i < actualJson.size(); ++i){
        a[actualJson[i]["word"].asString().size()]++;
    }

    for (int i = 0; i < 100; ++i){
        if (a[i] != 0){
            std::cout<<i<<" "<<a[i]<< std::endl;
        }
    }

}

void getVocabs(){
    std::fstream f("vc.txt", std::ios::in);
    std::fstream fout("out.txt", std::ios::out);
    
    std::string str;
    std::regex exp (" ?[0-9]+[)] \\w+");
    std::cout<<regex_match("1) the", exp);
    while (std::getline(f, str)){
        // std::cout<<str;
        
        if (regex_match(str.begin(), str.end(), exp)){
            str = regex_replace(str, std::regex("\\d+\\) "), "");
            if (str[0] == ' ')
                str.erase(str.begin());
            fout<<str<<std::endl;
        }
    }

    
}


void mergeVocab(){
    std::fstream f1("out.txt", std::ios::in);
    std::fstream f2("vc2.txt", std::ios::in);
    std::string str;
    std::vector<std::string> res;
    while (std::getline(f1, str)){
        res.push_back(str);
    }
    std::cout<<res.size()<<std::endl;
    while (std::getline(f2, str)){
        if (find(res.begin(), res.end(), str) == res.end()){
            res.push_back(str);
        }
    }

    std::fstream fout("out2.txt", std::ios::out);

    for (int i = 0; i < res.size(); ++i){
        fout<<res[i]<<std::endl;
    }


}
int main(){
    getVocabs();


}

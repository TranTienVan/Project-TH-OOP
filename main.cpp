#include"./source/source/user/user.h"
#include"./source/source/topic/topic_vocabulary.h"


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
    // 3 4 5 6
    f.close();


}

int main(){
    demoDictionary();
}

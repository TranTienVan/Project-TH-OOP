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

int main(){
    demoUser();
}

#include"user.h"
User::User(std::string id, std::string username, std::string email, std::string password){
    this->id = id;
    this->username = username;
    this->email = email;
    this->password = password;
    this->score = 0;
}

User::User(std::string id, std::string username, std::string email, std::string password, int score){
    this->id = id;
    this->username = username;
    this->email = email;
    this->password = password;
    this->score = score;
}

User::User(Json::Value obj){
    id = obj["id"].asString();
    username = obj["username"].asString();
    password = obj["password"].asString();
    email = obj["email"].asString();
    score = obj["score"].asInt();

    this->obj = obj;
}
User::User(){
    id = "";
    username = "";
    email = "";
    password = "";
    
}

std::string User::getId(){
    return this->id;
}

std::string User::getUserName(){
    return this->username;
}

std::string User::getEmail(){
    return this->email;
}

std::string User::getPassword(){
    return this->password;
}

unsigned int SHF(std::string input){
    unsigned int init = 123456789;
    unsigned int magic = 5674356;
    unsigned int hash = 1;

    for (int i = 0; i < input.length(); ++i){
        hash = hash ^ (input[i]);
        hash = hash * magic;
    }

    return hash;
}

std::string ToHex(unsigned int input){
    std::string hexHash;
    std::stringstream hexStream;
    hexStream << std::hex << input;
    hexHash = hexStream.str();
    transform(hexHash.begin(), hexHash.end(), hexHash.begin(), ::toupper);
    return hexHash;
}

void User::setPassword(std::string pass){
    unsigned int shf = SHF(pass);
    this->password = ToHex(shf);
}

bool User::comparePassword(std::string pass){
    unsigned int shf = SHF(pass);
    return this->password == ToHex(shf);
}

int User::getIndexByEmail(Json::Value arrUser, std::string email){
    
    for (int i = 0; i < arrUser.size(); ++i){
        if (arrUser[i]["email"] == email){
            return i;
        }
    }

    return -1;
}

void User::updatePasswordByEmail(std::string email, std::string newPassword, std::string path){
    std::fstream f1(path, std::ios::in);
    Json::Value arrUser;
    Json::Reader reader;
    
    reader.parse(f1, arrUser);
    f1.close();

    int index = getIndexByEmail(arrUser, email);
    if (index != -1){
        arrUser[index]["password"] = ToHex(SHF(newPassword));
    }

    std::fstream f(path, std::ios::out);
    f << arrUser.toStyledString();
    
    f.close();
}


void User::updateVocabularyToDatabase(){
    Json::Value p;

    for (int i = 0; i < topicVocabularies.size(); i++){
        p.append(topicVocabularies[i].toJsonValue());
    }

    obj["topicVocabularies"] = p;
}

void User::updateGrammarToDatabase(){
    Json::Value p;

    for (int i = 0; i < topicGrammars.size(); i++){
        p.append(topicGrammars[i].toJsonValue());
    }

    obj["topicGrammars"] = p;
}

void User::updateAllToDatabase(Json::Value &actualJson, int index, std::string path) {
    std::fstream f(path, std::ios::out);
    updateVocabularyToDatabase();
    updateGrammarToDatabase();
    // obj["topicVocabularies"][0][0] = 2;
    actualJson[index] = obj;
    // std::cout<<actualJson[index] << std::endl;
    f <<actualJson;
    f.close();


}





void User::init(std::string path) {
    
}
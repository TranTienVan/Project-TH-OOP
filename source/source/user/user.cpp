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

void User::initVocabulary(std::string path){
    
    for (int i = 0; i < ALL_TOPICS_VOCABULARY.size(); i++){
        TopicVocabulary topicVocab = TopicVocabulary(
            ALL_TOPICS_VOCABULARY[i][0], ALL_TOPICS_VOCABULARY[i][1], ALL_TOPICS_VOCABULARY[i][2], ALL_TOPICS_VOCABULARY[i][3], Process()
        );

        topicVocab.readFromDatabase(path);

        topicVocabularies.push_back(topicVocab);
    }

    if (obj["topicVocabularies"].size() > 0){
        for (int i = 0; i < obj["topicVocabularies"].size(); i++){
            topicVocabularies[i].scanProcess(obj["topicVocabularies"][i]);
        }
    }
    
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

void User::initALL_TOPICS_VOCABULARY(std::string path) {
    std::fstream f(path, std::ios::in);

    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);

    // This software has 12 topics for vocabulary
    ALL_TOPICS_VOCABULARY.resize(12);
    
    for (int i = 0; i < actualJson.size(); i++){
        ALL_TOPICS_VOCABULARY[i].resize(4);
        ALL_TOPICS_VOCABULARY[i][0] = actualJson[i]["word"].asString();
        if (actualJson[i]["definition"].size() > 0){
            ALL_TOPICS_VOCABULARY[i][1] = actualJson[i]["definition"][0].asString();
        }
        ALL_TOPICS_VOCABULARY[i][2] = actualJson[i]["image"][0].asString();

        if (actualJson[i]["order"].size() > 0) {
            ALL_TOPICS_VOCABULARY[i][3] = actualJson[i]["order"][0].asString();
        }
    }
}

void User::initALL_TOPICS_GRAMMAR(std::string path){
    std::fstream f(path, std::ios::in);

    Json::Value actualJson;
    Json::Reader reader;
    
    reader.parse(f, actualJson);

    // This software has 4 topics for GRAMMAR
    ALL_TOPICS_GRAMMAR.resize(4);
    
    for (int i = 0; i < actualJson.size(); i++){
        ALL_TOPICS_GRAMMAR[i].resize(2);
        ALL_TOPICS_GRAMMAR[i][0] = actualJson[i]["name"].asString();
        ALL_TOPICS_GRAMMAR[i][1] = actualJson[i]["definition"].asString();
        
    }
}

void User::initGrammar(std::string path){
    for (int i = 0; i < ALL_TOPICS_GRAMMAR.size(); i++){
        TopicGrammar topicGrammar = TopicGrammar(
            ALL_TOPICS_GRAMMAR[i][0], ALL_TOPICS_GRAMMAR[i][1], "", "", Process()
        );

        topicGrammar.readFromDatabase(path);

        topicGrammars.push_back(topicGrammar);
    }

    if (obj["topicGrammars"].size() > 0){
        for (int i = 0; i < obj["topicGrammars"].size(); i++){
            topicGrammars[i].scanProcess(obj["topicGrammars"][i]);
        }
    }
}

void User::init(std::string path) {
    initALL_TOPICS_VOCABULARY(path + "Vocabulary/topics.json");
    initALL_TOPICS_GRAMMAR(path + "Grammar/Topic.json");
    initVocabulary(path + "Vocabulary/Topic");
    initGrammar(path + "Grammar/Topic");
}
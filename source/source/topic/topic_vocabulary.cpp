#include"topic_vocabulary.h"

void TopicVocabulary::readFromDatabase(const std::string path){

    std::fstream f(path + "/" + name + ".json", std::ios::in);
    Json::Value actualJson;
    Json::Reader reader;
    reader.parse(f, actualJson);
    
    // std::cout<<name << std::endl;   
    for (int j = 0; j < actualJson.size(); j++){
        // std::cout<<actualJson[j] << std::endl;
        std::string word = actualJson[j]["word"].asString();

        
        std::string image = "";
        std::string audio = "";
        std::string definition = "";
        std::string type = "";
        std::string spelling = "";
        std::vector<std::string> examples;
        std::string topic = name;
        

        if (actualJson[j]["image"].size() > 0){
            image = actualJson[j]["image"][0].asString();
        }

        if (actualJson[j]["definition"].size() > 0) {
            definition = actualJson[j]["definition"][0].asString();
        }

        if (actualJson[j]["audio"].isArray() && actualJson[j]["audio"].size() > 0) {
            audio = actualJson[j]["audio"][0].asString();
        }

        if (actualJson[j]["audio"].isString()) {
            audio = actualJson[j]["audio"].asString();
        }

        
        if (actualJson[j]["order"].size() > 1) {
            spelling = actualJson[j]["order"][0].asString();
            type = actualJson[j]["order"][1].asString();

            for (int k = 2; k < actualJson[j]["order"].size(); k++){
                examples.push_back(actualJson[j]["order"][k].asString());
            }
        }


        Vocabulary vocab = Vocabulary(
            word,
            definition,
            image,
            audio,
            type,
            spelling,
            examples,
            topic,
            Process()
        );
        vocabs.push_back(vocab);
    }

}

void TopicVocabulary::scanProcess(Json::Value obj){
    process.update(obj[0].asInt(), obj[1].asString());

    int j = 0;
    for (int i = 2; i < obj.size(); i+=2){
        vocabs[j].scanProcessVocab(obj[i].asInt(), obj[i+1].asString());
        j++;
        
    }
}

Json::Value TopicVocabulary::toJsonValue(){
    Json::Value p;
    Json::Value temp = process.toJsonValue();
    p.append(temp[0]);
    p.append(temp[1]);

    for (int i = 0; i < vocabs.size(); i++){
        temp = vocabs[i].getProcess().toJsonValue();
        p.append(temp[0]);
        p.append(temp[1]);
    }

    return p;
}
#include"topic_grammar.h"

void TopicGrammar::readFromDatabase(const std::string path){

    std::fstream f(path + "/" + name + ".json", std::ios::in);
    Json::Value actualJson;
    Json::Reader reader;
    reader.parse(f, actualJson);
    
    for (int j = 0; j < actualJson.size(); j++){
        std::string category = actualJson[j]["category"].asString();
        std::string grammar_name = actualJson[j]["name"].asString();
        std::vector<std::string> structure;
        std::vector<std::string> explanation;
        std::vector<std::string> example;
        
        
        
        
        

        if (actualJson[j]["structure"].size() > 0){
            for (int i = 0; i < actualJson[j]["structure"].size(); i++)
                structure.push_back(actualJson[j]["structure"][i].asString());
        }

        if (actualJson[j]["explanation"].size() > 0){
            for (int i = 0; i < actualJson[j]["explanation"].size(); i++)
                explanation.push_back(actualJson[j]["explanation"][i].asString());
        }
        
        if (actualJson[j]["example"].size() > 0){
            for (int i = 0; i < actualJson[j]["example"].size(); i++)
                example.push_back(actualJson[j]["example"][i].asString());
        }

        Grammar grammar = Grammar(
            category,
            grammar_name,
            structure,
            explanation,
            example,
            Process()
        );
        grammars.push_back(grammar);
    }

}

void TopicGrammar::scanProcess(Json::Value obj){
    process.update(obj[0].asInt(), obj[1].asString());

    int j = 0;
    for (int i = 2; i < obj.size(); i+=2){
        grammars[j].scanProcessGrammar(obj[i].asInt(), obj[i+1].asString());
        j++;
        
    }
}

Json::Value TopicGrammar::toJsonValue(){
    Json::Value p;
    Json::Value temp = process.toJsonValue();
    p.append(temp[0]);
    p.append(temp[1]);

    for (int i = 0; i < grammars.size(); i++){
        temp = grammars[i].getProcess().toJsonValue();
        p.append(temp[0]);
        p.append(temp[1]);
    }

    return p;
}
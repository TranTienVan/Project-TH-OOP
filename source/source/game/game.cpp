#include"game.h"
#include"traditional_game.h"
#include"list_word_game.h"
#include"matrix_word_game.h"
void Game::initTraditionalGame(std::vector<AppComponent*> topics, Json::Value &obj){
    for (int i = 0; i < 12; ++i){
        TraditionalGame* traditional_game = new TraditionalGame(
            (TopicVocabulary*)topics[i]   
        );
        traditional_game->score = obj[i].asInt();
        this->Add(traditional_game);
    }
}

void Game::initGame(std::vector<AppComponent*> topics, dict* enToVi, Json::Value &obj){
    initTraditionalGame(topics, obj);
    initListWordGame(enToVi, obj);
    initMatrixWordGame(enToVi, obj);
}

void Game::initListWordGame(dict* enToVi, Json::Value &obj){
    ListWordGame* word_game = new ListWordGame(enToVi);
    word_game->score = obj[12].asInt();
    this->Add(word_game);
}

void Game::initMatrixWordGame(dict* enToVi, Json::Value &obj) {
    MatrixWordGame* word_game = new MatrixWordGame(enToVi);
    word_game->score = obj[13].asInt();
    this->Add(word_game);
}

void Game::updateGame(Json::Value &obj){
    Json::Value res = Json::arrayValue;

    for (int i = 0; i < children.size(); ++i){
        res.append(children[i]->getScore());
    }

    obj["game"] = res;
}
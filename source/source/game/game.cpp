#include"game.h"
#include"traditional_game.h"
#include"list_word_game.h"
void Game::initTraditionalGame(std::vector<AppComponent*> topics){
    for (int i = 0; i < 12; ++i){
        TraditionalGame* traditional_game = new TraditionalGame(
            (TopicVocabulary*)topics[i]   
        );

        this->Add(traditional_game);
    }
}

void Game::initGame(std::vector<AppComponent*> topics, dict* enToVi){
    initTraditionalGame(topics);
    initListWordGame(enToVi);
}

void Game::initListWordGame(dict* enToVi){
    ListWordGame* word_game = new ListWordGame(enToVi);

    this->Add(word_game);
}
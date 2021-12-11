#include"game.h"
#include"traditional_game.h"

void Game::initTraditionalGame(std::vector<AppComponent*> topics){
    for (int i = 0; i < 12; ++i){
        TraditionalGame* traditional_game = new TraditionalGame(
            (TopicVocabulary*)topics[i]   
        );

        this->Add(traditional_game);
    }
}

void Game::initGame(std::vector<AppComponent*> topics){
    initTraditionalGame(topics);
}
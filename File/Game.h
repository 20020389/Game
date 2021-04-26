//
// Created by snow on 30/03/2021.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H
#include "Map.h"
#include "Event.h"


class Game {
public:
    Game();
    ~Game();
    void Run();


private:
    SDL_Window* Win= nullptr;
    Snow* get;
    DAI_Map* Map;
    DAI_Event* Event;
    SDL_Surface *Icon;
    DAI_Volume* Volume;


    void Init();
    void Render();
    void Game_Run();
    void Quit();


};


#endif //GAME_GAME_H

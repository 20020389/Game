//
// Created by snow on 31/03/2021.
//

#ifndef GAME_GAMEPLAY_H
#define GAME_GAMEPLAY_H
#include "Music.h"
#include "Bird.h"
#include "Pipe.h"



class DAI_GamePlay {
public:
    DAI_GamePlay();
    ~DAI_GamePlay();
    void Draw_GamePlay(Snow* get);
    void Init(Snow* get);
    void Free(Snow* get);
private:
    int time_all=0;
    DAI_Music* Music;
    DAI_Bird* Bird;
    DAI_Pipe* Pipe;
    DAI_Score* Score;

    SDL_Texture *BG_img[2];
    SDL_Rect BG[2];
    SDL_Texture* Change_BG_Img[4];
    SDL_Rect Change_BG;
    SDL_Texture* Music_Base_Img[2];
    SDL_Rect Music_Base;
    SDL_Texture* Floor_Img;
    SDL_Rect Floor[2];
    void BG_Move();
    void Time(Snow* get);


};


#endif //GAME_GAMEPLAY_H

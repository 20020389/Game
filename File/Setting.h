//
// Created by snow on 10/04/2021.
//

#ifndef GAME_SETTING_H
#define GAME_SETTING_H
#include "header.h"
#include "Score.h"
#include "SaveKey.h"
class DAI_Setting{
public:
    DAI_Setting();
    ~DAI_Setting();
    void Draw(Snow* get);
    void Init(Snow* get);
    void Free();
    void BG_Move();

private:
    DAI_SaveKey* SaveKey;
    DAI_Score* Score;
    SDL_Rect Level_Base[2];
    SDL_Texture* Bird_Img[4];
    SDL_Texture* Level_Img[3];
    SDL_Rect Level[4];
    SDL_Texture* BG_Img[2];
    SDL_Rect BG[2];
    SDL_Texture* About_Img[3];
    SDL_Rect About[2];
    SDL_Texture* Hard_Img[3][2];
    SDL_Rect Hard[3];
    SDL_Texture *Key_Base_Img[2];
    SDL_Rect Key_Base;
    void Bird_Move(Snow* get);
};


#endif //GAME_SETTING_H

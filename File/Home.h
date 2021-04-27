//
// Created by snow on 30/03/2021.
//

#ifndef GAME_HOME_H
#define GAME_HOME_H
#include "Music.h"
#include "Score.h"
#include "User.h"


class DAI_Home {
public:
    DAI_Home();
    ~DAI_Home();
    void Init_Home(Snow* get);
    void Draw_Home(Snow* get);
    void Free();
    void Play_Music(Snow* get);
    void Draw_NameMS(Snow* get);
private:
    SDL_Texture *Setting_Img[2];
    SDL_Rect Setting;
    SDL_Texture *BG_img[2];
    SDL_Rect BG[2];
    void BG_Move();
    SDL_Texture* Logo_Img;
    SDL_Rect Logo;
    SDL_Texture* PlayButton_Img[2];
    SDL_Rect PlayButton;
    SDL_Texture* Change_BG_Img[4];
    SDL_Rect Change_BG;
    SDL_Texture* Music_Base_Img[2];
    SDL_Rect Music_Base;
    DAI_Music* Music;
    DAI_User* User;
};


#endif //GAME_HOME_H

//
// Created by snow on 06/04/2021.
//

#ifndef GAME_DEATH_H
#define GAME_DEATH_H
#include "Score.h"

class DAI_Death {
public:
    DAI_Death();
    ~DAI_Death();
    void Init(Snow* get);
    void Free();
    void Draw(Snow* get);

private:
    DAI_Score* Score;
    int max;
    bool up=true,Death_Up= false, Get_Point= false;

    Mix_Chunk *Audio;
    SDL_Texture* Death_Img;
    SDL_Texture* GameOver_Img;
    SDL_Texture* Medal_Img;
    SDL_Texture* New_Img;
    SDL_Texture* Ani_Img[4];
    SDL_Texture* PlayAgain_Img[2];

    SDL_Rect Death;
    SDL_Rect GameOver;
    SDL_Rect score[2];
    SDL_Rect highscore[2];
    SDL_Rect Medal;
    SDL_Rect New;
    SDL_Rect Ani;
    SDL_Rect PlayAgain;

    void GameOver_Move(Snow* get);
    void Render_Point(Snow* get);
    void Restart(Snow* get);
    void Draw_Animation(Snow* get);
};


#endif //GAME_DEATH_H

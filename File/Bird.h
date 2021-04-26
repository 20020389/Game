//
// Created by snow on 31/03/2021.
//

#ifndef GAME_BIRD_H
#define GAME_BIRD_H
#include "Death.h"

class DAI_Bird {
public:
    DAI_Bird(void);
    ~DAI_Bird(void);
    void Draw(Snow* get);
    void Init(Snow* get);
    void Bird_Move(Snow* get);
    void Free();
    void Key_Bird(Snow* get);
    void Begin(Snow* get);
    void Survival(Snow* get);
private:
    DAI_Death* Death;
    SDL_Texture* Bird_Img[4];
    SDL_Texture* Tap_Img;
    SDL_Rect Tap;
    Mix_Chunk* Audio[4];
    int Hit_Audio=0;
    SDL_Rect Dead_Animation;

};


#endif //GAME_BIRD_H

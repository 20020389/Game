//
// Created by snow on 31/03/2021.
//

#ifndef GAME_SCORE_H
#define GAME_SCORE_H
#include "header.h"
#include <fstream>

class DAI_Score {
public:
    DAI_Score(void);
    ~DAI_Score(void);
    void Draw(Snow *get, SDL_Rect* SB, int SC);
    std::string HC;
    void Loading_Game(Snow* );
    void Init(Snow* get);
    void Free();
    void Score_Play(Snow* get);
    void Init_Loading(Snow* get);
    void Free_Loading();
    void Get_HC(Snow* get);
    void Save_Score(Snow* get);
    SDL_Rect Score_Base[2];
    SDL_Texture* Score_Img[10];
private:
    SDL_Texture* Loading_Img;
    SDL_Rect Loading;
    SDL_Rect Base;
    int score=0,high_score;

    Mix_Chunk *Audio;

};

#endif //GAME_SCORE_H

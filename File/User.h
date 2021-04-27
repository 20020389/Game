//
// Created by snow on 4/27/21.
//

#ifndef GAME_USER_H
#define GAME_USER_H
#include "header.h"
#include <fstream>
#include <SDL2/SDL_ttf.h>
class DAI_User {
public:
    DAI_User();
    ~DAI_User();
    void Draw(Snow* get);
    void get_user(Snow *get);
    void Changing_user(Snow* get);
private:
    std::ifstream file_get;
    SDL_Color BL;
    TTF_Font *Font;

    SDL_Texture *user_tex;
    SDL_Surface *user_sur;
    int Time=0;
};


#endif //GAME_USER_H

//
// Created by snow on 4/25/21.
//

#ifndef GAME_SAVEKEY_H
#define GAME_SAVEKEY_H
#include "header.h"
#include <fstream>
#include <SDL2/SDL_ttf.h>
class DAI_SaveKey {
public:
    DAI_SaveKey();
    ~DAI_SaveKey();
    void Save_Key(Snow* get);
    void Get_Key(Snow* get);
    void Init(Snow* get);
    void Draw(Snow* get);
    void Time_Click(Snow* get);
    void Change_Key(Snow* get);
private:

    std::ifstream fileopen;
    std::ofstream filesave;
    int temp;
    SDL_Color BL;
    SDL_Rect Key_Rect[2];
    TTF_Font *Font;
    SDL_Texture *Key_tex;
    SDL_Surface *Key_Sur;
    std::string key;
};


#endif //GAME_SAVEKEY_H

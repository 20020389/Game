//
// Created by snow on 30/03/2021.
//

#ifndef GAME_TEXT_H
#define GAME_TEXT_H
#include "Score.h"
#include <SDL2/SDL_ttf.h>
class DAI_Text {
public:
    DAI_Text();
    ~DAI_Text();
    SDL_Texture* Get_Name(Snow* get,std::string Music);
    SDL_Texture* Get_HC(Snow* get);
    void Draw(Snow* get,std::vector<std::string> Music);
    SDL_Rect* Name_Music(Snow* get,std::vector<std::string> Music);
    void Init(Snow* get,std::vector<std::string> Music);
    void Draw_Score(Snow* get);
private:
    SDL_Rect HC_Base;
    DAI_Score* Score;
    TTF_Font* font = nullptr,*font2= nullptr;
    SDL_Color BL;
    SDL_Surface *Sur;
    SDL_Surface*Sur1;
    SDL_Texture* Tex;
    SDL_Texture* Tex1;
    SDL_Rect SCORE;
    std::vector<SDL_Rect> Text;
    std::string HC;
};


#endif //GAME_TEXT_H

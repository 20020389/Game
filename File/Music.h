//
// Created by snow on 30/03/2021.
//

#ifndef GAME_MUSIC_H
#define GAME_MUSIC_H


#include "Text.h"
#include <fstream>
#include <SDL2/SDL_mixer.h>

class DAI_Music
{
public:
    DAI_Music();
    ~DAI_Music();
    void Play_Music(Snow* );
    //void Music_Control(Console* Get);
    void Draw(Snow* get);
    void Get_NameMS(SDL_Renderer*);\
    void Draw_Score(Snow* get);
    void Init_HC(Snow* get);

private:
    DAI_Text* Text;
    int number=0;
    std::vector<Mix_Music*> MUSIC;
    std::vector<std::string> Music;
    void Name_Music();
    void Save_Music();
    void Load_Music();



};


#endif //GAME_MUSIC_H

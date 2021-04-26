//
// Created by snow on 01/04/2021.
//

#ifndef GAME_PIPE_H
#define GAME_PIPE_H
#include "header.h"
#include <cstdlib>
#include <ctime>


class DAI_Pipe {
public:
    DAI_Pipe();
    ~DAI_Pipe();
    void Init(Snow* get);
    void Free();
    void Draw(Snow* get);

private:
    SDL_Texture *Pibe_Img[2]{};
    void Pipe_Move(Snow* get);
    void Pipe_Super_Move(Snow* get);
    int up[4];

};


#endif //GAME_PIPE_H

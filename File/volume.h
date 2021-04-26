//
// Created by snow on 14/04/2021.
//

#ifndef GAME_VOLUME_H
#define GAME_VOLUME_H
#include "header.h"

class DAI_Volume {
public:
    DAI_Volume();
    ~DAI_Volume();
    void Init(Snow* get);
    void Free();
    void Draw(Snow* get);

private:
    void Time(Snow* get);

    SDL_Texture* Change_VL_Img[4],*Base_Img[3];
    SDL_Rect Chang_VL,base[3];

};


#endif //GAME_VOLUME_H

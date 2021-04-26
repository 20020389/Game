//
// Created by snow on 30/03/2021.
//

#ifndef GAME_MAP_H
#define GAME_MAP_H
#include "Home.h"
#include "GamePlay.h"
#include "Setting.h"
#include "volume.h"
#include "SaveKey.h"

class DAI_Map {
public:
    DAI_Map(void );
    ~DAI_Map(void );
    void Init(Snow* get);
    void Draw(Snow* get);
private:

    DAI_Home* Home;
    DAI_GamePlay* GamePlay;
    DAI_Setting* Setting;
    DAI_SaveKey* SaveKey;
};


#endif //GAME_MAP_H

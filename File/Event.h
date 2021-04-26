//
// Created by snow on 30/03/2021.
//

#ifndef GAME_EVENT_H
#define GAME_EVENT_H
#include "Bird.h"
#include "Score.h"
class DAI_Event {
public:
    DAI_Event(void);
    ~DAI_Event(void);
    void Update(Snow* get);

public:
    void Key(Snow* get);
    void Mouse(Snow* get);
    void key_Change(Snow* get);
    DAI_Bird* Bird_Key;
    DAI_Score* Save_Score;

};


#endif //GAME_EVENT_H

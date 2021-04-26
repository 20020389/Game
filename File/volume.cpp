//
// Created by snow on 14/04/2021.
//

#include "volume.h"


DAI_Volume::DAI_Volume() {
    Chang_VL={376,400,248,248};
    base[0]={Chang_VL.x+1,Chang_VL.y+227,30*222/100,8};
    base[1]={Chang_VL.x+13,Chang_VL.y+227,222,8};
    base[2]={Chang_VL.x+13,Chang_VL.y+227,12,8};
}

DAI_Volume::~DAI_Volume() {}

void DAI_Volume::Init(Snow *get) {
    Change_VL_Img[0]=IMG_LoadTexture(get-> render,"Resource/Audio/Volume0.png");
    Change_VL_Img[1]=IMG_LoadTexture(get-> render,"Resource/Audio/Volume1.png");
    Change_VL_Img[2]=IMG_LoadTexture(get-> render,"Resource/Audio/Volume2.png");
    Change_VL_Img[3]=IMG_LoadTexture(get-> render,"Resource/Audio/Volume3.png");
    Base_Img[0]=IMG_LoadTexture(get->render,"Resource/Audio/Base1.png");
    Base_Img[1]=IMG_LoadTexture(get->render,"Resource/Audio/Base2.png");
    Base_Img[2]=IMG_LoadTexture(get->render,"Resource/Audio/headbase.png");

}

void DAI_Volume::Free() {
    for(int i=0; i<3;i++)
        SDL_DestroyTexture(Change_VL_Img[i]);
    SDL_DestroyTexture(Base_Img[0]);
    SDL_DestroyTexture(Base_Img[0]);
}

void DAI_Volume::Time(Snow* get) {

    if(base[0].w<get->volume*222/100)
    {
        if(base[0].w+4>get->volume*222/100)
            base[0].w=get->volume*222/100;
        else
            base[0].w+=4;
    }
    if(base[0].w>get->volume*222/100)
    {
        if(base[0].w-4<get->volume*222/100)
            base[0].w=get->volume*222/100;
        else
            base[0].w-=4;
    }

    base[2].x=base[0].x+base[0].w;
    if(get->time_ChangeVL==200)
    {
        get->Change_Vl= false;
        get->time_ChangeVL=0;
    }
    get->time_ChangeVL++;
}

void DAI_Volume::Draw(Snow *get) {
    Time(get);
    if(get->Change_Vl)
    {
        SDL_RenderCopy(get->render,Base_Img[1], nullptr,&base[1]);
        SDL_RenderCopy(get->render,Base_Img[0], nullptr,&base[0]);
        SDL_RenderCopy(get->render,Base_Img[2], nullptr,&base[2]);
        if(get->volume==0)
            SDL_RenderCopy(get->render,Change_VL_Img[0], nullptr,&Chang_VL);
        if(get->volume>0&&get->volume<=33)
            SDL_RenderCopy(get->render,Change_VL_Img[1], nullptr,&Chang_VL);
        if(get->volume>33 && get->volume<=66)
            SDL_RenderCopy(get->render,Change_VL_Img[2], nullptr,&Chang_VL);
        if(get->volume>66)
            SDL_RenderCopy(get->render,Change_VL_Img[3], nullptr,&Chang_VL);
    }
}
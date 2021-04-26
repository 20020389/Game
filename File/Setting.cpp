//
// Created by snow on 10/04/2021.
//

#include "Setting.h"

int LV,Range_LV;

DAI_Setting::DAI_Setting() {
    BG[0]={0,0,1001,800};
    BG[1]={1000,0,1001,800};
    Level[0] = {430,110,140,58};
    Level[1] = {180, 250, 640, 66};
    About[0] = {430,600,140,58};
    About[1] = {100,100,800,533};
    Hard[0] = {180,350,140,58};
    Hard[1] = {680,350,140,58};
    Hard[2] = {430,350,140,58};
    Level_Base[0]={475,190,24,36};
    Level_Base[1]={501,190,24,36};
    Key_Base={430,500,140,58};
    Score = new DAI_Score();
    SaveKey= new DAI_SaveKey();
}

DAI_Setting::~DAI_Setting(){
    delete(Score);
    delete(SaveKey);
}


void DAI_Setting::Init(Snow *get) {
    SaveKey->Get_Key(get);
    Score->Init(get);
    get->Bird = {get->Level * 9+Level[1].x-20,256,72,54};
    Level[2] = {188,256, get->Bird.x+25-Level[1].x, 54};
    BG_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/BG1.png");
    BG_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/BG2.png");

    Level_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/level1.png");
    Level_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/Choose_lv4.png");

    Bird_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/ybird2.png");
    Bird_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/Birdd2.png");
    Bird_Img[2]=IMG_LoadTexture(get->render,"Resource/Asset/Birdd3.png");
    Bird_Img[3]=IMG_LoadTexture(get->render,"Resource/Asset/Birdd1.png");

    About_Img[0]=IMG_LoadTexture(get->render, "Resource/Asset/About1.png");
    About_Img[1]=IMG_LoadTexture(get->render, "Resource/Asset/About2.png");
    About_Img[2]=IMG_LoadTexture(get->render, "Resource/Asset/About3.png");

    Hard_Img[0][0]=IMG_LoadTexture(get->render,"Resource/Asset/Hard1.png");
    Hard_Img[0][1]=IMG_LoadTexture(get->render,"Resource/Asset/Hard_dark1.png");
    Hard_Img[1][0]=IMG_LoadTexture(get->render,"Resource/Asset/Hard3.png");
    Hard_Img[1][1]=IMG_LoadTexture(get->render,"Resource/Asset/Hard_dark3.png");
    Hard_Img[2][0]=IMG_LoadTexture(get->render,"Resource/Asset/Hard2.png");
    Hard_Img[2][1]=IMG_LoadTexture(get->render,"Resource/Asset/Hard_dark2.png");

    Key_Base_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/Key1.png");
    Key_Base_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/Key2.png");
}

void DAI_Setting::Free() {
    SDL_DestroyTexture(BG_Img[0]);
    SDL_DestroyTexture(BG_Img[1]);
    SDL_DestroyTexture(Level_Img[0]);
    SDL_DestroyTexture(Level_Img[1]);
    for(auto & i : Bird_Img)
        SDL_DestroyTexture(i);
    for(int i=0;i<3;i++)
    {
        SDL_DestroyTexture(About_Img[i]);
        for(int j=0;j<2;j++)
            SDL_DestroyTexture(Hard_Img[i][j]);
    }
    SDL_DestroyTexture(Key_Base_Img[0]);
    SDL_DestroyTexture(Key_Base_Img[1]);
    Score->Free();

}


void DAI_Setting::Draw(Snow *get) {
    BG_Move();
    Bird_Move(get);
    if(get->BG=="light")
    {
        SDL_RenderCopy(get->render, BG_Img[0], nullptr,&BG[0]);
        SDL_RenderCopy(get->render, BG_Img[0], nullptr,&BG[1]);
    }
    if(get->BG=="dark")
    {
        SDL_RenderCopy(get->render, BG_Img[1], nullptr,&BG[0]);
        SDL_RenderCopy(get->render, BG_Img[1], nullptr,&BG[1]);
    }
    SDL_RenderCopy(get->render,Level_Img[0], nullptr,&Level[0]);
    SDL_RenderCopy(get->render,Level_Img[1], nullptr,&Level[1]);
    if(get->Level>=0&&get->Level<=4)
        SDL_SetRenderDrawColor(get->render,0, 255, 100,1);
    if(get->Level>=5&&get->Level<=9)
        SDL_SetRenderDrawColor(get->render,0, 255, 50,1);
    if(get->Level>=10&&get->Level<=14)
        SDL_SetRenderDrawColor(get->render,0, 255, 0,1);
    if(get->Level>=14&&get->Level<=19)
        SDL_SetRenderDrawColor(get->render,50, 255, 0,1);
    if(get->Level>=20&&get->Level<=24)
        SDL_SetRenderDrawColor(get->render,100, 255, 0,1);
    if(get->Level>=25&&get->Level<=29)
        SDL_SetRenderDrawColor(get->render,150, 255, 0,1);
    if(get->Level>=30&&get->Level<=34)
        SDL_SetRenderDrawColor(get->render,200, 250, 0,1);
    if(get->Level>=35&&get->Level<=39)
        SDL_SetRenderDrawColor(get->render,255, 220, 0,1);
    if(get->Level>=40&&get->Level<=44)
        SDL_SetRenderDrawColor(get->render,255, 190, 0,1);
    if(get->Level>=45&&get->Level<=49)
        SDL_SetRenderDrawColor(get->render,255, 160, 0,1);
    if(get->Level>=50&&get->Level<=54)
        SDL_SetRenderDrawColor(get->render,255, 130, 0,1);
    if(get->Level>=55&&get->Level<=59)
        SDL_SetRenderDrawColor(get->render,255, 100, 0,1);
    if(get->Level>=60&&get->Level<=64)
        SDL_SetRenderDrawColor(get->render,255, 70, 0,1);
    if(get->Level>=65&&get->Level<=67)
        SDL_SetRenderDrawColor(get->render,255, 40, 0,1);
    SDL_RenderFillRect(get->render,&Level[2]);
    if(get->Level<=17)
        SDL_RenderCopy(get->render,Bird_Img[1], nullptr,&get->Bird);
    if(get->Level>17&&get->Level<=34)
        SDL_RenderCopy(get->render,Bird_Img[0], nullptr,&get->Bird);
    if(get->Level>34&&get->Level<=51)
        SDL_RenderCopy(get->render,Bird_Img[2], nullptr,&get->Bird);
    if(get->Level>51&&get->Level<68)
        SDL_RenderCopy(get->render,Bird_Img[3], nullptr,&get->Bird);
    if(get->mouse_x>=430&&get->mouse_x<=570&&
       get->mouse_y>=600&&get->mouse_y<=658&&!get->About)
        SDL_RenderCopy(get->render,About_Img[1], nullptr,&About[0]);
    else
        SDL_RenderCopy(get->render,About_Img[0], nullptr,&About[0]);
    SDL_RenderCopy(get->render,Hard_Img[0][0], nullptr,&Hard[0]);
    SDL_RenderCopy(get->render,Hard_Img[1][0], nullptr,&Hard[1]);
    SDL_RenderCopy(get->render,Hard_Img[2][0], nullptr,&Hard[2]);
    SDL_RenderCopy(get->render,Hard_Img[get->Pipe_Hard][1], nullptr,&Hard[get->Pipe_Hard]);
    Score->Draw(get,Level_Base,get->Level);
    if(get->mouse_x>=430&&get->mouse_x<=570&&
       get->mouse_y>=500&&get->mouse_y<=558)
        SDL_RenderCopy(get->render,Key_Base_Img[1], nullptr,&Key_Base);
    else
        SDL_RenderCopy(get->render,Key_Base_Img[0], nullptr,&Key_Base);
    SaveKey->Draw(get);
    if(get->About)
        SDL_RenderCopy(get->render,About_Img[2], nullptr,&About[1]);
}

void DAI_Setting::BG_Move() {
    BG[0].x-=2;
    BG[1].x-=2;
    if(BG[0].x==-1000)
        BG[0].x=1000;
    if(BG[1].x==-1000)
        BG[1].x=1000;
}


void DAI_Setting::Bird_Move(Snow *get) {
    if(get->Lv_Move)
    {
        get->Level=(get->Bird.x-Level[1].x+20)/9;
        Level[2].w=get->Bird.x+25-Level[1].x;
        if(get->Bird.x>=Level[1].x-20&&get->Bird.x<=Level[1].x+Level[1].w-50)
            get->Bird.x=get->mouse_x-get->Limit_LV_Move;
        if(get->Bird.x>Level[1].x+Level[1].w-50)
            get->Bird.x=Level[1].x+Level[1].w-50;
        if(get->Bird.x<Level[1].x-20)
            get->Bird.x=Level[1].x-20;
    }
}
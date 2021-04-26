//
// Created by snow on 31/03/2021.
//

#include "GamePlay.h"


DAI_GamePlay::DAI_GamePlay() {
    BG[0]={0,0,1001,800};
    BG[1]={1000,0,1001,800};
    Change_BG={890,15,104,58};
    Music_Base={20,10,95,35};
    Floor[0]=BG[0];
    Floor[1]=BG[1];

    Bird= new DAI_Bird();
    Pipe= new DAI_Pipe();
    Score=new DAI_Score();
    Music=new DAI_Music();
}

DAI_GamePlay::~DAI_GamePlay() {
    delete Music;
    delete Bird;
    delete Pipe;
    delete Score;
}


void DAI_GamePlay::Init(Snow *get) {
    Score->Init(get);
    Bird->Init(get);
    Pipe->Init(get);
    Score->Init_Loading(get);

    SDL_SetRenderDrawColor(get->render,0,0,0,1);
    BG_img[0]=IMG_LoadTexture(get->render,"Resource/Asset/BG1.png");
    BG_img[1]=IMG_LoadTexture(get->render,"Resource/Asset/BG2.png");
    Change_BG_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/Light.png");
    Change_BG_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/Light1.png");
    Change_BG_Img[2]=IMG_LoadTexture(get->render,"Resource/Asset/Dark.png");
    Change_BG_Img[3]=IMG_LoadTexture(get->render,"Resource/Asset/Dark1.png");
    Music_Base_Img[0]=IMG_LoadTexture(get->render,"Resource/Audio/Music1.png");
    Music_Base_Img[1]=IMG_LoadTexture(get->render,"Resource/Audio/Music2.png");
    Floor_Img=IMG_LoadTexture(get->render,"Resource/Asset/Floor.png");

    //std::cout<<"call Init Play"<<std::endl;
    Score->Loading_Game(get);
    Score->Free_Loading();

    static int a=0;
    if(a==0)
    {
        Music->Init_HC(get);
        a++;
    }

}

void DAI_GamePlay::Draw_GamePlay(Snow *get) {
    Time(get);
    Score->Score_Play(get);
    if(!get->Press_to_Begin&&get->Survival)
    {
        Bird->Bird_Move(get);
        BG_Move();
    }
    if(get->BG=="light") {
        SDL_RenderCopy(get->render,BG_img[0], nullptr,&BG[0]);
        SDL_RenderCopy(get->render,BG_img[0], nullptr,&BG[1]);
        Pipe->Draw(get);
        Bird->Draw(get);
        SDL_RenderCopy(get->render,Floor_Img, nullptr,&Floor[0]);
        SDL_RenderCopy(get->render,Floor_Img, nullptr,&Floor[1]);
        if(get->mouse_x>=890&&get->mouse_x<=994
           &&get->mouse_y>=15&&get->mouse_y<=73)
            SDL_RenderCopy(get->render,Change_BG_Img[1], nullptr,&Change_BG);
        else
            SDL_RenderCopy(get->render,Change_BG_Img[0], nullptr,&Change_BG);
    }
    if(get->BG=="dark") {
        SDL_RenderCopy(get->render,BG_img[1], nullptr,&BG[0]);
        SDL_RenderCopy(get->render,BG_img[1], nullptr,&BG[1]);
        Pipe->Draw(get);
        Bird->Draw(get);
        SDL_RenderCopy(get->render,Floor_Img, nullptr,&Floor[0]);
        SDL_RenderCopy(get->render,Floor_Img, nullptr,&Floor[1]);
        if(get->mouse_x>=890&&get->mouse_x<=994
           &&get->mouse_y>=15&&get->mouse_y<=73)
            SDL_RenderCopy(get->render,Change_BG_Img[3], nullptr,&Change_BG);
        else
            SDL_RenderCopy(get->render,Change_BG_Img[2], nullptr,&Change_BG);

    }

    if(get->Music_Play)
        SDL_RenderCopy(get->render,Music_Base_Img[0], nullptr,&Music_Base);
    else
        SDL_RenderCopy(get->render,Music_Base_Img[1], nullptr,&Music_Base);

    Score->Draw(get,Score->Score_Base,get->score);
    Music->Draw(get);
}

void DAI_GamePlay::BG_Move() {
    BG[0].x-=2;
    BG[1].x-=2;
    if(BG[0].x==-1000)
        BG[0].x=1000;
    if(BG[1].x==-1000)
        BG[1].x=1000;
    Floor[0].x=BG[0].x;
    Floor[1].x=BG[1].x;
}

void DAI_GamePlay::Free(Snow* get) {
    Score->Init_Loading(get);
    SDL_DestroyTexture(BG_img[0]);
    SDL_DestroyTexture(BG_img[1]);
    SDL_DestroyTexture(Change_BG_Img[0]);
    SDL_DestroyTexture(Change_BG_Img[1]);
    SDL_DestroyTexture(Change_BG_Img[2]);
    SDL_DestroyTexture(Change_BG_Img[3]);
    SDL_DestroyTexture(Music_Base_Img[0]);
    SDL_DestroyTexture(Music_Base_Img[1]);
    SDL_DestroyTexture(Floor_Img);
    Score->Loading_Game(get);
    Score->Free_Loading();
    Bird->Free();
    Pipe->Free();
    Score->Free();
    //std::cout<<"call Destroy"<<std::endl;

}


void DAI_GamePlay::Time(Snow *get) {
    if(time_all==300)
        time_all=0;
    time_all++;
    if(get->Time_Animation==3)
        get->Time_Animation=1;
    if(time_all%10==0)
        get->Time_Animation++;
}


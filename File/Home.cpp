//
// Created by snow on 30/03/2021.
//

#include "Home.h"

DAI_Home::DAI_Home() {
    Setting = {10,50,140,58};
    BG[0]={0,0,1001,800};
    BG[1]={1000,0,1001,800};
    Logo={240,170,520,139};
    PlayButton={396,342,208,116};
    Change_BG={890,15,104,58};
    Music_Base={20,10,95,35};
    Music= new DAI_Music();
}

DAI_Home::~DAI_Home() {
    //delete Music;
}

void DAI_Home::Init_Home(Snow *get) {
    static int a=0;
    if(a==0)
    {
        Music->Init_HC(get);
        a++;
    }
    Setting_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/setting1.png");
    Setting_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/setting2.png");
    BG_img[0]=IMG_LoadTexture(get->render,"Resource/Asset/BG1.png");
    BG_img[1]=IMG_LoadTexture(get->render,"Resource/Asset/BG2.png");
    Logo_Img=IMG_LoadTexture(get->render,"Resource/Start/Logo.png");
    PlayButton_Img[0]=IMG_LoadTexture(get->render,"Resource/Start/Play3.png");
    PlayButton_Img[1]=IMG_LoadTexture(get->render,"Resource/Start/Play2.png");
    Change_BG_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/Light.png");
    Change_BG_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/Light1.png");
    Change_BG_Img[2]=IMG_LoadTexture(get->render,"Resource/Asset/Dark.png");
    Change_BG_Img[3]=IMG_LoadTexture(get->render,"Resource/Asset/Dark1.png");
    Music_Base_Img[0]=IMG_LoadTexture(get->render,"Resource/Audio/Music1.png");
    Music_Base_Img[1]=IMG_LoadTexture(get->render,"Resource/Audio/Music2.png");
    //std::cout<<"call Init Home"<<std::endl;
}


void DAI_Home::Draw_Home(Snow *get) {
    BG_Move();
    if(get->BG=="light") {
        SDL_RenderCopy(get->render,BG_img[0], nullptr,&BG[0]);
        SDL_RenderCopy(get->render,BG_img[0], nullptr,&BG[1]);
        if(get->mouse_x>=890&&get->mouse_x<=994
           &&get->mouse_y>=15&&get->mouse_y<=73)
            SDL_RenderCopy(get->render,Change_BG_Img[1], nullptr,&Change_BG);
        else
            SDL_RenderCopy(get->render,Change_BG_Img[0], nullptr,&Change_BG);
    }
    if(get->BG=="dark") {
        SDL_RenderCopy(get->render,BG_img[1], nullptr,&BG[0]);
        SDL_RenderCopy(get->render,BG_img[1], nullptr,&BG[1]);
        if(get->mouse_x>=890&&get->mouse_x<=994
           &&get->mouse_y>=15&&get->mouse_y<=73)
            SDL_RenderCopy(get->render,Change_BG_Img[3], nullptr,&Change_BG);
        else
            SDL_RenderCopy(get->render,Change_BG_Img[2], nullptr,&Change_BG);
    }
    SDL_RenderCopy(get->render,Logo_Img, nullptr,&Logo);

    if(!(get->mouse_x>=396 && get->mouse_x<=604
         && get->mouse_y >=342 && get->mouse_y<=458))
        SDL_RenderCopy(get->render,PlayButton_Img[0], nullptr,&PlayButton);
    else
        SDL_RenderCopy(get->render,PlayButton_Img[1], nullptr,&PlayButton);

    if(get->Music_Play)
        SDL_RenderCopy(get->render,Music_Base_Img[0], nullptr,&Music_Base);
    else
        SDL_RenderCopy(get->render,Music_Base_Img[1], nullptr,&Music_Base);
    if(get->mouse_x>=10&& get->mouse_x<=150&&
            get->mouse_y>=50&& get->mouse_y<=108)
        SDL_RenderCopy(get->render, Setting_Img[1], nullptr, &Setting);
    else
        SDL_RenderCopy(get->render, Setting_Img[0], nullptr, &Setting);
    Music->Draw(get);
    Music->Draw_Score(get);
}

void DAI_Home::BG_Move() {
    BG[0].x-=2;
    BG[1].x-=2;
    if(BG[0].x==-1000)
        BG[0].x=1000;
    if(BG[1].x==-1000)
        BG[1].x=1000;
}

void DAI_Home::Free() {

    SDL_DestroyTexture(BG_img[0]);
    SDL_DestroyTexture(BG_img[1]);
    SDL_DestroyTexture(Logo_Img);
    SDL_DestroyTexture(PlayButton_Img[0]);
    SDL_DestroyTexture(PlayButton_Img[1]);
    SDL_DestroyTexture(Change_BG_Img[0]);
    SDL_DestroyTexture(Change_BG_Img[1]);
    SDL_DestroyTexture(Change_BG_Img[2]);
    SDL_DestroyTexture(Change_BG_Img[3]);
    SDL_DestroyTexture(Music_Base_Img[0]);
    SDL_DestroyTexture(Music_Base_Img[1]);
    SDL_DestroyTexture(Setting_Img[0]);
    SDL_DestroyTexture(Setting_Img[1]);
    //std::cout<<"call Destroy Home"<<std::endl;

}

void DAI_Home::Play_Music(Snow* get) {
    Music->Play_Music(get);
}

void DAI_Home::Draw_NameMS(Snow *get) {
    Music->Draw(get);
}
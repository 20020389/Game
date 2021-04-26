//
// Created by snow on 31/03/2021.
//
#include "Bird.h"


DAI_Bird::DAI_Bird() {

    Audio[1]=Mix_LoadWAV("Resource/Audio/sfx_wing.wav");
    Audio[0]=Mix_LoadWAV("Resource/Audio/sfx_hit.wav");
    Tap={316,250,368,300};
    Dead_Animation={0,0,1000,800};
    Death= new DAI_Death();

}

DAI_Bird::~DAI_Bird() {
    delete Death;
}

void DAI_Bird::Init(Snow* get) {
    Tap_Img= IMG_LoadTexture(get->render,"Resource/Asset/tap.png");
    Bird_Img[0]=IMG_LoadTexture(get->render,"Resource/Skin/Bird4(4).png");
    Bird_Img[1]=IMG_LoadTexture(get->render,"Resource/Skin/Bird1(4).png");
    Bird_Img[2]=IMG_LoadTexture(get->render,"Resource/Skin/Bird2(4).png");
    Bird_Img[3]=IMG_LoadTexture(get->render,"Resource/Skin/Bird3(4).png");
    Death->Init(get);
}

void DAI_Bird::Draw(Snow *get) {
    Survival(get);
    if(get->Press_to_Begin&&get->Survival)
    {
        SDL_RenderCopy(get->render,Bird_Img[2], nullptr,&get->Bird);
        SDL_RenderCopy(get->render,Tap_Img, nullptr,&Tap);
    }
    else if(!get->Press_to_Begin&&get->Survival)
        SDL_RenderCopyEx(get->render,Bird_Img[get->Time_Animation], nullptr,
                         &get->Bird,get->radian, nullptr,SDL_FLIP_NONE);
    else if(!get->Press_to_Begin&&!get->Survival)
    {
        if(get->radian<90)
        {
            get->radian+=3;
        }
        else if(get->radian>90)
            get->radian=90;
        if(get->Bird.y < 663)
        {

            get->Bird.y+=5;

        }
        if(get->Bird.y>=400)
            Death->Draw(get);
        SDL_RenderCopyEx(get->render,Bird_Img[0], nullptr,&get->Bird,get->radian, nullptr,SDL_FLIP_NONE);
        if(get->Hit==0)
        {
            SDL_SetRenderDrawColor(get->render,255,255,255,0);
            SDL_RenderClear(get->render);
            SDL_RenderPresent(get->render);
            SDL_Delay(50);
            Mix_PlayChannel(-1, Audio[0], 0);
            get->Hit+=1;
        }
    }
}

void DAI_Bird::Bird_Move(Snow* get) {
    if(!get->Fly)
    {
        if(get->Speed_Down==300)
            get->Speed_Down=0;
        if(get->Speed_Down>6)
            get->Bird.y+=get->Step_Down;
        get->Speed_Down++;
        if(get->Step_Down<3&&get->Speed_Down%10==0)
            get->Step_Down++;
        if(get->Step_Down>=3&&get->Speed_Down%5==0)
            get->Step_Down++;
        if(get->Speed_Down>10&&get->radian<=0)
            get->radian++;
        if(get->Speed_Down>10&&get->radian>0&&get->radian<=30)
            get->radian+=3;
        if(get->Speed_Down>10&&get->radian>30&&get->radian<=90)
            get->radian+=7;
    }
    else if(get->Fly)
    {
        if(get->radian>=-30&&get->radian<=0)
            get->radian-=3;
        if(get->radian>0)
            get->radian-=9;
        get->Bird.y-=get->Step_Up;
        get->Limit_Up+=get->Step_Up;
        if(get->Limit_Up==120)
            get->Fly=false;
    }
}

void DAI_Bird::Free() {
    for(auto &i : Bird_Img)
        SDL_DestroyTexture(i);
    Death->Free();
    SDL_DestroyTexture(Tap_Img);
}

void DAI_Bird::Key_Bird(Snow* get) {
    if(get->e.key.keysym.sym==get->Key&&get->Survival)
    {
        get->Press_to_Begin=false;
        get->Speed_Down=0;
        //Audio_Fly=true;
        get->Step_Down=1;
        get->Limit_Up=0;
        get->Fly =true;
        Mix_HaltChannel(1);
        if (get->choose_map=="play"&&get->Survival)
            Mix_PlayChannel(1, Audio[1], 0);
    }
}

void DAI_Bird::Begin(Snow *get) {
    get->Press_to_Begin=true;
    get->score=0;
    get->Hit=0;
    get->Survival=true;
    get->radian=0;
    get->Init();
    get->Last_HC=get->high_score[get->Level][get->Pipe_Hard];
    for(int i=0;i<4;i++)
    {
        get->Pipe_Start[i]= false;
        get->speed[i]=0;
    }
}

void DAI_Bird::Survival(Snow *get) {
    if(get->Bird.x==get->Pipe_Up[get->Pipe_Num].x+150)
    {
        //std::cout<<get->Pipe_Num<<std::endl;
        get->Pipe_Num++;
        if(get->Pipe_Num==4)
            get->Pipe_Num=0;
    }
    if(get->Bird.y<=91||get->Bird.y>=663)
    {
        get->Survival=false;
    }
    if((get->Bird.x>=get->Pipe_Down[get->Pipe_Num].x&&get->Bird.x<=get->Pipe_Down[get->Pipe_Num].x+104&&
            get->Bird.y>=get->Pipe_Down[get->Pipe_Num].y&&get->Bird.y<=get->Pipe_Down[get->Pipe_Num].y+820)||
       (get->Bird.x+53>=get->Pipe_Down[get->Pipe_Num].x&&get->Bird.x+53<=get->Pipe_Down[get->Pipe_Num].x+104&&
               get->Bird.y>=get->Pipe_Down[get->Pipe_Num].y&&get->Bird.y<=get->Pipe_Down[get->Pipe_Num].y+823)||
       (get->Bird.x+40>=get->Pipe_Down[get->Pipe_Num].x&&get->Bird.x+40<=get->Pipe_Down[get->Pipe_Num].x+104&&
               get->Bird.y>=get->Pipe_Down[get->Pipe_Num].y&&get->Bird.y<=get->Pipe_Down[get->Pipe_Num].y+827)||
       (get->Bird.x+22>=get->Pipe_Down[get->Pipe_Num].x&&get->Bird.x+22<=get->Pipe_Down[get->Pipe_Num].x+104&&
               get->Bird.y>=get->Pipe_Down[get->Pipe_Num].y&&get->Bird.y<=get->Pipe_Down[get->Pipe_Num].y+823))
    {
        get->Survival=false;
    }

    if((get->Bird.x>=get->Pipe_Up[get->Pipe_Num].x&&get->Bird.x<=get->Pipe_Up[get->Pipe_Num].x+104&&
            get->Bird.y+44>=get->Pipe_Up[get->Pipe_Num].y&&get->Bird.y+44<=get->Pipe_Up[get->Pipe_Num].y+810)||
       (get->Bird.x+53>=get->Pipe_Up[get->Pipe_Num].x&&get->Bird.x+53<=get->Pipe_Up[get->Pipe_Num].x+104&&
               get->Bird.y+44>=get->Pipe_Up[get->Pipe_Num].y&&get->Bird.y+44<=get->Pipe_Up[get->Pipe_Num].y+826))
    {
        get->Survival=false;
    }
}
//
// Created by snow on 01/04/2021.
//

#include "Pipe.h"


DAI_Pipe::DAI_Pipe() {
    srand(time(nullptr));
}
DAI_Pipe::~DAI_Pipe() =default;

void DAI_Pipe::Init(Snow* get) {
    Pibe_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/Pipe1.png");
    Pibe_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/Pipe2.png");
}

void DAI_Pipe::Free() {
    SDL_DestroyTexture(Pibe_Img[0]);
    SDL_DestroyTexture(Pibe_Img[1]);
}

void DAI_Pipe::Draw(Snow* get) {
    if(!get->Press_to_Begin&&get->Survival)
        Pipe_Super_Move(get);
    for(int i=0; i<4;i++)
    {
        SDL_RenderCopy(get->render,Pibe_Img[0], nullptr,&get->Pipe_Up[i]);
        SDL_RenderCopy(get->render,Pibe_Img[1], nullptr,&get->Pipe_Down[i]);
    }
}


void DAI_Pipe::Pipe_Move(Snow* get) {
    for(int i=0;i<4;i++)
    {
        get->Pipe_Up[i].x-=2;
        if(get->Pipe_Up[i].x<=-200)
        {
            up[i] = rand()%2+1;
            get->Pipe_Start[i]=true;
            get->Pipe_Up[i].x=1000;
            get->Pipe_Up[i].y=rand()%(253+get->Level) +(407-get->Level);
            get->Pipe_Down[i].y=get->Pipe_Up[i].y-1087+get->Level;
        }
        //std::cout<<get->Pipe_Up[get->Pipe_Num].y<<std::endl;
        get->Pipe_Down[i].x=get->Pipe_Up[i].x;

    }
}

void DAI_Pipe::Pipe_Super_Move(Snow *get) {
    Pipe_Move(get);
    for(int i=0;i<4;i++)
    {
        //std::cout<<get->Pipe_Hard<<"  ";
        if(get->Pipe_Start[i]&&get->Pipe_Hard!=0)
        {
            if(up[i]==1)
            {
                get->speed[i]++;
                if(get->speed[i]==get->Pipe_Hard)
                {
                    get->Pipe_Up[i].y--;
                    get->speed[i]=0;
                }
                if(get->Pipe_Up[i].y<(407-get->Level))
                    up[i]=2;
            }
            if(up[i]==2)
            {
                get->speed[i]++;
                if(get->speed[i]==get->Pipe_Hard)
                {
                    get->Pipe_Up[i].y++;
                    get->speed[i]=0;
                }
                if(get->Pipe_Up[i].y>((253+get->Level) +(407-get->Level)))
                    up[i]=1;
            }
            get->Pipe_Down[i].y=get->Pipe_Up[i].y-1087+get->Level;
        }

    }
    //std::cout<<std::endl;
}
//
// Created by snow on 06/04/2021.
//

#include "Death.h"

int Time=0, Time_all;
int Point1, Point2, Death_Time;

static bool Animation= false, Done;


DAI_Death::DAI_Death() {
    Score = new DAI_Score();
    score[0]={618,312,24,36};
    score[1]={645,312,24,36};
    highscore[0]={618,391,24,36};
    highscore[1]={645,391,24,36};
    Death={287,801,425,214};
    GameOver={250,113,500,110};
    Medal={337,330,83,83};
    New={561,367,42,18};
    Ani={270,270,200,200};
    PlayAgain={396,500,208,116};
    Audio=Mix_LoadWAV("Resource/Audio/sfx_swooshing.wav");
}
DAI_Death::~DAI_Death() {
    delete Score;
}

void DAI_Death::Init(Snow *get) {
    Death_Img=IMG_LoadTexture(get->render,"Resource/Asset/Score.png");
    GameOver_Img=IMG_LoadTexture(get->render,"Resource/Asset/GameOver1.png");
    Medal_Img = IMG_LoadTexture(get->render,"Resource/Asset/medal.png");
    New_Img=IMG_LoadTexture(get->render,"Resource/Asset/New.png");
    Ani_Img[0]=IMG_LoadTexture(get->render,"Resource/Asset/A1.png");
    Ani_Img[1]=IMG_LoadTexture(get->render,"Resource/Asset/A2.png");
    Ani_Img[2]=IMG_LoadTexture(get->render,"Resource/Asset/A3.png");
    Ani_Img[3]=IMG_LoadTexture(get->render,"Resource/Asset/A4.png");
    PlayAgain_Img[0]=IMG_LoadTexture(get->render,"Resource/Start/Play3.png");
    PlayAgain_Img[1]=IMG_LoadTexture(get->render,"Resource/Start/Play2.png");
    Score->Init(get);
}

void DAI_Death::Free() {
    SDL_DestroyTexture(Death_Img);
    SDL_DestroyTexture(GameOver_Img);
    SDL_DestroyTexture(Medal_Img);
    SDL_DestroyTexture(New_Img);
    for(auto & i : Ani_Img)
        SDL_DestroyTexture(i);
    Score->Free();
}

void DAI_Death::Draw(Snow *get) {
    Time_all++;
    if(Time_all==301)
        Time_all=0;
    if(Time==3)
        Time=0;
    if(Time_all%20==0)
        Time++;

    if(get->Hit==1)
    {
        up= true;
        get->Hit++;
        Get_Point= false;
        Done= false;
        GameOver.y=113;
        Death.y=801;
        Animation= false;
    }
    GameOver_Move(get);
    SDL_RenderCopy(get->render,GameOver_Img, nullptr,&GameOver);
    SDL_RenderCopy(get->render,Death_Img, nullptr,&Death);
    if(Get_Point)
    {
        Render_Point(get);
        if(get->mouse_x>=396&&get->mouse_x<=604
           &&get->mouse_y>=500&&get->mouse_y<=616)
            SDL_RenderCopy(get->render,PlayAgain_Img[1], nullptr,&PlayAgain);
        else
            SDL_RenderCopy(get->render,PlayAgain_Img[0], nullptr,&PlayAgain);
    }

}

void DAI_Death::GameOver_Move(Snow* get) {
    if(up)
    {
        GameOver.y-=1;
        max+=2;
    }
    else
    {
        if(max>0)
        {
            max-=2;
            GameOver.y+=1;
            if(max==0)
                Death_Up=true;
        }
    }
    if(max==40)
    {
        up=false;
    }
    if(Death_Up)
    {

        if (!Mix_Playing(-1))
            Mix_PlayChannel(-1, Audio, 0);
        Death.y-=10;
        if(Death.y==251)
        {
            Point1=0;
            Point2=0;
            Death_Time=0;
            Death_Up=false;
            Get_Point=true;
            Done=false;


        }
    }
}

void DAI_Death::Render_Point(Snow *get) {

    if(get->score>get->Last_HC)
    {
        Draw_Animation(get);

    }
    if(Point1<get->score)
    {
        Death_Time++;
        if(Death_Time%5==0)
        {
            Point1++;
        }
    }
    else if(Point1>=get->score)
        Done=true;
    if(Done && Point2<get->high_score[get->Level][get->Pipe_Hard])
    {
        Death_Time++;
        if(Death_Time%5==0)
        {
            Point2++;
        }
    }
    Score->Draw(get,score,Point1);
    if(Done)
        Score->Draw(get,highscore,Point2);

}

void DAI_Death::Draw_Animation(Snow *get) {
    SDL_RenderCopy(get->render,Medal_Img, nullptr,&Medal);
    SDL_RenderCopy(get->render,Ani_Img[Time], nullptr,&Ani);
    SDL_RenderCopy(get->render,New_Img, nullptr,&New);
}


//
// Created by snow on 31/03/2021.
//

#include "Score.h"


DAI_Score::DAI_Score() {

    Loading={0,0,1000,800};
    Base={149,227,800,200};
    Score_Base[0]={500,15,44,50};
    Score_Base[1]={546,15,44,50};
    Audio=Mix_LoadWAV("Resource/Audio/sfx_point.wav");
}

DAI_Score::~DAI_Score() {}

void DAI_Score::Get_HC(Snow* get) {
    std::ifstream file("Resource/data/score.txt");
    file>>get->Level;
    file>>get->Pipe_Hard;
    for(int i=0; i<68;i++)
    {
        for(int j=0;j<3;j++)
        {
            file>>get->high_score[i][j];
        }
    }
    if(get->high_score[get->Level][get->Pipe_Hard]>high_score)
        get->HC_change=true;
    high_score=get->high_score[get->Level][get->Pipe_Hard];
    file.close();
    get->HC="HIGH SCORE: "+std::to_string(get->high_score[get->Level][get->Pipe_Hard]);
}

void DAI_Score::Save_Score(Snow *get) {
    if(get->score>get->high_score[get->Level][get->Pipe_Hard])
    {
        get->high_score[get->Level][get->Pipe_Hard]=get->score;
        std::ofstream file("Resource/data/score.txt");
        file<<get->Level<<" "<<get->Pipe_Hard<<"\n";
        for(int i=0; i<68;i++)
        {
            for(int j=0;j<3;j++)
                file<<get->high_score[i][j]<<" ";
            file<<"\n";
        }
        //std::cout<<get->high_score[get->Level]<<std::endl;

        file.close();
    }
    if(get->choose_map=="setting")
    {
        std::ofstream file("Resource/data/score.txt");
        file<<get->Level<<" "<<get->Pipe_Hard<<"\n";
        for(int i=0; i<68;i++)
        {
            for(int j=0;j<3;j++)
                file<<get->high_score[i][j]<<" ";
            file<<"\n";
        }
        file.close();
    }

}
void DAI_Score::Init_Loading(Snow *get) {
    Loading_Img=IMG_LoadTexture(get->render,"Resource/Asset/Loading2.png");
}

void DAI_Score::Free_Loading() {
    SDL_DestroyTexture(Loading_Img);
}
void DAI_Score::Loading_Game(Snow* get) {

    for(int i=1; i<101;i++)
    {
        if(i==1)
        {
            Base.x=149;
        }
        SDL_Delay(10);

        SDL_RenderClear(get->render);

        SDL_SetRenderDrawColor(get->render,0,0,0,1);
        SDL_RenderCopy(get->render,Loading_Img, nullptr,&Loading);
        SDL_RenderFillRect(get->render,&Base);
        Base.x+=8;

        SDL_RenderPresent(get->render);

    }
    SDL_PumpEvents();                       //Gộp Tất cả Event lại
    SDL_FlushEvent(SDL_KEYDOWN);        // Xóa Event xảy ra khi loading

///
}


void DAI_Score::Init(Snow *get) {
    for(int i=0; i<10;i++)
    {
        std::string locate="Resource/Asset/"+std::to_string(i)+".png";
        Score_Img[i]=IMG_LoadTexture(get->render,locate.c_str());
    }

}

void DAI_Score::Free() {
    for(int i=0; i<10;i++)
        SDL_DestroyTexture(Score_Img[i]);
}

void DAI_Score::Score_Play(Snow *get) {
    Save_Score(get);
    if((get->Bird.x==get->Pipe_Up[get->Pipe_Num].x)&&get->Survival)
    {
        if(get->score>=0)
            Mix_PlayChannel(2, Audio, 0);
        get->score++;
    }
}

void DAI_Score::Draw(Snow *get, SDL_Rect* SB, int SC) {
    if(SC<10)
    {
        SDL_RenderCopy(get->render,Score_Img[SC], nullptr,&SB[1]);
    }
    else
    {
        int b=SC%10;
        int a=SC/10;
        SDL_RenderCopy(get->render,Score_Img[a], nullptr,&SB[0]);
        SDL_RenderCopy(get->render,Score_Img[b], nullptr,&SB[1]);
    }

}
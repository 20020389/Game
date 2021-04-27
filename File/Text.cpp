//
// Created by snow on 30/03/2021.
//

#include "Text.h"


DAI_Text::DAI_Text() {
    if(!TTF_WasInit())
        TTF_Init();
    BL={0,0,0};
    font=TTF_OpenFont("Resource/Font/Game.ttf",25);
    font2=TTF_OpenFont("Resource/Font/Game.ttf",30);
    Text.resize(10);
    Score = new DAI_Score();
    HC_Base={400,550,0,0};

}

DAI_Text::~DAI_Text() {
    //std::cout<<"call quit text"<<"\n";
    delete Score;
}


void DAI_Text::Init(Snow*get,std::vector<std::string> Music) {
    for(int i=1; i<9;i++)
    {
        Text[i]={130,15,90,50};
        TTF_SizeText(font,Music[i].c_str(),&Text[i].w,&Text[i].h);
    }


}

SDL_Texture * DAI_Text::Get_HC(Snow *get) {

    Sur1=TTF_RenderUTF8_Blended(font2,get->HC.c_str(),BL);
    Tex1= SDL_CreateTextureFromSurface(get->render,Sur1);
    SDL_FreeSurface(Sur1);
    return Tex1;
}

SDL_Texture* DAI_Text::Get_Name(Snow *get, std::string Music) {
    Sur=TTF_RenderUTF8_Blended(font,Music.c_str(),BL);
    Tex= SDL_CreateTextureFromSurface(get->render,Sur);
    SDL_FreeSurface(Sur);
    return Tex;
}

void DAI_Text::Draw(Snow *get,std::vector<std::string> Music) {
    SDL_Texture* Texture1=Get_Name(get,Music[get->Choose_MS]);
    SDL_RenderCopy(get->render,Texture1, nullptr,&Text[get->Choose_MS]);
    SDL_DestroyTexture(Texture1);

}

void DAI_Text::Draw_Score(Snow *get) {
    Score->Get_HC(get);
    //Score->Save_Score(get);
    if(get->HC_change)
    {
        TTF_SizeText(font2,get->HC.c_str(),&HC_Base.w,&HC_Base.h);
        get->HC_change= false;

    }
    SDL_Texture* Texture2=Get_HC(get);
    SDL_RenderCopy(get->render,Texture2, nullptr,&HC_Base);
    SDL_DestroyTexture(Texture2);
}
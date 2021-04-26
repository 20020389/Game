//
// Created by snow on 4/25/21.
//

#include "SaveKey.h"

DAI_SaveKey::DAI_SaveKey() {
    Font=TTF_OpenFont("Resource/Font/Game.ttf",30);
    Key_Rect[0]={430,510,140,58};
    Key_Rect[1]={430,510,0,0};
    BL={0,0,0};
}

DAI_SaveKey::~DAI_SaveKey() {}

void DAI_SaveKey::Get_Key(Snow *get) {
    fileopen.open("Resource/data/SaveKey.txt");
    fileopen>>temp;
    get->Key=(SDL_KeyCode)temp;
    fileopen.close();
    if(temp>=97&&temp<=122) {
        get->Name_Key.clear();
        get->Name_Key.push_back((char)(temp-32));
    }
    if((int)get->Key==32)
        get->Name_Key="SPACE";
    if(temp==1073741906)
        get->Name_Key="UP";
    if(temp==1073741905)
        get->Name_Key="DOWN";
    if(temp==1073741903)
        get->Name_Key="RIGHT";
    if(temp==1073741904)
        get->Name_Key="LEFT";

}

void DAI_SaveKey::Save_Key(Snow *get) {
    if((int)get->Key>=97&&(int)get->Key<=122) {
        temp=(int)get->Key;
    }
    if((int)get->Key==32)
        temp=(int)get->Key;
    if((int)get->Key==1073741906)
        temp=(int)get->Key;
    if((int)get->Key==1073741905)
        temp=(int)get->Key;
    if((int)get->Key==1073741903)
        temp=(int)get->Key;
    if((int)get->Key==1073741904)
        temp=(int)get->Key;
    filesave.open("Resource/data/SaveKey.txt");
    filesave<<temp;
    filesave.close();
}

void DAI_SaveKey::Init(Snow *get) {
    TTF_SizeText(Font,get->Name_Key.c_str(),&Key_Rect[1].w,&Key_Rect[1].h);
    Key_Rect[1].x=Key_Rect[0].x+Key_Rect[0].w/2-Key_Rect[1].w/2;
    Key_Sur=TTF_RenderUTF8_Blended(Font,get->Name_Key.c_str(),BL);
    Key_tex=SDL_CreateTextureFromSurface(get->render,Key_Sur);
    SDL_FreeSurface(Key_Sur);
}

void DAI_SaveKey::Draw(Snow *get) {
    Change_Key(get);
    Init(get);
    if(get->mouse_x>=430&&get->mouse_x<=570&&
          get->mouse_y>=500&&get->mouse_y<=558)
    {
        Key_Rect[1].y=513;
        SDL_RenderCopy(get->render,Key_tex, nullptr,&Key_Rect[1]);
    }
    else
    {
        Key_Rect[1].y=510;
        SDL_RenderCopy(get->render,Key_tex, nullptr,&Key_Rect[1]);
    }
    SDL_DestroyTexture(Key_tex);
}

void DAI_SaveKey::Time_Click(Snow *get) {
    if(get->Ranger_Click)
    {
        get->Time_Click++;
        if(get->Time_Click==30)
            get->Ranger_Click= false;
    }
}

void DAI_SaveKey::Change_Key(Snow *get) {
    Time_Click(get);
    if(get->Key_Change)
    {
        get->Name_Key="...";
    }
}
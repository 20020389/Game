//
// Created by snow on 4/27/21.
//

#include "User.h"

DAI_User::DAI_User() {

    Font=TTF_OpenFont("Resource/Font/Game.ttf",30);
    BL={0,0,0};
}

DAI_User::~DAI_User() {}


void DAI_User::Draw(Snow *get) {
    if(!get->user_changing)
        get->ghost_user=get->user_using+"  </>";
    TTF_SizeText(Font,get->ghost_user.c_str(),&get->user_draw.w,&get->user_draw.h);
    get->user_draw.x=500-get->user_draw.w/2;
    user_sur=TTF_RenderUTF8_Blended(Font,get->ghost_user.c_str(),BL);
    user_tex=SDL_CreateTextureFromSurface(get->render,user_sur);
    SDL_FreeSurface(user_sur);
    if(get->user_changing)
        Changing_user(get);
    SDL_RenderCopy(get->render,user_tex, nullptr,&get->user_draw);
    SDL_DestroyTexture(user_tex);

}


void DAI_User::get_user(Snow* get) {
    file_get.open("Resource/data/user/user.txt");
    getline(file_get,get->user_using);
    file_get.close();
}


void DAI_User::Changing_user(Snow *get) {
    Time++;
    if(Time<50)
        get->ghost_user=get->user_using+"|";
    if(Time>=50)
        get->ghost_user=get->user_using+" ";
    if(Time==100)
        Time=0;
}
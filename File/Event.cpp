//
// Created by snow on 30/03/2021.
//

#include "Event.h"

char name_key;
DAI_Event::DAI_Event() {
    Bird_Key=new DAI_Bird();
    Save_Score=new DAI_Score();
}

DAI_Event::~DAI_Event() {
    delete Bird_Key;
    delete Save_Score;
}

void DAI_Event::Update(Snow* get) {
    while(SDL_PollEvent(&get->e)) {
        if(get->e.type==SDL_QUIT)
            get->running=false;
        Key(get);
        Mouse(get);
    }


}

void DAI_Event::Key(Snow* get) {
    //event khi gõ phím
    if(get->e.type==SDL_KEYDOWN){
        if(get->e.key.keysym.sym==SDLK_ESCAPE&&!get->About) {
            if(get->choose_map!="home")
            {
                Save_Score->Save_Score(get);
                get->limit_init=true;
                Bird_Key->Begin(get);
                get->choose_map="home";
                get->Key_Change= false;
            }
        }
        if(get->e.key.keysym.sym==SDLK_ESCAPE&&get->About)
            get->About= false;
        if(get->e.key.keysym.sym==SDLK_F3)
        {
            get->time_ChangeVL=0;
            get->Change_Vl=true;
            get->volume+=5;
            if(get->volume>=100)
                get->volume=100;
            //std::cout<<get->volume<<std::endl;
        }
        if(get->e.key.keysym.sym==SDLK_F2)
        {
            get->time_ChangeVL=0;
            get->Change_Vl=true;
            get->volume-=5;
            if(get->volume<=0)
                get->volume=0;
            //std::cout<<get->volume<<std::endl;
        }
        if(get->choose_map=="play")
            Bird_Key->Key_Bird(get);
        if(get->choose_map=="play"&&!get->Survival)
        {
            if(get->e.key.keysym.sym==SDLK_SPACE)
                Bird_Key->Begin(get);
        }
        if(get->choose_map=="setting"&&!get->About&&get->Key_Change)
        {
            key_Change(get);
        }
    }
}

void DAI_Event::Mouse(Snow* get) {
    if(get->e.type==SDL_MOUSEBUTTONUP)
    {
        if(get->choose_map=="setting")
            get->Lv_Move= false;
    }
    if(get->e.type==SDL_MOUSEBUTTONDOWN) {
        if(get->choose_map == "home")
        {
            if (get->mouse_x >= 396 && get->mouse_x <= 604
                && get->mouse_y >= 342 && get->mouse_y <= 458) {
                get->choose_map = "play";
                get->limit_init = true;
                get->Last_HC=get->high_score[get->Level][get->Pipe_Hard];
            }
            if(get->mouse_x>=10&& get->mouse_x<=150&&
                    get->mouse_y>=50&& get->mouse_y<=108)
            {
                get->choose_map="setting";
                get->limit_init = true;
            }
        }
        if(get->choose_map=="play"&&!get->Survival)
        {
            if(get->mouse_x>=396&&get->mouse_x<=604
               &&get->mouse_y>=500&&get->mouse_y<=616)
                Bird_Key->Begin(get);
        }
        if(get->choose_map=="setting"&& !get->About)
        {
            if(get->mouse_x>=get->Bird.x&&get->mouse_x<=get->Bird.x+get->Bird.w&&
               get->mouse_y>=get->Bird.y&&get->mouse_y<=get->Bird.y+get->Bird.h)
            {
                get->Lv_Move=true;
                get->Limit_LV_Move=get->mouse_x-get->Bird.x;
            }
            //change key:
            if(get->mouse_x>=430&&get->mouse_x<=570&&
               get->mouse_y>=500&&get->mouse_y<=558)
            {
                if(!get->Ranger_Click)
                {
                    get->Time_Click=1;
                    get->Ranger_Click=true;
                }
                else
                {
                    get->Key_Change =true;
                    get->Ranger_Click= false;
                }
            }
            //-------------------------------
            if(get->mouse_x>=430&&get->mouse_x<=570&&
               get->mouse_y>=600&&get->mouse_y<=658)
                get->About=true;
            if(get->mouse_x>=180&&get->mouse_x<=320&&
               get->mouse_y>=350&&get->mouse_y<=408)
                get->Pipe_Hard=0;
            if(get->mouse_x>=680&&get->mouse_x<=820&&
               get->mouse_y>=350&&get->mouse_y<=408)
                get->Pipe_Hard=1;
            if(get->mouse_x>=430&&get->mouse_x<=570&&
               get->mouse_y>=350&&get->mouse_y<=408)
                get->Pipe_Hard=2;
        }
        if(get->choose_map!="setting")
        {
            //Map:
            if (get->mouse_x >= 890 && get->mouse_x <= 994
                && get->mouse_y >= 15 && get->mouse_y <= 73) {
                if (get->BG == "light")
                    get->BG = "dark";
                else if (get->BG == "dark")
                    get->BG = "light";
            }
            //Music:
            if (get->mouse_x > 50 && get->mouse_x <= 85 &&
                get->mouse_y >= 10 && get->mouse_y <= 45)   //
            {
                if (get->Music_Play) {
                    Mix_PauseMusic();
                    get->Music_Play = false;
                    //std::cout<<"Stop"<<std::endl;

                }
                else if (!get->Music_Play) {
                    Mix_ResumeMusic();
                    get->Music_Play = true;
                    //std::cout<<"Play"<<std::endl;


                }

            }

            if(get->mouse_x>=20&&get->mouse_x<=45&&
               get->mouse_y>=10&&get->mouse_y<=45)  //
            {
                get->End_Ms= false;
                get->Choose_MS-=1;
                if(get->Choose_MS<=0)
                    get->Choose_MS=8;
                Mix_HaltMusic();
                //cout<<endl<<Choose_music<<endl;
            }
            if(get->mouse_x>90&&get->mouse_x<=115&&
               get->mouse_y>=10&&get->mouse_y<=45)   //
            {
                get->End_Ms= false;
                get->Choose_MS++;
                if(get->Choose_MS>=9)
                    get->Choose_MS=1;
                Mix_HaltMusic();
                //cout<<endl<<Choose_music<<endl;
            }
        }
    }
}

void DAI_Event::key_Change(Snow *get) {
    if((SDL_KeyCode)get->e.key.keysym.sym>=97&&(SDL_KeyCode)get->e.key.keysym.sym<=122)
    {
        get->Key=(SDL_KeyCode)get->e.key.keysym.sym;
        name_key=(char)((int)get->Key-32);
        get->Name_Key.clear();
        get->Name_Key.push_back(name_key);
        get->Key_Change= false;
        get->Time_Click=0;
    }
    if(get->e.key.keysym.sym==SDLK_UP)
    {
        get->Key=(SDL_KeyCode)get->e.key.keysym.sym;
        get->Name_Key="UP";
        get->Key_Change= false;
        get->Time_Click=0;
    }
    if(get->e.key.keysym.sym==SDLK_DOWN)
    {
        get->Key=(SDL_KeyCode)get->e.key.keysym.sym;
        get->Name_Key="DOWN";
        get->Key_Change= false;
        get->Time_Click=0;
    }
    if(get->e.key.keysym.sym==SDLK_RIGHT)
    {
        get->Key=(SDL_KeyCode)get->e.key.keysym.sym;
        get->Name_Key="RIGHT";
        get->Key_Change= false;
        get->Time_Click=0;
    }
    if(get->e.key.keysym.sym==SDLK_LEFT)
    {
        get->Key=(SDL_KeyCode)get->e.key.keysym.sym;
        get->Name_Key="LEFT";
        get->Key_Change= false;
        get->Time_Click=0;
    }
    if(get->e.key.keysym.sym==SDLK_SPACE)
    {
        get->Key=(SDL_KeyCode)get->e.key.keysym.sym;
        get->Name_Key="SPACE";
        get->Key_Change= false;
        get->Time_Click=0;
    }
}
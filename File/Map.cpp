#include "Map.h"


DAI_Map::DAI_Map()
{
    Home= new DAI_Home();
    GamePlay= new DAI_GamePlay();
    Setting= new DAI_Setting();
    SaveKey= new DAI_SaveKey();
}
DAI_Map::~DAI_Map()
{
    delete Home;
    delete GamePlay;
    delete Setting;
    delete SaveKey;
}

void DAI_Map::Init(Snow *get){
    static int i=0;
    Mix_VolumeMusic(get->volume*(128.0/100.0));
    Mix_Volume(-1,get->volume*(128.0/100.0));
    if(get->limit_init&&get->choose_map=="home")
    {
        Home->Init_Home(get);
        //std::cout<<"Init Home"<<std::endl;
        if(i==1){
            GamePlay->Free(get);
            i=0;
        }
        if(i==2)
        {
            SaveKey->Save_Key(get);
            Setting->Free();
            i=0;
        }
        SaveKey->Get_Key(get);
        get->limit_init= false;
    }
    if(get->limit_init&&get->choose_map=="play")
    {
        Home->Free();
        GamePlay->Init(get);
        //std::cout<<"Init Play"<<std::endl;
        i=1;
        get->limit_init= false;
    }
    if(get->limit_init&&get->choose_map=="setting")
    {
        Home->Free();
        Setting->Init(get);
        //std::cout<<"Init Setting"<<std::endl;
        i=2;
        get->limit_init= false;
    }

}

void DAI_Map::Draw(Snow *get) {
    Init(get);
    Home->Play_Music(get);
    if(get->choose_map=="home")
        Home->Draw_Home(get);
    if(get->choose_map=="play")
        GamePlay->Draw_GamePlay(get);
    if(get->choose_map=="setting")
        Setting->Draw(get);
}

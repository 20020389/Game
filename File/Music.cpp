//
// Created by snow on 30/03/2021.
//

#include "Music.h"


DAI_Music::DAI_Music() {
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    Name_Music();
    MUSIC.resize(number);
    Load_Music();
    Text= new DAI_Text();

}

DAI_Music::~DAI_Music() {
    delete Text;
}

void DAI_Music::Init_HC(Snow *get) {
    Text->Init(get,Music);

}

void DAI_Music::Name_Music()
{
    std::ifstream file("Resource/data/Music.txt");

    file>>number;
    Music.resize(number);
    for(int i=0;i<number;i++)
    {
        getline(file,Music[i]);
    }
    file.close();
}

void DAI_Music::Load_Music()
{
    std::string location="Resource/Audio/";
    std::string MP3=".mp3";
    for(int i=1;i<number;i++)
    {
        MUSIC[i]=Mix_LoadMUS((location+Music[i]+MP3).c_str());
    }

}


void DAI_Music::Play_Music(Snow* get)
{
    if(get->Music_Play)
    {
        if(!Mix_PlayingMusic())
        {
            if(get->End_Ms)
            {
                get->Choose_MS++;
                if(get->Choose_MS==9)
                    get->Choose_MS=1;
                Mix_PlayMusic(MUSIC[get->Choose_MS], 0);
            }
            else
                Mix_PlayMusic(MUSIC[get->Choose_MS], 0);
            get->End_Ms=true;
            //std::cout<<Get->Choose_MS<<std::endl;
        }

    }
}

void DAI_Music::Draw(Snow *get) {
    Text->Draw(get,Music);

}

void DAI_Music::Draw_Score(Snow *get) {
    Text->Draw_Score(get);
}


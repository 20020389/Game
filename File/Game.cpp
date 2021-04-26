//
// Created by snow on 30/03/2021.
//

#include "Game.h"


Game::Game()
{
    Win=SDL_CreateWindow("Plappy Bird", 450,
                         150,1000,800,SDL_WINDOW_OPENGL);
    get = new Snow();
    Map = new DAI_Map();
    Event = new DAI_Event();
    Volume= new DAI_Volume();

}

Game::~Game() {
    delete Volume;
    delete get;
    delete Map;
    delete Event;

}

void Game::Run()
{
    Init();
    Game_Run();
    Quit();
}


void Game::Init()
{
    Icon=SDL_LoadBMP("Resource/assets/Icon.bmp");
    SDL_SetWindowIcon(Win,Icon);
    get->render=SDL_CreateRenderer(Win,-1,SDL_RENDERER_ACCELERATED|
                                          SDL_RENDERER_PRESENTVSYNC);
    SDL_RenderSetLogicalSize(get->render,1000,800);
    SDL_FreeSurface(Icon);
    Volume->Init(get);


}


void Game::Render()
{
    SDL_RenderClear(get->render);

    Map->Draw(get);
    Volume->Draw(get);
    SDL_RenderPresent(get->render);
}

void Game::Game_Run()
{
    while (get->running)
    {
        SDL_Delay(10);
        SDL_GetMouseState(&get->mouse_x,&get->mouse_y);
        Event->Update(get);
        Render();
    }
}

void Game::Quit()
{
    Volume->Free();
    Mix_CloseAudio();
    TTF_Quit();
    SDL_DestroyWindow(Win);
    SDL_DestroyRenderer(get->render);
    SDL_Quit();
}
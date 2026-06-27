#include "game.h"

Game::Game()
{

}

Game::~Game()
{
    //dtor
}
void Game::game_loop()
{
    bool exit = false;
    SDL_Event ev;
    while(!exit)
    {
        while(SDL_PollEvent(&ev))
        {
        switch(ev.type)
        {
        case SDL_EVENT_QUIT:
            {
                exit = true;
                break;
            }
        }
        SDL_SetRenderDrawColor(technical.Getrenderer(), 240, 230, 204, 255);

        SDL_RenderClear(technical.Getrenderer());


        SDL_RenderPresent(technical.Getrenderer());
        }
    }
}
void Game::game_startup()
{
    technical.technical_init();
}
void Game::game_cleanup()
{
    technical.technical_cleanup();
}
void Game::start()
{
    game_startup();
    game_loop();
    game_cleanup();
}


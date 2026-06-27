#include "technical.h"
#include <iostream>
#include "init.h"
Technical::Technical()
{
    renderer = nullptr;
}

Technical::~Technical()
{
    technical_cleanup();
}
void Technical::renderer_init()
{
    renderer = SDL_CreateRenderer(window.Getptr(), 0);
    if(renderer==nullptr)
    {
        SDL_Log("Failed to init renderer! %s", SDL_GetError());
        exit(RENDERER);
    }
}
void Technical::technical_init()
{
    window.create();
    renderer_init();
}
void Technical::technical_cleanup()
{
    renderer_destroy();
    window.destroy();
}
void Technical::renderer_destroy()
{
    if(renderer!=nullptr)
        SDL_DestroyRenderer(renderer);
    renderer = nullptr;
}



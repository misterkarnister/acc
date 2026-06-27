#include "text.h"
#include "init.h"
#include <iostream>

Text::Text()
{
    ptr = nullptr;
    render_rect={0,0,0,0};
    the_font = fonts.at(0);
}

Text::~Text()
{
    destroy();
}
void fonts_init()
{
    for(Font f : fonts)
    {
        f.ptr = TTF_OpenFont(f.file_name, f.size);
        if(f.ptr==nullptr)
        {
            SDL_Log("Failed to open font %s : %s", f.file_name, SDL_GetError());
            exit(FONT);
        }

    }
}
void fonts_destroy()
{
    for(Font f : fonts)
    {
        if(f.ptr!=nullptr)
            TTF_CloseFont(f.ptr);
        f.ptr = nullptr;
    }
}

void Text::generate(const char* strr, Font f)
{
    destroy();
    SDL_Surface* surface = TTF_RenderText_Solid(f.ptr, strr, 0, f.color);
    if(surface==nullptr)
    {
        SDL_Log("Failed to generate text %s : %s", strr, SDL_GetError());
        exit(TEXT);
    }

    render_rect.w = surface->w;
    render_rect.h = surface->h;

    ptr = SDL_CreateTextureFromSurface(game.Gettechnical().Getrenderer(), surface);
    if(ptr==nullptr)
    {
        SDL_Log("Failed to create text texture %s : %s", strr, SDL_GetError());
        exit(TEXT);
    }

    the_font = f;

    SDL_DestroySurface(surface);
}
void Text::destroy()
{
    if(ptr!=nullptr)
        SDL_DestroyTexture(ptr);
    ptr = nullptr;
}

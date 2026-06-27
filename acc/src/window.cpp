#include "window.h"
#include <iostream>
#include "init.h"
Window::Window(SDL_Point dimm)
{
    ptr = nullptr;
    dim = dimm;
}

Window::~Window()
{
    destroy();
}
void Window::create()
{
    ptr = SDL_CreateWindow("ACC", dim.x, dim.y, 0);
    if(ptr==nullptr)
    {
        SDL_Log("Failed to init window! %s", SDL_GetError());
        exit(WINDOW);
    }
}

void Window::destroy()
{
    if(ptr!=nullptr)
        SDL_DestroyWindow(ptr);
    ptr = nullptr;
}

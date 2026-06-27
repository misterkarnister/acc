#ifndef WINDOW_H
#define WINDOW_H
#include <SDL3/SDL.h>

class Window
{
    public:
        Window(SDL_Point dimm={1280, 960});
        virtual ~Window();

        SDL_Window* Getptr() { return ptr; }
        void Setptr(SDL_Window* val) { ptr = val; }
        SDL_Point Getdim() { return dim; }
        void Setdim(SDL_Point val) { dim = val; }

        void create();
        void destroy();

    protected:

    private:
        SDL_Window* ptr;
        SDL_Point dim;
};

#endif // WINDOW_H

#ifndef TECHNICAL_H
#define TECHNICAL_H
#include "window.h"

class Technical
{
    public:
        Technical();
        virtual ~Technical();

        Window Getwindow() { return window; }
        void Setwindow(Window val) { window = val; }
        SDL_Renderer* Getrenderer() { return renderer; }
        void Setrenderer(SDL_Renderer* val) { renderer = val; }

        void technical_init();
        void renderer_init();

        void technical_cleanup();
        void renderer_destroy();

    protected:

    private:
        Window window;
        SDL_Renderer* renderer;
};

#endif // TECHNICAL_H

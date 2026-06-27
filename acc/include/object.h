#ifndef OBJECT_H
#define OBJECT_H
#include <SDL3/SDL.h>

class Object
{
    public:
        Object();
        virtual ~Object();
        Object(const Object& other);
        Object& operator=(const Object& other);

        SDL_FRect Getrender_square() { return render_square; }
        void Setrender_square(SDL_FRect val) { render_square = val; }

    protected:
        SDL_FRect render_square;
    private:

};

#endif // OBJECT_H

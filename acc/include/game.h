#ifndef GAME_H
#define GAME_H
#include "technical.h"

enum Error_kind
{
    WINDOW =        1,
    RENDERER =      2,
    TEXTURE =       3

};

class Game
{
    public:
        Game();
        virtual ~Game();

        Technical Gettechnical() { return technical; }
        void Settechnical(Technical val) { technical = val; }

        void game_loop();
        void game_startup();
        void game_cleanup();
        void start();

    protected:

    private:
        Technical technical;
};

#endif // GAME_H

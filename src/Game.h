#ifndef GAME_H
#define GAME_H

#include "GraphicEngine/Window.h"

class Game {
    
    public:
        Game();
        virtual ~Game();

        static Game* getInstance();

    private:
        static Game* instance;

        Window* window;
        
};

#endif
#ifndef GAME_H
#define GAME_H

#include "GraphicEngine/Window.h"
#include "GameState.h"

class Game {
    
    public:
        Game();
        virtual ~Game();

        static Game* getInstance();

        void init();
        void input();
        void update();
        void render();
        void cleanUp();

        //GETTERS
        Window* getWindow();

    private:
        static Game* instance;

        Window* window;
        GameState* game;
        State* state;
        
};

#endif
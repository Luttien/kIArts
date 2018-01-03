#ifndef GAME_H
#define GAME_H

#include "GraphicEngine/Window.h"
#include "GameState.h"
#include "IOEngine/UserInput.h"

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
        UserInput* getIo();

    private:
        static Game* instance;

        Window* window;
        GameState* game;
        State* state;
        UserInput* io;
        
};

#endif
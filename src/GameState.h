#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "State.h"
#include "CameraController.h"

class GameState : public State {
    
    public:
        GameState();
        virtual ~GameState();

        void init();
        void input();
        void update();
        void render();
        void cleanUp();

    private:
        CameraController *camera;
        
};

#endif
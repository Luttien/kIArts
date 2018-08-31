#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>

#include "State.h"
#include "CameraController.h"
#include "Racetrack.h"
#include "AI.h"
#include "PowerUp.h"

class GameState : public State {
    
    public:
        GameState();
        virtual ~GameState();

        void init();
        void input();
        void update();
        void render();
        void cleanUp();

        Racetrack* getRacetrack();

    private:
        CameraController* camera;
        Racetrack* racetrack;
        std::vector<AI*> ai;
};

#endif
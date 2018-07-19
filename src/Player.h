#ifndef PLAYER_H
#define PLAYER_H

#include "Controller.h"
#include "PlayerCar.h"

class Player : public Controller {
    
    public:
        Player();
        virtual ~Player();

        static Player* getInstance();
        PlayerCar* getCar();

    private:
        static Player* instance;
        PlayerCar* car;
};

#endif
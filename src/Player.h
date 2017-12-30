#ifndef PLAYER_H
#define PLAYER_H

#include "Controller.h"

class Player : public Controller {
    
    public:
        Player();
        virtual ~Player();

        static Player* getInstance();

    private:
        static Player* instance;     
};

#endif
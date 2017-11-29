#ifndef PLAYER_H
#define PLAYER_H

#include "Controller.h"

class Player : public Controller {
    
    public:
        Player();
        virtual ~Player();

        Player* getInstance();

    private:
        Player* instance;
        
};

#endif
#ifndef POWERUP_H
#define POWERUP_H

#include "GraphicEngine/Cube.h"

class PowerUp {
    
    public:
        PowerUp(bool newVisible);
        virtual ~PowerUp();

        virtual bool action() = 0;

        bool getActive();

    protected:
        Cube* model;
        bool active;
};

#endif
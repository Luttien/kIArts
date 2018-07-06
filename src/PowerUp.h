#ifndef POWERUP_H
#define POWERUP_H

#include "GraphicEngine/Cube.h"

class PowerUp {
    
    public:
        PowerUp();
        virtual ~PowerUp();

    private:
        Cube* model;
};

#endif
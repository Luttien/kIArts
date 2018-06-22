#ifndef POWERUP_H
#define POWERUP_H

#include "GraphicEngine/Model.h"

class PowerUp {
    
    public:
        PowerUp();
        virtual ~PowerUp();

    private:
        Model* model;
};

#endif
#ifndef POWERUP_H
#define POWERUP_H

#include "GraphicEngine/Cube.h"

class PowerUp {
    
    public:
        PowerUp(bool newVisible);
        virtual ~PowerUp();

        virtual bool action();

        void setVisible(bool newVisible);

        bool getActive();
        bool getVisible();
        Cube* getModel();

    protected:
        Cube* model;
        bool active;
};

#endif
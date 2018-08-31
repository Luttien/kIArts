#ifndef POWERUP_H
#define POWERUP_H

#include "GraphicEngine/Cube.h"
#include "MathEngine/Timer.h"

class PowerUp {
    
    public:
        PowerUp();
        PowerUp(Vector3<f32> newPosition);
        virtual ~PowerUp();

        void update();
        virtual bool action();
        void resetTimer();

        void setVisible(bool newVisible);

        bool getActive();
        bool getVisible();
        Cube* getModel();

    protected:
        Cube* model;
        Timer* timer;
        bool active;
};

#endif
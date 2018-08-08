#ifndef AICAR_H
#define AICAR_H

#include "Car.h"

class AICar : public Car {
    
    public:
        AICar(Sector* newActualSector);
        virtual ~AICar();

        void update();

        void setObjetive(Vector3<f32> newObjetive);

        Vector3<f32> getObjetive();

    private:
        void move();
        void turn();

        Vector3<f32> objetive;
};

#endif
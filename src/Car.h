#ifndef CAR_H
#define CAR_H

#include "GraphicEngine/Cube.h"
#include "Sector.h"

class Car {
    
    public:
        Car(Sector* newActualSector);
        virtual ~Car();

        void speedUp();
        void reverse();
        void turnLeft();
        void turnRigth();
        void brake();
        void straighten();

        Cube* getModel();
        Vector3<f32> getDirection();

    protected:
        virtual void move() = 0;
        virtual void turn() = 0;
        
        f32 speed;
        f32 turned;
        Cube *model;
        Vector3<f32> direction;

        Sector* actualSector;
};

#endif
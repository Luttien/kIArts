#ifndef CAR_H
#define CAR_H

#include "GraphicEngine/Cube.h"
#include "Enumeration.h"

class Car {
    
    public:
        Car();
        virtual ~Car();

        void speedUp();
        void reverse();
        void turnLeft();
        void turnRigth();
        void brake();
        void straighten();

        Cube* getModel();
        Vector3<f32> getDirection();

    private:
        void move();
        void turn();
        
        f32 speed;
        f32 turned;
        Cube *model;
        Vector3<f32> direction;
};

#endif
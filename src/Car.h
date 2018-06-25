#ifndef CAR_H
#define CAR_H

#include "GraphicEngine/Model.h"
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

        Model* getModel();

    private:
        void move();
        void turn();
        
        f32 speed;
        f32 turned;
        Model *model;
        Vector3<f32> direction;
};

#endif
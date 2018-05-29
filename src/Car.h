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
        void brake();

    private:
        void move();
        
        f32 speed;
        Model *model;
};

#endif
#ifndef CAR_H
#define CAR_H

#include "GraphicEngine/Model.h"

class Car {
    
    public:
        Car();
        virtual ~Car();

        void move();

    private:
        i32 speed;
        Model *model;
        
};

#endif
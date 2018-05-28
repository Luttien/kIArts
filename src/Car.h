#ifndef CAR_H
#define CAR_H

#include "GraphicEngine/Model.h"

class Car {
    
    public:
        Car();
        virtual ~Car();

        void move();

    private:
        int speed;
        Model *model;
        
};

#endif
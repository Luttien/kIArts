#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Car.h"

class Controller {
    
    public:
        Controller();
        virtual ~Controller();

        //GETTERS
        Car* getCar();

    private:
        Car *car;
};

#endif
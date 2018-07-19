#ifndef PLAYERCAR_H
#define PLAYERCAR_H

#include "Car.h"

class PlayerCar : public Car {
    
    public:
        PlayerCar(Sector* newActualSector);
        virtual ~PlayerCar();

    private:
        void move();
        void turn();
};

#endif
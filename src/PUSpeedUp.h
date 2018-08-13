#ifndef PUSPEEDUP_H
#define PUSPEEDUP_H

#include "PowerUp.h"
#include "Car.h"

class PUSpeedUp : public PowerUp {
    
    public:
        PUSpeedUp(Car* newCar);
        virtual ~PUSpeedUp();

        bool action();

    private:
        i32 speed;
        Car* car;
};

#endif
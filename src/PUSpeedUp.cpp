#include "PUSpeedUp.h"

PUSpeedUp::PUSpeedUp(Car* newCar) : PowerUp(false) {
    speed = 0;
    car = newCar;
}

PUSpeedUp::~PUSpeedUp() {

}

bool PUSpeedUp::action() {
    if (active == false) {
        active = true;
        speed = car -> getSpeed();
        return true;
    } else {
        car -> setSpeed(car -> getSpeed() + 1);
        if (speed + 5 > car -> getSpeed()) {
            car -> move();
            return true;
        } else {
            car -> move();
            return false;
        }
    }
}
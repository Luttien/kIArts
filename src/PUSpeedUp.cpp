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
        if (speed < car -> getSpeed() + 5) {
            return true;
        } else {
            return false;
        }
    }
}
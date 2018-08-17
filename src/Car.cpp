#include "Car.h"
#include "PUSpeedUp.h"

Car::Car(Sector* newActualSector) {
    speed = 0;
    turned = 0;
    actualSector = newActualSector;
    powerUp = NULL;
}

Car::~Car() {
    delete model;
    if (powerUp != NULL) {
        delete powerUp;
    }
}

void Car::speedUp() {
    if (powerUp != NULL && powerUp -> getActive() != false) {

    } else {
        if (speed < 10) {
            speed = speed + 0.5;
        }
        move();
    }
}

void Car::reverse() {
    if (speed > -5) {
        speed = speed - 0.5;
    }
    move();
}

void Car::turnLeft() {
    if (turned > -1) {
        turned = turned - 0.05;
    }
    turn();
}

void Car::turnRight() {
    if (turned < 1) {
        turned = turned + 0.05;
    }
    turn();
}

void Car::brake() {
    if (speed < 0) {
        speed = speed + 0.5;
        if (speed > 0) {
            speed = 0;
        }
        move();
    } else {
        if (speed > 0) {
            speed = speed - 0.5;
            if (speed < 0) {
                speed = 0;
            }
            move();
        }
    }
}

void Car::straighten() {
    if (turned < 0) {
        turned = turned + 0.05;
        if (turned > 0) {
            turned = 0;
        }
        move();
    } else {
        if (turned > 0) {
            turned = turned - 0.05;
            if (turned < 0) {
                turned = 0;
            }
            move();
        }
    }
}

void Car::takePowerUp(PowerUp* pUp) {
    if (powerUp == NULL) {
        if (model -> intersectsWith(pUp -> getModel())) {
            pUp -> setVisible(false);
            powerUp = new PUSpeedUp(this);
        }
    }
}

void Car::setActualSector(Sector* newActualSector) {
    actualSector = newActualSector;
}

void Car::setDirection(Vector3<f32> newDirection) {
    direction = newDirection;
}

void Car::setSpeed(i32 newSpeed) {
    speed = newSpeed;
}

Cube* Car::getModel() {
    return model;
}

Vector3<f32> Car::getDirection() {
    return direction;
}

Sector* Car::getActualSector() {
    return actualSector;
}

i32 Car::getSpeed() {
    return speed;
}

PowerUp* Car::getPowerUp() {
    return powerUp;
}
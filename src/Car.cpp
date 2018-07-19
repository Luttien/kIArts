#include "Car.h"

Car::Car(Sector* newActualSector) {
    speed = 0;
    turned = 0;
    actualSector = newActualSector;
}

Car::~Car() {
    delete model;
}

void Car::speedUp() {
    if (speed < 10) {
        speed = speed + 0.5;
    }
    move();
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

void Car::turnRigth() {
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

Cube* Car::getModel() {
    return model;
}

Vector3<f32> Car::getDirection() {
    return direction;
}
#include "Car.h"

Car::Car() {
    model = new Model(100);
    speed = 0;
}

Car::~Car() {
    delete model;
}

void Car::move() {
    f32 x = model -> getPosition().x;
    x = x + speed;
    model -> setPosition(Vector3<f32>(x, model -> getPosition().y, model -> getPosition().z));
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

void Car::brake() {
    if (speed < 0) {
        speed = speed + 0.5;
        if (speed > 0) {
            speed = 0;
        }
    } else {
        if (speed > 0) {
            speed = speed - 0.5;
            if (speed < 0) {
                speed = 0;
            }
        }
    }
    move();
}
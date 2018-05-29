#include "Car.h"

Car::Car() {
    model = new Model(100);
    speed = 0;
}

Car::~Car() {
    delete model;
}

void Car::move() {
    if (speed < 10) {
        speed++;
    }
    f32 x = model -> getPosition().x;
    x = x + speed;
    model -> setPosition(Vector3<f32>(x, model -> getPosition().y, model -> getPosition().z));
}
#include "Car.h"

Car::Car() {
    model = new Model(100);
}

Car::~Car() {
    delete model;
}

void Car::move() {
    f32 x = model -> getPosition().x;
    x = x + 10;
    model -> setPosition(irr::core::vector3df(x, model -> getPosition().y, model -> getPosition().z));
}
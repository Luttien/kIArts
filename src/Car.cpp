#include "Car.h"

Car::Car() {
    model = new Model(100);
    direction = model -> getDirectionalVector();
    speed = 0;
    turned = 0;
}

Car::~Car() {
    delete model;
}

void Car::move() {
    Vector3<f32> pos = model -> getPosition();
    Vector3<f32> newPos = pos + direction * speed;
    model -> setPosition(newPos);
    direction = model -> getDirectionalVector();
}

void Car::turn() {
    f32 y = model -> getRotation().y;
    y = y + turned;
    model -> setRotation(Vector3<f32>(model -> getRotation().x, y, model -> getRotation().z));
    direction = model -> getDirectionalVector();
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
    if (turned < 1) {
        turned = turned + 0.05;
    }
    turn();
}

void Car::turnRigth() {
    if (turned > -1) {
        turned = turned - 0.05;
    }
    turn();
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

void Car::straighten() {
    if (turned < 0) {
        turned = turned + 0.05;
        if (turned > 0) {
            turned = 0;
        }
    } else {
        if (turned > 0) {
            turned = turned - 0.05;
            if (turned < 0) {
                turned = 0;
            }
        }
    }
    move();
}

Model* Car::getModel() {
    return model;
}
#include "AICar.h"

AICar::AICar(Sector* newActualSector) : Car(newActualSector) {
    model = new Cube(100, newActualSector -> getStartDrivingLine());
    objetive = newActualSector -> getNextSector() -> getStartDrivingLine();
    direction = objetive - model -> getPosition();
    direction = direction.normalize();
}

AICar::~AICar() {
    delete model;
}

void AICar::move() {
    Vector3<f32> pos = model -> getPosition();
    Vector3<f32> newPos = pos + direction * speed;
    model -> setPosition(newPos);
}

void AICar::turn() {
    f32 y = model -> getRotation().y;
    y = y + turned;
    model -> setRotation(Vector3<f32>(model -> getRotation().x, y, model -> getRotation().z));
}

void AICar::update() {
    if (direction.x > model -> getDirectionalVector().x) {
        if (direction.x - model -> getDirectionalVector().x >= 0.0001) {
            turnRight();
        } else {
            straighten();
        }
    } else {
        if (model -> getDirectionalVector().x - direction.x >= 0.0001) {
            turnLeft();
        } else {
            straighten();
        }
    }
    speedUp();
}

void AICar::setObjetive(Vector3<f32> newObjetive) {
    objetive = newObjetive;
}

Vector3<f32> AICar::getObjetive() {
    return objetive;
}
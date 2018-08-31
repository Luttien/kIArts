#include "Sector.h"

Sector::Sector(Vector3<f32> newUpLeft, Vector3<f32> newDownLeft, Vector3<f32> newUpRight, Vector3<f32> newDownRight) {
    upLeft = newUpLeft;
    downLeft = newDownLeft;
    upRight = newUpRight;
    downRight = newDownRight;
    previousSector = NULL;
    nextSector = NULL;
}

Sector::~Sector() {
    delete previousSector;
    delete nextSector;
    for (i32 i = 0; i < powerUps.size(); i++) {
        delete powerUps[i];
    }
}

void Sector::createPowerUps() {
    Vector3<f32> vec = (upLeft + downLeft) / 2;
    PowerUp* pUp1 = new PowerUp(vec);
    powerUps.push_back(pUp1);
}

Sector* Sector::getPreviousSector() {
    return previousSector;
}

Sector* Sector::getNextSector() {
    return nextSector;
}

std::vector<PowerUp*> Sector::getPowerUps() {
    return powerUps;
}

Vector3<f32> Sector::getStartDrivingLine() {
    Vector3<f32> startDrivingLine = (upLeft + downLeft) / 2;
    return startDrivingLine;
}

Vector3<f32> Sector::getUpLeft() {
    return upLeft;
}

Vector3<f32> Sector::getDownLeft() {
    return downLeft;
}

Vector3<f32> Sector::getUpRight() {
    return upRight;
}

Vector3<f32> Sector::getDownRight() {
    return downRight;
}

void Sector::setPreviousSector(Sector* newPreviousSector) {
    previousSector = newPreviousSector;
}

void Sector::setNextSector(Sector* newNextSector) {
    nextSector = newNextSector;
}
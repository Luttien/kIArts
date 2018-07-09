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
}

Sector* Sector::getPreviousSector() {
    return previousSector;
}

Sector* Sector::getNextSector() {
    return nextSector;
}

Vector3<f32> Sector::getStartDrivingLine() {
    Vector3<f32> startDrivingLine = (upLeft + downLeft) / 2;
    return startDrivingLine;
}

void Sector::setPreviousSector(Sector* newPreviousSector) {
    previousSector = newPreviousSector;
}

void Sector::setNextSector(Sector* newNextSector) {
    nextSector = newNextSector;
}
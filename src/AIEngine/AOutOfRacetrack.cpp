#include "AOutOfRacetrack.h"

AOutOfRacetrack::AOutOfRacetrack() : Action() {

}

AOutOfRacetrack::~AOutOfRacetrack() {

}

Enumeration::behaviourState AOutOfRacetrack::update(AICar* car) {
    car -> setObjetive(car -> getActualSector() -> getNextSector() -> getStartDrivingLine());
    Vector3<f32> direction = car -> getObjetive() - car -> getModel() -> getPosition();
    car -> setDirection(direction.normalize());
    car -> update();
    return Enumeration::behaviourState::SUCCESS;
}
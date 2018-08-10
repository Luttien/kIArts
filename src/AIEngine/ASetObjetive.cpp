#include "ASetObjetive.h"

ASetObjetive::ASetObjetive() : Action() {

}

ASetObjetive::~ASetObjetive() {

}

Enumeration::behaviourState ASetObjetive::update(AICar* car) {
    std::cout<<"llega"<<std::endl;
    if (car -> getModel() -> getPosition().getDistanceTo(car -> getObjetive()) <= 500) {
        car -> setActualSector(car -> getActualSector() -> getNextSector());
        car -> setObjetive(car -> getActualSector() -> getNextSector() -> getStartDrivingLine());
    }
    Vector3<f32> direction = car -> getObjetive() - car -> getModel() -> getPosition();
    car -> setDirection(direction.normalize());
    return Enumeration::behaviourState::SUCCESS;
}
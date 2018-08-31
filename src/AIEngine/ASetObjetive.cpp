#include "ASetObjetive.h"

ASetObjetive::ASetObjetive() : Action() {

}

ASetObjetive::~ASetObjetive() {

}

Enumeration::behaviourState ASetObjetive::update(AICar* car) {
    if (car -> getPowerUp() != NULL) {
        if (car -> getModel() -> getPosition().getDistanceTo(car -> getObjetive()) <= 500) {
            car -> setActualSector(car -> getActualSector() -> getNextSector());
        }
    } else {
        if (car -> getActualSector() -> getNextSector() -> getPowerUps().size() == 0){
            if (car -> getModel() -> getPosition().getDistanceTo(car -> getObjetive()) <= 500) {
                car -> setActualSector(car -> getActualSector() -> getNextSector());
            }
        } else {
            bool inactive = true;
            for (i32 i = 0; i < car -> getActualSector() -> getNextSector() -> getPowerUps().size() && inactive == true; i++) {
                if (car -> getActualSector() -> getNextSector() -> getPowerUps()[i] -> getVisible() == true) {
                    inactive = false;
                }
            }
            if (inactive == true) {
                if (car -> getModel() -> getPosition().getDistanceTo(car -> getObjetive()) <= 500) {
                    car -> setActualSector(car -> getActualSector() -> getNextSector());
                }
            }
        }
    }
    car -> setObjetive(car -> getActualSector() -> getNextSector() -> getStartDrivingLine());
    Vector3<f32> direction = car -> getObjetive() - car -> getModel() -> getPosition();
    car -> setDirection(direction.normalize());
    return Enumeration::behaviourState::SUCCESS;
}
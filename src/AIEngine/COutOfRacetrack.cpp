#include "COutOfRacetrack.h"
#include "AOutOfRacetrack.h"

COutOfRacetrack::COutOfRacetrack(AICar* newCar) : Condition(newCar) {
    action = new AOutOfRacetrack();
}

COutOfRacetrack::~COutOfRacetrack() {

}

Enumeration::behaviourState COutOfRacetrack::update() {
    if (true == false) {
        return action -> update(car);
    } else {
        return Enumeration::behaviourState::FAILURE;
    }
}
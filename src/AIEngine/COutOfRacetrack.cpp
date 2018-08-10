#include "COutOfRacetrack.h"
#include "AOutOfRacetrack.h"

COutOfRacetrack::COutOfRacetrack(AICar* newCar) : Condition(newCar) {
    action = new AOutOfRacetrack();
}

COutOfRacetrack::~COutOfRacetrack() {

}

Enumeration::behaviourState COutOfRacetrack::update() {
    return action -> update(car);
}
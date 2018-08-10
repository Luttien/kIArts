#include "AOutOfRacetrack.h"

AOutOfRacetrack::AOutOfRacetrack() : Action() {

}

AOutOfRacetrack::~AOutOfRacetrack() {

}

Enumeration::behaviourState AOutOfRacetrack::update(AICar* car) {
    return Enumeration::behaviourState::FAILURE;
}
#include "AOutOfRacetrack.h"

AOutOfRacetrack::AOutOfRacetrack() : Action() {

}

AOutOfRacetrack::~AOutOfRacetrack() {

}

Enumeration::behaviourState AOutOfRacetrack::update() {
    return Enumeration::behaviourState::SUCCESS;
}
#include "SqAtRacetrack.h"

SqAtRacetrack::SqAtRacetrack(AICar* newCar) : Sequence(newCar) {

}

SqAtRacetrack::~SqAtRacetrack() {
    
}

Enumeration::behaviourState SqAtRacetrack::update() {
    return Enumeration::behaviourState::SUCCESS;
}
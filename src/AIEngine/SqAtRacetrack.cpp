#include "SqAtRacetrack.h"

SqAtRacetrack::SqAtRacetrack(AICar* newCar, std::vector<Node*> newChildren) : Sequence(newCar, newChildren) {

}

SqAtRacetrack::~SqAtRacetrack() {
    
}

Enumeration::behaviourState SqAtRacetrack::update() {
    return Enumeration::behaviourState::SUCCESS;
}
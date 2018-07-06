#include "COutOfRacetrack.h"
#include "AOutOfRacetrack.h"

COutOfRacetrack::COutOfRacetrack() : Condition() {
    action = new AOutOfRacetrack();
}

COutOfRacetrack::~COutOfRacetrack() {

}

Enumeration::behaviourState COutOfRacetrack::update() {
    return action -> update();
}
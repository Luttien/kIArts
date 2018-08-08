#include "AMoveToObjetive.h"

AMoveToObjetive::AMoveToObjetive() : Action() {

}

AMoveToObjetive::~AMoveToObjetive() {

}

Enumeration::behaviourState AMoveToObjetive::update(AICar* car) {
    car -> update();
    return Enumeration::behaviourState::SUCCESS;
}
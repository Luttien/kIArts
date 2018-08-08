#include "Condition.h"

Condition::Condition(AICar* newCar) : Node(newCar) {

}

Condition::~Condition() {
    delete action;
}
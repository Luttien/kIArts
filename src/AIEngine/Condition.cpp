#include "Condition.h"

Condition::Condition(Action* newAction) {
    action = newAction;
}

Condition::~Condition() {
    delete action;
}
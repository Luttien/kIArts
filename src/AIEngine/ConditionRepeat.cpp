#include "ConditionRepeat.h"

ConditionRepeat::ConditionRepeat(i32 newRepeat, AICar* newCar) : Condition(newCar) {
    repeat = newRepeat;
}

ConditionRepeat::~ConditionRepeat() {
    for (i32 i = 0; i < actions.size(); i++) {
        delete actions[i];
    }
    actions.clear();
}

Enumeration::behaviourState ConditionRepeat::update() {
    i32 loop = 0;
    while (loop < repeat) {
        for (i32 i = 0; i < actions.size(); i++) {
            actions[i] -> update();
        }
        loop++;
    }
}
#ifndef CONDITIONREPEAT_H
#define CONDITIONREPEAT_H

#include <vector>

#include "Condition.h"
#include "../MathEngine/Types.h"

class ConditionRepeat : public Condition {
    
    public:
        ConditionRepeat(i32 newRepeat, AICar* newCar);
        ~ConditionRepeat();

        Enumeration::behaviourState update();

    protected:
        i32 repeat;

        std::vector<Action*> actions;
};
#endif
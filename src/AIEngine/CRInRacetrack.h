#ifndef CRINRACETRACK_H
#define CRINRACETRACK_H

#include "ConditionRepeat.h"

class CRInRacetrack : public ConditionRepeat {
    
    public:
        CRInRacetrack(i32 newRepeat, AICar* newCar);
        ~CRInRacetrack();

    private:
};
#endif
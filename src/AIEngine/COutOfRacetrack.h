#ifndef COUTOFRACETRACK_H
#define COUTOFRACETRACK_H

#include "Condition.h"

class COutOfRacetrack : public Condition {
    
    public:
        COutOfRacetrack(AICar* newCar);
        ~COutOfRacetrack();

        Enumeration::behaviourState update();

    private:
};
#endif
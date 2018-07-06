#ifndef COUTOFRACETRACK_H
#define COUTOFRACETRACK_H

#include "Condition.h"

class COutOfRacetrack : public Condition {
    
    public:
        COutOfRacetrack();
        ~COutOfRacetrack();

        Enumeration::behaviourState update();

    private:
};
#endif
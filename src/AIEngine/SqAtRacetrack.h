#ifndef SQATRACETRACK_H
#define SQATRACETRACK_H

#include "Sequence.h"

class SqAtRacetrack : public Sequence {
    
    public:
        SqAtRacetrack(AICar* newCar);
        ~SqAtRacetrack();

        Enumeration::behaviourState update();

    private:
};
#endif
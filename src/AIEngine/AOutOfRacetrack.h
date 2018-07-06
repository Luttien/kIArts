#ifndef AOUTOFRACETRACK_H
#define AOUTOFRACETRACK_H

#include "Action.h"

class AOutOfRacetrack : public Action {
    
    public:
        AOutOfRacetrack();
        ~AOutOfRacetrack();

        Enumeration::behaviourState update();

    private:
};
#endif
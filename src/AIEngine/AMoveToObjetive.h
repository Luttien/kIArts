#ifndef AMOVETOOBJETIVE_H
#define AMOVETOOBJETIVE_H

#include "Action.h"

class AMoveToObjetive : public Action {
    
    public:
        AMoveToObjetive();
        ~AMoveToObjetive();

        Enumeration::behaviourState update(AICar* car);

    private:
};
#endif
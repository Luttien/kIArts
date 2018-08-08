#ifndef ASETOBJETIVE_H
#define ASETOBJETIVE_H

#include "Action.h"
#include "../AICar.h"

class ASetObjetive : public Action {
    
    public:
        ASetObjetive();
        ~ASetObjetive();

        Enumeration::behaviourState update(AICar* car);

    private:
};
#endif
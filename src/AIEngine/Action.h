#ifndef ACTION_H
#define ACTION_H

#include "../Enumeration.h"
#include "../AICar.h"

class Action {
    
    public:
        Action();
        ~Action();

        virtual Enumeration::behaviourState update(AICar*) = 0;

    private:
};
#endif
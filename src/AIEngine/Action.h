#ifndef ACTION_H
#define ACTION_H

#include "../Enumeration.h"

class Action {
    
    public:
        Action();
        ~Action();

        virtual Enumeration::behaviourState update() = 0;

    private:
};
#endif
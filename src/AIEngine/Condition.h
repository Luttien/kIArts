#ifndef CONDITION_H
#define CONDITION_H

#include "Action.h"

class Condition {
    
    public:
        Condition(Action*);
        ~Condition();

    private:
        Action* action;
};
#endif
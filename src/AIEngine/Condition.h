#ifndef CONDITION_H
#define CONDITION_H

#include "Action.h"
#include "Node.h"

class Condition : public Node {
    
    public:
        Condition();
        ~Condition();

        virtual Enumeration::behaviourState update() = 0;

    protected:
        Action* action;
};
#endif
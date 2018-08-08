#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "Composite.h"

class Sequence : public Composite {
    
    public:
        Sequence(AICar* newCar, std::vector<Node*> newChildren);
        ~Sequence();

        virtual Enumeration::behaviourState update() = 0;

    private:
};
#endif
#ifndef SELECTOR_H
#define SELECTOR_H

#include "Composite.h"

class Selector : public Composite {
    
    public:
        Selector(AICar* newCar, std::vector<Node*> newChildren);
        ~Selector();

        virtual Enumeration::behaviourState update() = 0;

    private:
};
#endif
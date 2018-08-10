#ifndef SELECTOR_H
#define SELECTOR_H

#include "Composite.h"

class Selector : public Composite {
    
    public:
        Selector(AICar* newCar, std::vector<Node*> newChildren);
        ~Selector();

        Enumeration::behaviourState update();

    private:
};
#endif
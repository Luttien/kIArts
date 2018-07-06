#ifndef SELECTOR_H
#define SELECTOR_H

#include "Node.h"

class Selector : public Node {
    
    public:
        Selector();
        ~Selector();

        virtual Enumeration::behaviourState update() = 0;

    private:
};
#endif
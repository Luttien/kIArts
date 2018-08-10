#ifndef NODE_H
#define NODE_H

#include "../Enumeration.h"
#include "../AICar.h"

class Node {
    
    public:
        Node(AICar* newCar);
        ~Node();

        virtual Enumeration::behaviourState update() = 0;

    protected:
        AICar* car;
        Enumeration::behaviourState state;
};
#endif
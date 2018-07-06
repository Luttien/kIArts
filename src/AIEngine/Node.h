#ifndef NODE_H
#define NODE_H

#include "../Enumeration.h"

class Node {
    
    public:
        Node();
        ~Node();

        virtual Enumeration::behaviourState update() = 0;

    protected:
        Enumeration::behaviourState state;
};
#endif
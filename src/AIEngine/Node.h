#ifndef NODE_H
#define NODE_H

#include "../Enumeration.h"

class Node {
    
    public:
        Node();
        ~Node();

        Enumeration::behaviourState update();

    protected:
        Enumeration::behaviourState state;
};
#endif
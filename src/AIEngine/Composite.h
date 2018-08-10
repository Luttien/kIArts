#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>

#include "Node.h"

class Composite : public Node {
    
    public:
        Composite(AICar* newCar, std::vector<Node*> newChildren);
        ~Composite();

        virtual Enumeration::behaviourState update() = 0;

    protected:
        std::vector<Node*> children;
};
#endif
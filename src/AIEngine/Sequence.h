#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "Node.h"

class Sequence : public Node {
    
    public:
        Sequence();
        ~Sequence();

        virtual Enumeration::behaviourState update() = 0;

    private:
};
#endif
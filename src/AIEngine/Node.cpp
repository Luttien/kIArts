#include "Node.h"

Node::Node(AICar* newCar) {
    car = newCar;
    state = Enumeration::behaviourState::FAILURE;
}

Node::~Node() {
    
}
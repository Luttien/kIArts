#include "Selector.h"

Selector::Selector(AICar* newCar, std::vector<Node*> newChildren) : Composite(newCar, newChildren) {

}

Selector::~Selector() {
    
}

Enumeration::behaviourState Selector::update() {
    state = Enumeration::behaviourState::FAILURE;
    i32 i = 0;
    while (state == Enumeration::behaviourState::FAILURE && i < children.size()) {
        state = children[i] -> update();
        i++;
    }
    return state;
}
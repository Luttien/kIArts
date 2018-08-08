#include "Composite.h"

Composite::Composite(AICar* newCar, std::vector<Node*> newChildren) : Node(newCar) {
    children = newChildren;
}

Composite::~Composite() {
    for (i32 i = 0; i < children.size(); i++) {
        delete children[i];
    }
    children.clear();
}
#include "PowerUp.h"

PowerUp::PowerUp(bool newVisible) {
    if(newVisible == true) {
        model = new Cube(50, Vector3<f32>(0, 0, 500));
    } else {
        model = NULL;
    }
    active = false;
}

PowerUp::~PowerUp() {
    if (model != NULL) {
        delete model;
    }
}


bool PowerUp::action() {
    
}

void PowerUp::setVisible(bool newVisible) {
    model -> setVisible(newVisible);
}

bool PowerUp::getActive() {
    return active;
}

bool PowerUp::getVisible() {
    return model -> getVisible();
}

Cube* PowerUp::getModel() {
    return model;
}
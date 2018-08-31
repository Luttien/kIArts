#include "PowerUp.h"

PowerUp::PowerUp() {
    model = NULL;
    active = false;
}

PowerUp::PowerUp(Vector3<f32> newPosition) {
    model = new Cube(50, newPosition);
    model -> setVisible(true);
    active = false;
    timer = new Timer(7500);
}

PowerUp::~PowerUp() {
    if (model != NULL) {
        delete model;
    }
}

void PowerUp::update() {
    if (timer -> checkTime() && model -> getVisible() == false) {
        model -> setVisible(true);
    }
}

void PowerUp::resetTimer() {
    timer -> start();
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
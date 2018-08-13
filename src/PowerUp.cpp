#include "PowerUp.h"

PowerUp::PowerUp(bool newVisible) {
    if(newVisible == true) {
        model = new Cube(50, Vector3<f32>(500, 0, 0));
    } else {
        model = NULL;
    }
    active = false;
}

PowerUp:: ~PowerUp() {
    if (model != NULL) {
        delete model;
    }
}

bool PowerUp::getActive() {
    return active;
}
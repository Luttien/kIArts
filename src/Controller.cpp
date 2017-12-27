#include "Controller.h"

Controller::Controller() {
    car = new Car();
}

Controller::~Controller() {
    delete car;
}
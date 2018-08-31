#include "AI.h"
#include "AIEngine/COutOfRacetrack.h"
#include "AIEngine/CRInRacetrack.h"

AI::AI(Sector* newActualSector) : Controller() {
    car = new AICar(newActualSector);
    createBehaviour();
}

AI::~AI() {
    delete behaviour;
    delete car;
}

void AI::update() {
    behaviour -> update();
}

void AI::createBehaviour() {
    std::vector<Node*> children;
    children.push_back(new COutOfRacetrack(car));
    children.push_back(new CRInRacetrack(1, car));
    behaviour = new Selector(car, children);
} 

AICar* AI::getCar() {
    return car;
}
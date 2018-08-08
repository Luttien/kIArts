#include "AI.h"

AI::AI(Sector* newActualSector) : Controller() {
    car = new AICar(newActualSector);

}

AI::~AI() {
    delete behaviour;
    delete car;
}

void AI::update() {

}
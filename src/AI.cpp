#include "AI.h"

AI::AI(Sector* newActualSector) : Controller() {
    car = new AICar(newActualSector);
}

AI::~AI() {

}

void AI::update() {
    
}
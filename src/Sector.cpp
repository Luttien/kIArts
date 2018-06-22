#include "Sector.h"

Sector::Sector() {
    
}

Sector::~Sector() {

}

Sector* Sector::getPreviousSector() {
    return previousSector;
}

Sector* Sector::getNextSector() {
    return nextSector;
}
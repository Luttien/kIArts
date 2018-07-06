#include "Racetrack.h"

Racetrack::Racetrack() {
    model = new Model();
}

Racetrack::~Racetrack() {

}

Sector* Racetrack::getSectors() {
    return sectors;
}
#include "Racetrack.h"

Racetrack::Racetrack() {
    model = new Model();
    sectors = new Sector(Vector3<f32>(1000, 0, 1000), Vector3<f32>(0, 0, 0), Vector3<f32>(4000, 0, 1000), Vector3<f32>(5000, 0, 0));
    Sector* sector2 = new Sector(Vector3<f32>(4000, 0, 1000), Vector3<f32>(5000, 0, 0), Vector3<f32>(4000, 0, 4000), Vector3<f32>(5000, 0, 5000));
    sectors -> setNextSector(sector2);
    sector2 -> setPreviousSector(sectors);
    Sector* sector3 = new Sector(Vector3<f32>(4000, 0, 4000), Vector3<f32>(5000, 0, 5000), Vector3<f32>(1000, 0, 4000), Vector3<f32>(0, 0, 5000));
    sector2 -> setNextSector(sector3);
    sector3 -> setPreviousSector(sector2);
    Sector* sector4 = new Sector(Vector3<f32>(1000, 0, 4000), Vector3<f32>(0, 0, 5000), Vector3<f32>(1000, 0, 1000), Vector3<f32>(0, 0, 0));
    sector3 -> setNextSector(sector4);
    sector4 -> setPreviousSector(sector3);
    sector4 -> setNextSector(sectors);
    sectors -> setPreviousSector(sector4);
}

Racetrack::~Racetrack() {
    delete model;
    delete sectors;
}

Sector* Racetrack::getSectors() {
    return sectors;
}
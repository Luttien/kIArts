#include "Racetrack.h"

Racetrack::Racetrack() {
    model = new Model();
    sectors = new Sector(Vector3<f32>(-245, 0, -170), Vector3<f32>(275, 0, -330), Vector3<f32>(-200, 0, 2325), Vector3<f32>(320, 0, 2000));
    Sector* sector2 = new Sector(Vector3<f32>(-200, 0, 2325), Vector3<f32>(320, 0, 2000), Vector3<f32>(330, 0, 3400), Vector3<f32>(720, 0, 2550));
    sector2 -> createPowerUps();
    sectors -> setNextSector(sector2);
    sector2 -> setPreviousSector(sectors);
    Sector* sector3 = new Sector(Vector3<f32>(330, 0, 3400), Vector3<f32>(720, 0, 2550), Vector3<f32>(1400, 0, 3550), Vector3<f32>(1200, 0, 2525));
    sector2 -> setNextSector(sector3);
    sector3 -> setPreviousSector(sector2);
    Sector* sector4 = new Sector(Vector3<f32>(1400, 0, 3550), Vector3<f32>(1200, 0, 2525), Vector3<f32>(2580, 0, 2235), Vector3<f32>(1925, 0, 1500));
    sector4 -> createPowerUps();
    sector3 -> setNextSector(sector4);
    sector4 -> setPreviousSector(sector3);
    Sector* sector5 = new Sector(Vector3<f32>(2580, 0, 2235), Vector3<f32>(1925, 0, 1500), Vector3<f32>(2610, 0, -1680), Vector3<f32>(1890, 0, -1570));
    sector4 -> setNextSector(sector5);
    sector5 -> setPreviousSector(sector4);
    Sector* sector6 = new Sector(Vector3<f32>(1890, 0, -1570), Vector3<f32>(2610, 0, -1680), Vector3<f32>(2000, 0, -2530), Vector3<f32>(1490, 0, -2260));
    sector6 -> createPowerUps();
    sector5 -> setNextSector(sector6);
    sector6 -> setPreviousSector(sector5);
    Sector* sector7 = new Sector(Vector3<f32>(2000, 0, -2530), Vector3<f32>(1490, 0, -2260), Vector3<f32>(1085, 0, -3130), Vector3<f32>(930, 0, -2710));
    sector6 -> setNextSector(sector7);
    sector7 -> setPreviousSector(sector6);
    Sector* sector8 = new Sector(Vector3<f32>(1085, 0, -3130), Vector3<f32>(930, 0, -2710), Vector3<f32>(160, 0, -3380), Vector3<f32>(215, 0, -2840));
    sector8 -> createPowerUps();
    sector7 -> setNextSector(sector8);
    sector8 -> setPreviousSector(sector7);
    Sector* sector9 = new Sector(Vector3<f32>(160, 0, -3380), Vector3<f32>(215, 0, -2840), Vector3<f32>(-610, 0, -3450), Vector3<f32>(-460, 0, -2900));
    sector8 -> setNextSector(sector9);
    sector9 -> setPreviousSector(sector8);
    Sector* sector10 = new Sector(Vector3<f32>(-610, 0, -3450), Vector3<f32>(-460, 0, -2900), Vector3<f32>(-1215, 0, -3170), Vector3<f32>(-770, 0, -2830));
    sector10 -> createPowerUps();
    sector9 -> setNextSector(sector10);
    sector10 -> setPreviousSector(sector9);
    Sector* sector11 = new Sector(Vector3<f32>(-1215, 0, -3170), Vector3<f32>(-770, 0, -2830), Vector3<f32>(-1680, 0, -2650), Vector3<f32>(-1060, 0, -2465));
    sector10 -> setNextSector(sector11);
    sector11 -> setPreviousSector(sector10);
    Sector* sector12 = new Sector(Vector3<f32>(-1680, 0, -2650), Vector3<f32>(-1060, 0, -2465), Vector3<f32>(-1670, 0, -1815), Vector3<f32>(-1050, 0, -1990));
    sector12 -> createPowerUps();
    sector11 -> setNextSector(sector12);
    sector12 -> setPreviousSector(sector11);
    Sector* sector13 = new Sector(Vector3<f32>(-1670, 0, -1815), Vector3<f32>(-1050, 0, -1990), Vector3<f32>(-1180, 0, -1090), Vector3<f32>(-885, 0, -1470));
    sector12 -> setNextSector(sector13);
    sector13 -> setPreviousSector(sector12);
    Sector* sector14 = new Sector(Vector3<f32>(-1180, 0, -1090), Vector3<f32>(-885, 0, -1470), Vector3<f32>(-680, 0, -760), Vector3<f32>(-580, 0, -1250));
    sector14 -> createPowerUps();
    sector13 -> setNextSector(sector14);
    sector14 -> setPreviousSector(sector13);
    Sector* sector15 = new Sector(Vector3<f32>(-680, 0, -760), Vector3<f32>(-580, 0, -1250), Vector3<f32>(-410, 0, -545), Vector3<f32>(-60, 0, -900));
    sector14 -> setNextSector(sector15);
    sector15 -> setPreviousSector(sector14);
    Sector* sector16 = new Sector(Vector3<f32>(-410, 0, -545), Vector3<f32>(-60, 0, -900), Vector3<f32>(-245, 0, -170), Vector3<f32>(275, 0, -330));
    sector16 -> createPowerUps();
    sector15 -> setNextSector(sector16);
    sector16 -> setPreviousSector(sector15);
    sector16 -> setNextSector(sectors);
    sectors -> setPreviousSector(sector16);
}

Racetrack::~Racetrack() {
    delete model;
    delete sectors;
}

Sector* Racetrack::getSectors() {
    return sectors;
}
#ifndef SECTOR_H
#define SECTOR_H

#include <vector>

#include "MathEngine/Vector3.h"
#include "PowerUp.h"

class Sector {
    
    public:
        Sector(Vector3<f32> newUpLeft, Vector3<f32> newDownLeft, Vector3<f32> newUpRight, Vector3<f32> newDownRight);
        virtual ~Sector();

        void createPowerUps();

        Sector* getPreviousSector();
        Sector* getNextSector();
        std::vector<PowerUp*> getPowerUps();
        Vector3<f32> getStartDrivingLine();
        Vector3<f32> getUpLeft();
        Vector3<f32> getDownLeft();
        Vector3<f32> getUpRight();
        Vector3<f32> getDownRight();

        void setPreviousSector(Sector* newPreviousSector);
        void setNextSector(Sector* newNextSector);

    private:
        Sector* previousSector;
        Sector* nextSector;
        std::vector<PowerUp*> powerUps;
        Vector3<f32> upLeft;
        Vector3<f32> downLeft;
        Vector3<f32> upRight;
        Vector3<f32> downRight;
};

#endif
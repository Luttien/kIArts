#ifndef SECTOR_H
#define SECTOR_H

#include "MathEngine/Vector3.h"

class Sector {
    
    public:
        Sector(Vector3<f32> newUpLeft, Vector3<f32> newDownLeft, Vector3<f32> newUpRight, Vector3<f32> newDownRight);
        virtual ~Sector();

        Sector* getPreviousSector();
        Sector* getNextSector();
        Vector3<f32> getStartDrivingLine();

        void setPreviousSector(Sector* newPreviousSector);
        void setNextSector(Sector* newNextSector);

    private:
        Sector* previousSector;
        Sector* nextSector;
        Vector3<f32> upLeft;
        Vector3<f32> downLeft;
        Vector3<f32> upRight;
        Vector3<f32> downRight;
};

#endif
#ifndef RACETRACK_H
#define RACETRACK_H

#include "GraphicEngine/Model.h"
#include "Sector.h"

class Racetrack {
    
    public:
        Racetrack();
        virtual ~Racetrack();

        Sector* getSectors();

    private:
        Model* model;
        Sector* sectors;
};

#endif
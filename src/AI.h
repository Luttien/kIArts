#ifndef AI_H
#define AI_H

#include "Controller.h"
#include "Sector.h"
#include "AICar.h"
#include "AIEngine/Selector.h"

class AI : public Controller {
    
    public:
        AI(Sector* newActualSector);
        virtual ~AI();

        void update();

        AICar* getCar();

    private:
        AICar* car;
        Selector* behaviour;
};

#endif
#ifndef CAR_H
#define CAR_H

#include <irrlicht.h>

using namespace irr;

class Car {
    
    public:
        Car();
        virtual ~Car();

        void move();

    private:
        int speed;
        scene::IMeshSceneNode *model;
        
};

#endif
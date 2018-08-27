#ifndef CAR_H
#define CAR_H

#include "GraphicEngine/Cube.h"
#include "Sector.h"
#include "PowerUp.h"

class Car {
    
    public:
        Car(Sector* newActualSector);
        virtual ~Car();

        void speedUp();
        void reverse();
        void turnLeft();
        void turnRight();
        void brake();
        void straighten();
        void takePowerUp(PowerUp* pUp);
        void checkOutRacetrack();

        void setActualSector(Sector* newActualSector);
        void setDirection(Vector3<f32> newDirection);
        void setSpeed(i32 newSpeed);
        void setPowerUp(PowerUp* newPowerUp);

        virtual void move() = 0;

        Cube* getModel();
        Vector3<f32> getDirection();
        Sector* getActualSector();
        i32 getSpeed();
        PowerUp* getPowerUp();


    protected:
        virtual void turn() = 0;
        
        bool inRacetrack;
        f32 speed;
        f32 turned;
        Cube *model;
        Vector3<f32> direction;
        Sector* actualSector;
        PowerUp* powerUp;
};

#endif
#ifndef CUBE_H
#define CUBE_H

#include <irrlicht/irrlicht.h>
#include "../MathEngine/Types.h"
#include "../MathEngine/Vector3.h"

class Cube {
    
    public:
        Cube(i32 size);
        Cube(i32 size, Vector3<f32> position);
        ~Cube();

        bool intersectsWith(Cube* checkCube);

        void setPosition(Vector3<f32> newPosition);
        void setRotation(Vector3<f32> newRotation);
        void setVisible(bool newVisible);

        bool getVisible();
        Vector3<f32> getPosition();
        Vector3<f32> getRotation();
        Vector3<f32> getDirectionalVector();
        irr::scene::IMeshSceneNode* getModel();

    private:
        irr::scene::IMeshSceneNode* model;
};

#endif
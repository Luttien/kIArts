#ifndef MODEL_H
#define MODEL_H

#include <irrlicht/irrlicht.h>
#include "../MathEngine/Types.h"
#include "../MathEngine/Vector3.h"

using namespace irr;

class Model {
    
    public:
        Model(i32 size);
        ~Model();

        void setPosition(Vector3<f32> newPosition);
        void setRotation(Vector3<f32> newRotation);
        Vector3<f32> getPosition();
        Vector3<f32> getRotation();
        Vector3<f32> getDirectionalVector();

    private:
        scene::IMeshSceneNode* model;
};

#endif
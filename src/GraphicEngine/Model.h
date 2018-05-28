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
        Vector3<f32> getPosition();

    private:
        scene::IMeshSceneNode* model;
};

#endif
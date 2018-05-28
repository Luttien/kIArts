#ifndef MODEL_H
#define MODEL_H

#include <irrlicht/irrlicht.h>

using namespace irr;

class Model {
    
    public:
        Model(int size);
        ~Model();

        setPosition();

    private:
        scene::IMeshSceneNode* model;
};

#endif
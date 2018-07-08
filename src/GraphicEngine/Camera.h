#ifndef CAMERA_H
#define CAMERA_H

#include <irrlicht/irrlicht.h>
#include "../MathEngine/Types.h"
#include "../MathEngine/Vector3.h"

class Camera {
    
    public:
        Camera(irr::scene::ISceneNode* newParent);
        ~Camera();

        void update();

        void setPosition(Vector3<f32> newPosition);
        void setDirection(Vector3<f32> newDirection);

        void setShadowDistance(f32 zoom);

        Vector3<f32> getCameraPosition();

    private:
        irr::scene::ICameraSceneNode* camera;
};

#endif
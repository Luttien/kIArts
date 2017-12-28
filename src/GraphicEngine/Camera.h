#ifndef CAMERA_H
#define CAMERA_H

#include <irrlicht.h>

using namespace irr;

class Camera {
    
    public:
        Camera();
        ~Camera();

        void setCameraPosition(irr::core::vector3df);

        void setShadowDistance(float);

        irr::core::vector3df getCameraPosition();

        float getReciprocalSquareroot() {
            return core::reciprocal_squareroot((f32)2);
        }

    private:
        scene::ICameraSceneNode* camera;
};

#endif
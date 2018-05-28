#ifndef CAMERA_H
#define CAMERA_H

#include <irrlicht/irrlicht.h>
#include "../MathEngine/Types.h"

using namespace irr;

class Camera {
    
    public:
        Camera();
        ~Camera();

        void setCameraPosition(irr::core::vector3df);
        void setCameraDirection(irr::core::vector3df);

        void setShadowDistance(f32);

        irr::core::vector3df getCameraPosition();

        f32 getReciprocalSquareroot() {
            return core::reciprocal_squareroot((f32)2);
        }

    private:
        scene::ICameraSceneNode* camera;
};

#endif
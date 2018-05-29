#ifndef CAMERA_H
#define CAMERA_H

#include <irrlicht/irrlicht.h>
#include "../MathEngine/Types.h"
#include "../MathEngine/Vector3.h"

using namespace irr;

class Camera {
    
    public:
        Camera();
        ~Camera();

        void setCameraPosition(Vector3<f32> newPosition);
        void setCameraDirection(Vector3<f32> newDirection);

        void setShadowDistance(f32 zoom);

        Vector3<f32> getCameraPosition();

        f32 getReciprocalSquareroot() {
            return core::reciprocal_squareroot((f32)2);
        }

    private:
        scene::ICameraSceneNode* camera;
};

#endif
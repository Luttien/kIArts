#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

#include "GraphicEngine/Camera.h"
#include <irrlicht.h>

using namespace irr;

class CameraController {
    
    public:
        CameraController();
        ~CameraController();

        void update();

        void move();
        void rotateAndInclinate();
        void zoom();

        Camera *getCamera();

    private:
        Camera *camera;
};
#endif
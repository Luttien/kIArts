#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

#include "GraphicEngine/Camera.h"

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
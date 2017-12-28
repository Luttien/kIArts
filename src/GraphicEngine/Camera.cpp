#include "Camera.h"
#include "Window.h"

Camera::Camera() {
    camera = Window::getInstance() -> getSceneManager() -> addCameraSceneNode(0);
}

Camera::~Camera() {
    delete camera;
}

void Camera::setCameraPosition(irr::core::vector3df position){
    camera -> setPosition (position);
}

void Camera::setShadowDistance(float zoom){
	camera -> setFarValue(zoom);
}

irr::core::vector3df Camera::getCameraPosition(){
    return camera -> getPosition();
}
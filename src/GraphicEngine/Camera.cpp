#include "Camera.h"
#include "Window.h"

Camera::Camera() {
    camera = Window::getInstance() -> getSceneManager() -> addCameraSceneNode(0);
}

Camera::~Camera() {
    delete camera;
}

void Camera::setCameraPosition(irr::core::vector3df position) {
    camera -> setPosition (position);
}

void Camera::setCameraDirection(irr::core::vector3df direction) {
    camera -> setTarget (direction);
}

void Camera::setShadowDistance(f32 zoom){
	camera -> setFarValue(zoom);
}

irr::core::vector3df Camera::getCameraPosition(){
    return camera -> getPosition();
}
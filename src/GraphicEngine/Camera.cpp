#include "Camera.h"
#include "Window.h"

Camera::Camera() {
    camera = Window::getInstance() -> getSceneManager() -> addCameraSceneNode(0);
}

Camera::~Camera() {
    camera -> remove();
}

void Camera::setCameraPosition(Vector3<f32> newPosition) {
    irr::core::vector3df position = irr::core::vector3df(newPosition.x, newPosition.y, newPosition.z);
    camera -> setPosition (position);
}

void Camera::setCameraDirection(Vector3<f32> newDirection) {
    irr::core::vector3df direction = irr::core::vector3df(newDirection.x, newDirection.y, newDirection.z);
    camera -> setTarget (direction);
}

void Camera::setShadowDistance(f32 zoom){
	camera -> setFarValue(zoom);
}

Vector3<f32> Camera::getCameraPosition(){
    Vector3<f32> position = Vector3<f32>(camera -> getPosition().X, camera -> getPosition().Y, camera -> getPosition().Z);
    return position;
}
#include "CameraController.h"
  
CameraController::CameraController(){
	//Camera 
    camera = new Camera();
    camera -> setShadowDistance(42000.f);
	camera -> setCameraPosition(irr::core::vector3df(500, 500, 500));
	camera -> setCameraDirection(irr::core::vector3df(0, 0, 0));
}

CameraController::~CameraController() {
	delete camera;
}

void CameraController::update() {

}

void CameraController::move() {

}

void CameraController::zoom() {
	
}

void CameraController::rotateAndInclinate() {
    
}

Camera *CameraController::getCamera(){
	return camera;
}
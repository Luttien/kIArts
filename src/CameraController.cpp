#include "CameraController.h"
  
CameraController::CameraController() {
	//Camera 
    camera = new Camera();
    camera -> setShadowDistance(42000.f);
	camera -> setCameraPosition(Vector3<f32>(500, 500, 500));
	camera -> setCameraDirection(Vector3<f32>(0, 0, 0));
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
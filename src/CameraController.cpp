#include "CameraController.h"
#include "Player.h"
  
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
	camera -> setCameraDirection(Player::getInstance() -> getCar() -> getModel() -> getPosition());
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
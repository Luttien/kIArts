#include "CameraController.h"
#include "Player.h"
  
CameraController::CameraController() {
	//Camera 
    camera = new Camera();
    camera -> setShadowDistance(42000.f);
	move();
}

CameraController::~CameraController() {
	delete camera;
}

void CameraController::update() {
	rotate();
	move();
}

void CameraController::move() {
	Vector3<f32> posPl = Player::getInstance() -> getCar() -> getModel() -> getPosition();
	camera -> setDirection(posPl);
	camera -> setPosition(Vector3<f32>(posPl.x, posPl.y + 200, posPl.z - 200));
}

void CameraController::rotate() {
	Vector3<f32> rotPl = Player::getInstance() -> getCar() -> getModel() -> getRotation();
	camera -> setRotation(rotPl);
}

Camera *CameraController::getCamera(){
	return camera;
}
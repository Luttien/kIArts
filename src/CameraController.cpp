#include "CameraController.h"
#include "Player.h"
  
CameraController::CameraController() {
    camera = new Camera(Player::getInstance() -> getCar() -> getModel() -> getModel());
    camera -> setShadowDistance(42000.f);
	Vector3<f32> posPl = Player::getInstance() -> getCar() -> getModel() -> getPosition();
	camera -> setDirection(posPl);
	camera -> setPosition(Vector3<f32>(posPl.x, posPl.y + 75, posPl.z - 300));
}

CameraController::~CameraController() {
	delete camera;
}

void CameraController::update() {
	Vector3<f32> posPl = Player::getInstance() -> getCar() -> getModel() -> getPosition();
	camera -> setDirection(posPl);
}

Camera *CameraController::getCamera(){
	return camera;
}
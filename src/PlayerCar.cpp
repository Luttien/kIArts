#include "PlayerCar.h"

PlayerCar::PlayerCar(Sector* newActualSector) : Car(newActualSector) {
    model = new Cube(100, actualSector -> getStartDrivingLine());
    direction = model -> getDirectionalVector();
}

PlayerCar::~PlayerCar() {

}

void PlayerCar::move() {
    Vector3<f32> pos = model -> getPosition();
    Vector3<f32> newPos = pos + direction * speed;
    model -> setPosition(newPos);
    direction = model -> getDirectionalVector();
}

void PlayerCar::turn() {
    f32 y = model -> getRotation().y;
    y = y + turned;
    model -> setRotation(Vector3<f32>(model -> getRotation().x, y, model -> getRotation().z));
    direction = model -> getDirectionalVector();
}
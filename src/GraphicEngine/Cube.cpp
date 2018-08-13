#include "Cube.h"
#include "Window.h"

Cube::Cube(i32 size) {
    model = Window::getInstance() -> getSceneManager() -> addCubeSceneNode(size);
    model -> setPosition(irr::core::vector3df(0, 0, 0));
    model -> setMaterialFlag(video::EMF_LIGHTING, false);
}

Cube::Cube(i32 size, Vector3<f32> position) {
    model = Window::getInstance() -> getSceneManager() -> addCubeSceneNode(size);
    model -> setPosition(irr::core::vector3df(position.x, position.y, position.z));
    model -> setMaterialFlag(video::EMF_LIGHTING, false);
}

Cube::~Cube() {
    model -> remove();
}

void Cube::setPosition(Vector3<f32> newPosition) {
    model -> setPosition(irr::core::vector3df(newPosition.x, newPosition.y, newPosition.z));
}

void Cube::setRotation(Vector3<f32> newRotation) {
    model -> setRotation(irr::core::vector3df(newRotation.x, newRotation.y, newRotation.z));
}

void Cube::setVisible(bool newVisible) {
    model -> setVisible(newVisible);
}

Vector3<f32> Cube::getPosition() {
    irr::core::vector3df pos = model -> getPosition();
    Vector3<f32> position = Vector3<f32>(pos.X, pos.Y, pos.Z);
    return position;
}

Vector3<f32> Cube::getRotation() {
    irr::core::vector3df rot = model -> getRotation();
    Vector3<f32> rotation = Vector3<f32>(rot.X, rot.Y, rot.Z);
    return rotation;
}

Vector3<f32> Cube::getDirectionalVector() {
    irr::core::matrix4 mat = model -> getRelativeTransformation();
    irr::core::vector3df dir(mat[8], mat[9], mat[10]);
    dir.normalize();
    Vector3<f32> direction = Vector3<f32>(dir.X, dir.Y, dir.Z);
    return direction;
}

irr::scene::IMeshSceneNode* Cube::getModel() {
    return model;
}
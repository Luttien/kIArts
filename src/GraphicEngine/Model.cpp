#include "Model.h"
#include "Window.h"

Model::Model(i32 size) {
    model = Window::getInstance() -> getSceneManager() -> addCubeSceneNode(size);
    model -> setPosition(irr::core::vector3df(0, 0, 0));
    model -> setMaterialFlag(video::EMF_LIGHTING, false);
}

Model::~Model() {
    model -> remove();
}

void Model::setPosition(Vector3<f32> newPosition) {
    model -> setPosition(irr::core::vector3df(newPosition.x, newPosition.y, newPosition.z));
}

void Model::setRotation(Vector3<f32> newRotation) {
    model -> setRotation(irr::core::vector3df(newRotation.x, newRotation.y, newRotation.z));
}

Vector3<f32> Model::getPosition() {
    irr::core::vector3df pos = model -> getPosition();
    Vector3<f32> position = Vector3<f32>(pos.X, pos.Y, pos.Z);
    return position;
}

Vector3<f32> Model::getRotation() {
    irr::core::vector3df rot = model -> getRotation();
    Vector3<f32> rotation = Vector3<f32>(rot.X, rot.Y, rot.Z);
    return rotation;
}

Vector3<f32> Model::getDirectionalVector() {
    irr::core::matrix4 mat = model -> getRelativeTransformation();
    irr::core::vector3df dir(mat[8],mat[9],mat[10]);
    dir.normalize();
    Vector3<f32> direction = Vector3<f32>(dir.X, dir.Y, dir.Z);
    return direction;
}
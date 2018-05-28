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

Vector3<f32> Model::getPosition() {
    irr::core::vector3df pos = model -> getPosition();
    Vector3<f32> position = Vector3<f32>(pos.X, pos.Y, pos.Z);
    return position;
}
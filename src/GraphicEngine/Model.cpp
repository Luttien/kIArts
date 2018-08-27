#include "Model.h"
#include "Window.h"

Model::Model() {
    model = Window::getInstance() -> getSceneManager() -> addMeshSceneNode(Window::getInstance() -> getSceneManager() -> getMesh("media/racetrack/circuito2/circuito2.obj"));
    model -> setPosition(irr::core::vector3df(0, 0, 0));
    model -> setMaterialFlag(video::EMF_LIGHTING, false);
    model -> setVisible(true);
    model -> setScale(irr::core::vector3df(300, 300, 300));
}

Model::~Model() {
    model -> removeAll();
}
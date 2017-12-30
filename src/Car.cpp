#include "Car.h"
#include "GraphicEngine/Window.h"

Car::Car() {
    model = Window::getInstance() -> getSceneManager() -> addCubeSceneNode(100);
    model -> setPosition(irr::core::vector3df(0, 0, 0));
    model -> setMaterialFlag(video::EMF_LIGHTING, false);
}

Car::~Car() {
    
}

void Car::move() {
    float x = model -> getPosition().X;
    x = x + 10;
    model -> setPosition(irr::core::vector3df(x, model -> getPosition().Y, model -> getPosition().Z));
}
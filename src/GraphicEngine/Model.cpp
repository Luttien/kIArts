#include "Model.h"

Model::Model() {
    model = Window::getInstance() -> getSceneManager() -> addCubeSceneNode(100);
}

Model::~Model() {

}
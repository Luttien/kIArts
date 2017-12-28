#include "GameState.h"

GameState::GameState() : State() {
    camera = new CameraController();
}

GameState::~GameState() {
    delete camera;
}

void GameState::init() {

}

void GameState::update() {
    camera -> update();
}

void GameState::render() {

}

void GameState::input() {

}

void GameState::cleanUp() {

}
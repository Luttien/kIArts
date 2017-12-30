#include "GameState.h"
#include "Player.h"

GameState::GameState() : State() {
    camera = new CameraController();
}

GameState::~GameState() {
    delete camera;
}

void GameState::init() {
    Player::getInstance();
}

void GameState::update() {
    camera -> update();
    //Player::getInstance() -> getCar() -> move();
}

void GameState::render() {

}

void GameState::input() {

}

void GameState::cleanUp() {

}
#include "GameState.h"
#include "Player.h"
#include "Game.h"

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
    if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_KEY_W)) {
        Player::getInstance() -> getCar() -> move();
    } else {
        if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_KEY_S)) {
            Player::getInstance() -> getCar() -> move();
    }
}

void GameState::render() {

}

void GameState::input() {

}

void GameState::cleanUp() {

}
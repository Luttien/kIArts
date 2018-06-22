#include "GameState.h"
#include "Player.h"
#include "Game.h"

GameState::GameState() : State() {
    camera = new CameraController();
    racetrack = new Racetrack();
}

GameState::~GameState() {
    delete camera;
    delete racetrack;
}

void GameState::init() {
    Player::getInstance();
}

void GameState::update() {
    camera -> update();
    if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_KEY_W)) {
        Player::getInstance() -> getCar() -> speedUp();
    } else {
        if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_KEY_S)) {
            Player::getInstance() -> getCar() -> reverse();
        } else {
            Player::getInstance() -> getCar() -> brake();
        }
    }
}

void GameState::render() {

}

void GameState::input() {

}

void GameState::cleanUp() {

}
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
    if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_LEFT)) {
        Player::getInstance() -> getCar() -> turnLeft();
    } else {
        if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_RIGHT)) {
            Player::getInstance() -> getCar() -> turnRigth();
        } else {
            Player::getInstance() -> getCar() -> straighten();
        }
    }
    if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_UP)) {
        Player::getInstance() -> getCar() -> speedUp();
    } else {
        if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_DOWN)) {
            Player::getInstance() -> getCar() -> reverse();
        } else {
            Player::getInstance() -> getCar() -> brake();
        }
    }
    camera -> update();
}

void GameState::render() {

}

void GameState::input() {

}

void GameState::cleanUp() {

}
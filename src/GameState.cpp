#include "GameState.h"
#include "Player.h"
#include "Game.h"

GameState::GameState() : State() {

}

GameState::~GameState() {
    delete camera;
    delete racetrack;
    for (i32 i = 0; i < ai.size(); i ++) {
        delete ai[i];
    }
    ai.clear();
}

void GameState::init() {
    camera = new CameraController();
    racetrack = new Racetrack();
    Player::getInstance();
    ai.push_back(new AI());
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
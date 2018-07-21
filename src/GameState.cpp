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
    racetrack = new Racetrack();
    Player::getInstance();
    camera = new CameraController();
    ai.push_back(new AI(racetrack -> getSectors()));
}

void GameState::update() {
    if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_LEFT)) {
        Player::getInstance() -> getCar() -> turnLeft();
    } else {
        if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_RIGHT)) {
            Player::getInstance() -> getCar() -> turnRight();
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
    for (i32 i = 0; i < ai.size(); i ++) {
        ai[i] -> update();
    }
}

void GameState::render() {

}

void GameState::input() {

}

void GameState::cleanUp() {

}

Racetrack* GameState::getRacetrack() {
    return racetrack;
}
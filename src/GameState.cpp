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
    for (i32 i = 0; i < powerUps.size(); i ++) {
        delete powerUps[i];
    }
    powerUps.clear();
}

void GameState::init() {
    racetrack = new Racetrack();
    Player::getInstance();
    camera = new CameraController();
    ai.push_back(new AI(racetrack -> getSectors()));
    powerUps.push_back(new PowerUp(true));
}

void GameState::update() {
    i32 i = 0;
    while (Player::getInstance() -> getCar() -> getPowerUp() == NULL && i < powerUps.size()) {
        if (powerUps[i] -> getModel() -> getVisible() == true) {
            Player::getInstance() -> getCar() -> takePowerUp(powerUps[i]);
        }
        i++;
    }

    if (Player::getInstance() -> getCar() -> getPowerUp() != NULL && Player::getInstance() -> getCar() -> getPowerUp() -> getActive() == false) {
        if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_SPACE)) {
            Player::getInstance() -> getCar() -> getPowerUp() -> action();
        }
    }

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
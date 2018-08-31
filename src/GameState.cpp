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
    for (Sector* sec = racetrack -> getSectors() -> getNextSector(); sec != racetrack -> getSectors(); sec = sec -> getNextSector()) {
        i32 i = 0;
        while (Player::getInstance() -> getCar() -> getPowerUp() == NULL && i < sec -> getPowerUps().size()) {
            if (sec -> getPowerUps()[i] -> getModel() -> getVisible() == true) {
                Player::getInstance() -> getCar() -> takePowerUp(sec -> getPowerUps()[i]);
            }
            i++;
        }
    }

    for (Sector* sec = racetrack -> getSectors() -> getNextSector(); sec != racetrack -> getSectors(); sec = sec -> getNextSector()) {
        for (i32 j = 0; j < ai.size(); j++) {
            i32 i = 0;
            while (ai[j] -> getCar() -> getPowerUp() == NULL && i < sec -> getPowerUps().size()) {
                if (sec -> getPowerUps()[i] -> getModel() -> getVisible() == true) {
                    ai[j] -> getCar() -> takePowerUp(sec -> getPowerUps()[i]);
                }
                i++;
            }
        }
    }

    for (Sector* sec = racetrack -> getSectors() -> getNextSector(); sec != racetrack -> getSectors(); sec = sec -> getNextSector()) {
        for (i32 i = 0; i < sec -> getPowerUps().size(); i++) {
            sec -> getPowerUps()[i] -> update();
        }
    }

    if (Player::getInstance() -> getCar() -> getPowerUp() != NULL) {
        if(Player::getInstance() -> getCar() -> getPowerUp() -> getActive() == false) {
            if (Game::getInstance() -> getIo() -> keyDown(irr::KEY_SPACE)) {
                Player::getInstance() -> getCar() -> getPowerUp() -> action();
            }
        } else {
            if (Player::getInstance() -> getCar() -> getPowerUp() -> action() == false) {
                delete Player::getInstance() -> getCar() -> getPowerUp();
                Player::getInstance() -> getCar() -> setPowerUp(NULL);
            }
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
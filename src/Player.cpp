#include "Player.h"
#include "Game.h"

Player* Player::instance = 0;

Player::Player() : Controller() {
    GameState* gs = (GameState*)(Game::getInstance() -> getState());
    car = new PlayerCar(gs -> getRacetrack() -> getSectors());
}

Player::~Player() {
    delete instance;
    delete car;
}

Player* Player::getInstance() {
    if(instance==0) {
        instance = new Player();
    }
    return instance;
}

PlayerCar* Player::getCar() {
    return car;
}
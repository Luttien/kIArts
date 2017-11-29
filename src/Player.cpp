#include "Player.h"

Player* instance = 0;

Player::Player() : Controller() {

}

Player::~Player() {
    delete instance;
}

Player* Player::getInstance() {
    if(instance==0) {
        instance = new Player();
    }
    return instance;
}
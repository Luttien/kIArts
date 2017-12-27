#include "Game.h"

Game* Game::instance = 0;

Game::Game() {
    window = Window::getInstance();
}

Game::~Game() {
    
}

Game* Game::getInstance() {
    if(instance == 0) {
        instance = new Game();
    }
    return instance;
}
#include "Game.h"

Game* Game::instance = 0;

Game::Game() {
    window = Window::getInstance();

    game = new GameState();
    state = game;
}

Game::~Game() {
    delete game;
}

Game* Game::getInstance() {
    if(instance == 0) {
        instance = new Game();
    }
    return instance;
}

void Game::init() {
    state -> init();
}

void Game::update() {
    state -> update();
}

void Game::render() {
    window -> beginScene();
    state -> render();
    window -> endScene();
}

void Game::input() {
    state -> input();
}

void Game::cleanUp() {
    state -> cleanUp();
    window -> close();
}

Window* Game::getWindow() {
    return window;
}
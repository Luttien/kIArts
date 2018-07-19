#include "Game.h"

Game* Game::instance = 0;

Game::Game() {
    window = Window::getInstance();

    game = new GameState();
    state = game;

    io = new UserInput();

    window -> setEventReceiver(io);
}

Game::~Game() {
    delete game;
    delete io;
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
    io -> endEventProcess();
    state -> input();
    io -> startEventProcess();
}

void Game::cleanUp() {
    state -> cleanUp();
    window -> close();
}

Window* Game::getWindow() {
    return window;
}

UserInput* Game::getIo() {
    return io;
}

State* Game::getState() {
    return state;
}
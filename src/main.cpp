#include "Game.h"

i32 main(){
    Game *game = Game::getInstance();

    game -> init();

    while (game -> getWindow() -> isOpen()){
        if (game -> getWindow() -> isReady()){
            game -> input();
            game -> update();
            game -> render();
        }
    }

    game -> cleanUp();
    
    return 0;
}
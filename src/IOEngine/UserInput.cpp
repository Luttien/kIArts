#include "UserInput.h"

#include <iostream>

using namespace irr;

UserInput::UserInput() {
    //KeyBoard States.
    for (int i = 0; i < KEY_KEY_CODES_COUNT; i++) {
        keyState[i] = Enumeration::UP;
    }
}

UserInput::~UserInput() {

}

bool UserInput::OnEvent(const SEvent& event){
    //////////////////////////////
    // Keyboard Input Event
    //////////////////////////////
    if (event.EventType == EET_KEY_INPUT_EVENT) {
        if (processState == Enumeration::STARTED) {
            // if key is Pressed Down
            if (event.KeyInput.PressedDown == true) {
                // If key was not down before
                if (keyState[event.KeyInput.Key] != Enumeration::DOWN) {
                    keyState[event.KeyInput.Key] = Enumeration::PRESSED; // Set to Pressed
                } else {
                    // if key was down before
                    keyState[event.KeyInput.Key] = Enumeration::DOWN; // Set to Down
                }
            } else {
                // if the key is down
                if (keyState[event.KeyInput.Key] != Enumeration::UP) {
                    keyState[event.KeyInput.Key] = Enumeration::RELEASED; // Set to Released
                }
            }
        }
    }
    return false;
}

bool UserInput::keyPressed(char keycode) {
    if (keyState[(int)keycode] == Enumeration::PRESSED) {
        return true;
    } else {
        return false;
    }
}

bool UserInput::keyDown(char keycode) {
    if (keyState[(int)keycode] == Enumeration::DOWN || keyState[(int)keycode] == Enumeration::PRESSED) {
        return true;
    } else {
        return false;
    }
}

bool UserInput::keyUp(char keycode) {
    if (keyState[(int)keycode] == Enumeration::UP || keyState[(int)keycode] == Enumeration::RELEASED) {
        return true;
    } else {
        return false;
    }
}

bool UserInput::keyReleased(char keycode) {
    if (keyState[(int)keycode] == Enumeration::RELEASED) {
        return true;
    } else {
        return false;
    }
}

// This is used so that the Key States will not be changed during execution of the main game loop.
void UserInput::endEventProcess() {
    processState = Enumeration::ENDED;
}

// This is used so that the Key States will not be changed during execution of the main game loop.
void UserInput::startEventProcess() {
    processState = Enumeration::STARTED;
    //Keyboard Key States
    for (int i = 0; i < KEY_KEY_CODES_COUNT; i++) {
        if (keyState[i] == Enumeration::RELEASED) {
            keyState[i] = Enumeration::UP;
        }

        if (keyState[i] == Enumeration::PRESSED) {
            keyState[i] = Enumeration::DOWN;
        }
    }
}
#include "UserInput.h"

UserInput* instance = 0;

UserInput::UserInput() {

}

UserInput::~UserInput() {

}

UserInput* UserInput::getInstance() {
    if (instance == 0) {
        instance = new UserInput();
    }
    return instance;
}
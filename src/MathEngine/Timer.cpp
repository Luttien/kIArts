#include "Timer.h"
#include "GraphicEngine/Window.h"

Timer::Timer(i32 newMaxDur) {
    startTime = Window::getInstance() -> getDevice() -> getTimer() -> getTime();
    maxDur = newMaxDur;
}

Timer::~Timer() {
    
}

bool Timer::checkTime() {
    bool time = false;
    if (Window::getInstance() -> getDevice() -> getTimer() -> getTime() - startTime >= maxDur) {
        time = true;
    }
    return time;
}

void Timer::start() {
    startTime = Window::getInstance() -> getDevice() -> getTimer() -> getTime();
}


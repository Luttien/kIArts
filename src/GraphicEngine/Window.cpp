#include "Window.h"

Window* Window::instance = 0;

Window::Window(int width, int height) {
    screenWidth = width;
    screenHeight = height;

    irr::SIrrlichtCreationParameters parameters;
	parameters.DriverType = video::EDT_OPENGL;
	parameters.WindowSize = core::dimension2d<u32>(width, height);
    device = createDeviceEx(parameters);
    if (device == 0) {
        exit(0);
    }
    //disable mouse cursor
    device -> getCursorControl() -> setVisible(false);

    driver = device -> getVideoDriver();
    driver -> setTextureCreationFlag(video::ETCF_ALWAYS_32_BIT, true);

    scene = device -> getSceneManager();

    gui = device -> getGUIEnvironment();

    for (s32 i = 0; i < irr::gui::EGDC_COUNT; ++i) {
        video::SColor col = gui -> getSkin() -> getColor((gui::EGUI_DEFAULT_COLOR)i);
        col.setAlpha(225);
        gui -> getSkin() -> setColor((gui::EGUI_DEFAULT_COLOR)i, col);
    }

    dtThen = device -> getTimer() -> getTime();
}

Window::~Window() {
    delete device;
}

Window* Window::getInstance() {
    if (instance == 0) {
        instance = new Window(1280, 720);
    }
    return instance;
}

void Window::beginScene(){
    float now = device -> getTimer() -> getTime();
    deltaTime = (float)(now - dtThen) / 1000.f; // Time in seconds
    dtThen = now;
    driver -> beginScene(true, true, 0 );
}

void Window::endScene(){
    scene -> drawAll();
    gui -> drawAll();
    driver -> endScene();
}

bool Window::isOpen(){
    return device -> run();
}

bool Window::isReady(){
    return device -> isWindowActive();
}

void Window::close(){
    device -> drop();
}

IrrlichtDevice* Window::getDevice() {
    return device;
}

video::IVideoDriver* Window::getVideoDriver(){
    return driver;
}

scene::ISceneManager* Window::getSceneManager(){
    return scene;
}

gui::IGUIEnvironment* Window::getGUIEnvironment(){
    return gui;
}

int Window::getScreenWidth(){
    return screenWidth;
}

int Window::getScreenHeight(){
    return screenHeight;
}

float Window::getDeltaTime(){
    return deltaTime;
}
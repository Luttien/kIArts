#ifndef WINDOW_H
#define WINDOW_H

#include <irrlicht/irrlicht.h>
#include "../MathEngine/Types.h"

using namespace irr;

class Window {
    
    public:
        Window(i32, i32);
        virtual ~Window();

        static Window* getInstance();

        void beginScene();
        void endScene();

        bool isOpen();
        bool isReady();
        void close();

        //GETTERS
        IrrlichtDevice* getDevice();
        video::IVideoDriver* getVideoDriver();
        scene::ISceneManager* getSceneManager();
        gui::IGUIEnvironment* getGUIEnvironment();

        i32 getScreenWidth();
        i32 getScreenHeight();
        f32 getDeltaTime();  

        //SETTERS
        void setEventReceiver(IEventReceiver*);
        
    private:
        static Window* instance;

        i32 screenWidth;
        i32 screenHeight;

        IrrlichtDevice* device;
        video::IVideoDriver* driver;
        scene::ISceneManager* scene;
        gui::IGUIEnvironment* gui;

        f32 dtThen;
        f32 deltaTime;
};

#endif
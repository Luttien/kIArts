#ifndef WINDOW_H
#define WINDOW_H

#include <irrlicht/irrlicht.h>

using namespace irr;

class Window {
    
    public:
        Window(int, int);
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

        int getScreenWidth();
        int getScreenHeight();
        float getDeltaTime();  

        //SETTERS
        void setEventReceiver(IEventReceiver*);
        
    private:
        static Window* instance;

        int screenWidth;
        int screenHeight;

        IrrlichtDevice* device;
        video::IVideoDriver* driver;
        scene::ISceneManager* scene;
        gui::IGUIEnvironment* gui;

        float dtThen;
        float deltaTime;
};

#endif
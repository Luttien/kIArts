#ifndef USERINPUT_H
#define USERINPUT_H

#include <irrlicht/irrlicht.h>
#include "../Enumeration.h"

using namespace irr;

class UserInput : public IEventReceiver {
    
    public:
        UserInput();
        virtual ~UserInput();

        bool OnEvent(const SEvent& event);

        bool keyPressed(char keycode);
        bool keyDown(char keycode);
        bool keyUp(char keycode);
        bool keyReleased(char keycode);

        void endEventProcess();
        void startEventProcess();

    private:
		Enumeration::keyStatesENUM keyState[KEY_KEY_CODES_COUNT];
	    Enumeration::processStateENUM processState;
};

#endif
#ifndef USERINPUT_H
#define USERINPUT_H

class UserInput {
    
    public:
        UserInput();
        virtual ~UserInput();

        static UserInput* getInstance();

    private:
        static UserInput* instance;
};

#endif
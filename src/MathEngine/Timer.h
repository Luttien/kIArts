#ifndef TIMER_H
#define TIMER_H

#include "Types.h"

class Timer {

    public:
        Timer(i32 newMaxDur);
        ~Timer();

        bool checkTime();
        void start();

    private:
        i32 startTime;
        i32 maxDur;
};
    
#endif 
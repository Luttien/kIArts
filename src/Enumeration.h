#ifndef ENUMERATION_H
#define ENUMERATION_H

#define IA_CITY_HALL_X 2000
#define IA_CITY_HALL_Z 2000

#define HUMAN_CITY_HALL_X 8000
#define HUMAN_CITY_HALL_Z 8000

class Enumeration {
    
    public:
        enum keyStatesENUM {
            UP, 
            DOWN, 
            PRESSED, 
            RELEASED
        };

        enum processStateENUM {
            STARTED, 
            ENDED
        };

    private:
        
};

#endif
#ifndef SECTOR_H
#define SECTOR_H

class Sector {
    
    public:
        Sector();
        virtual ~Sector();

        Sector* getPreviousSector();
        Sector* getNextSector();

    private:
        Sector* previousSector;
        Sector* nextSector;
};

#endif
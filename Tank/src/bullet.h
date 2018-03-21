#ifndef BULLET_H
#define BULLET_H

#include "helper.h"

class Bullet
{
public:
    Bullet() = delete;
    Bullet(Coord coord, Move move, bool friendlyFire);
    void move();
    Coord getCoord();
private:

    Coord mCoord;
    Move mDirection;
    bool mFriendlyFire;
};

#endif // BULLET_H

#ifndef ENEMYTANK_H
#define ENEMYTANK_H

#include "helper.h"
#include "bullet.h"

class EnemyTank
{
public:
    EnemyTank();
    void draw();
    void move(Coord coord);
    Bullet fire();
private:
    Coord mCoord;
};

#endif // ENEMYTANK_H

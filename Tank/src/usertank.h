#ifndef USERTANK_H
#define USERTANK_H

#include "helper.h"
#include "bullet.h"
class UserTank
{
public:
    UserTank();
    int getHelth();
    void move(Coord coord);
    void damage();
    Bullet fire();
private:
    Coord mCoord;
    int mHelth;
    Move mMove;

};

#endif // USERTANK_H

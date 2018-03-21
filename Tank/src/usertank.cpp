#include <iostream>
#include "usertank.h"
#include "helper.h"

UserTank::UserTank(): mCoord(nConstants::DEFAULDUSERTANKX, nConstants::DEFAULDUSERTANKY)
  ,mHelth(nConstants::HELTH)
  ,mMove(Up)
{

}

int UserTank::getHelth()
{
    return mHelth;
}


void UserTank::move(Coord coord)
{
   mCoord.X = coord.X;
   mCoord.Y = coord.Y;
}

Bullet UserTank::fire()
{
   Bullet bullet(mCoord, mMove, false);
   return bullet;
}

void UserTank::damage()
{
    --mHelth;
}

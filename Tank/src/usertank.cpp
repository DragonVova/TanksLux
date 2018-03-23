#include <iostream>
#include "usertank.h"
#include "helper.h"

UserTank::UserTank():
   mCoord(nConstants::DEFAULDUSERTANKX, nConstants::DEFAULDUSERTANKY)
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

void UserTank::setMove(Move move)
{
    mMove = move;
}

Bullet UserTank::fire()
{
    Coord coord(mCoord.X, mCoord.Y);
    switch (mMove) {
    case Move::Left : --coord.X; break;
    case Move::Right : ++coord.X; break;
    case Move::Up : --coord.Y; break;
    case Move::Down : ++coord.Y; break;
    default:
        break;
    }
   Bullet bullet(coord, mMove, false);
   return bullet;
}

void UserTank::damage()
{
    --mHelth;
}

Coord UserTank::getCoord()
{
    return mCoord;
}

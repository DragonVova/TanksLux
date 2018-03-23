#include "bullet.h"


Bullet::Bullet():mCoord(0,0)
{

}

Bullet::Bullet(Coord coord, Move move, bool friendlyFire):
    mCoord(coord)
  , mDirection(move)
  , mFriendlyFire(friendlyFire)
{

}

void Bullet::move()
{
   switch(mDirection)
   {
   case Move::Up: --mCoord.Y; break;
   case Move::Down: ++mCoord.Y; break;
   case Move::Left: --mCoord.X; break;
   case Move::Right: ++mCoord.X; break;
   default: break;
   }
}

Coord Bullet::getCoord()
{
    return mCoord;
}

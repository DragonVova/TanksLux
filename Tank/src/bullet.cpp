#include "bullet.h"


Bullet::Bullet(Coord coord, Move move, bool friendlyFire): mCoord(coord)
  , mDirection(move)
  , mFriendlyFire(friendlyFire)
{

}

void Bullet::move()
{
   switch(mDirection)
   {
   case Move::Up: --mCoord.X; break;
   case Move::Down: ++mCoord.X; break;
   case Move::Left: --mCoord.Y; break;
   case Move::Right: ++mCoord.Y; break;
   default: break;
   }
}

Coord Bullet::getCoord()
{
    return mCoord;
}

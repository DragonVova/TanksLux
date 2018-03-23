#include "enemytank.h"
#include "helper.h"

EnemyTank::EnemyTank():
    mCoord(nConstants::TESTENEMYX, nConstants::TESTENEMYY)
  , mMove(Right)
{

}

void EnemyTank::move(Coord coord)
{
    mCoord.X = coord.X;
    mCoord.Y = coord.Y;
}

Bullet EnemyTank::fire()
{
    Bullet bullet(mCoord, mMove, false);
    return bullet;
}

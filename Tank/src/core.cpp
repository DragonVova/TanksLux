#include <iostream>
#include "core.h"
#include <conio.h>

//Core::Core()
//{
//   start();
//}

void Core::userInput()
{
    Move userDirection = Move::Stop;
    Coord mCoord =  mUserTank.getCoord();
    if (_kbhit())
    {
        switch (_getch())
        {
        case nControll::LEFT : userDirection = Left; break;
        case nControll::RIGHT: userDirection = Right; break;
        case nControll::DOWN: userDirection = Down; break;
        case nControll::UP: userDirection = Up; break;
        case nControll::FIRE: userDirection = Fire; break;
        default: break;
        }
    }
    if (Stop != userDirection)
    {
        switch(userDirection)
        {
        case Move::Left :
            mCoord.X -=1;
            mUserTank.setMove(Move::Left);
            if(true == mField.isMove(mCoord))
            {
                mUserTank.move(mCoord);
                mCoord.X +=1;
                mField.clearField(mCoord);
            }
            break;
        case Move::Right :
            mCoord.X +=1;
            mUserTank.setMove(Move::Right);
            if(true == mField.isMove(mCoord))
            {
                mUserTank.move(mCoord);
                mCoord.X -=1;
                mField.clearField(mCoord);
            }
            break;
        case Move::Down :
            mCoord.Y +=1;
            mUserTank.setMove(Move::Down);
            if(true == mField.isMove(mCoord))
            {
                mUserTank.move(mCoord);
                mCoord.Y -=1;
                mField.clearField(mCoord);
            }
            break;
        case Move::Up :
            mCoord.Y -=1;
            mUserTank.setMove(Move::Up);
            if(true == mField.isMove(mCoord))
            {
                mUserTank.move(mCoord);
                mCoord.Y +=1;
                mField.clearField(mCoord);
            }
            break;
        case Move::Fire :
            mBullet = mUserTank.fire();
            break;
            default: break;
        }
    }

}

void Core::enemyMove()
{

}

void Core::bulletMove()
{
   mBullet.move();
}

void Core::deleteTank(Coord& coord)
{

}

void Core::deleteBullet()
{

}

void Core::start()
{
   userInput();
   mField.clearField(mBullet.getCoord());
   bulletMove();
   mField.drawField();
}


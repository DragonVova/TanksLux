#ifndef CORE_H
#define CORE_H

#include "field.h"
#include "bullet.h"
#include "usertank.h"
#include "enemytank.h"

class Core
{
private:
    Field mField;
    int enemyTankList;// !
    UserTank mUserTank;
    Bullet mBullet;
    bool checkIsGameOver;
private:
    void userInput();
    void userMove();
    void enemyMove();
    void bulletMove();
    void deleteTank(Coord& coord);
    void deleteBullet();
public:
    void start();
};

#endif // CORE_H

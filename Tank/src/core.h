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
    int enemyTankList[];// !
    UserTank mUserTank;
    Bullet mBullet;
    bool checkIsGameOver;
private:
    Move userInput();
    void userMove();
    void enemyMove();
    void bulletMove();
    void deleteTank(Coord coord);
public:
    //Core();
    void start();
};

#endif // CORE_H

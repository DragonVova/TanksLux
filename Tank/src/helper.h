#ifndef HELPER_H
#define HELPER_H

namespace nConstants
{
    const int HEIGHT           = 27;
    const int WIDTH            = 60;
    const int DEFAULDUSERTANKX = 5;
    const int DEFAULDUSERTANKY = 5;
    const int TESTENEMYX       = 10;
    const int TESTENEMYY       = 10;
    const int HELTH            = 3;
    const int GOLDPOSX         = 30;
    const int GOLDPOSY         = 1;
}

namespace nFieldobjects
{
    const int USERTANK         = 2;
    const int ENEMYTANK        = 6;
    const int DEMOLISHEDWALL   = 4;
    const int OBSTACLES        = 1;
    const int CLEARFIELD       = 0;
    const int GOLD             = 5;
    const int BULLET           = 7;
}

namespace nRuinwall
{
    const int WALL_Y1           = 1;
    const int WALL_Y2           = 2;
    const int WALL_X1          = 29;
    const int WALL_X2          = 30;
    const int WALL_X3          = 31;
}

namespace nControll
{
    const int LEFT             = 75;
    const int RIGHT            = 77;
    const int DOWN             = 80;
    const int UP               = 72;
    const int FIRE             = 32;
}


struct Coord
{
    int X;
    int Y;
    Coord(int x, int y): X(x), Y(y)
    {

    }
};


enum Move{Stop = 0, Left, Right, Up, Down, Fire};


#endif // HELPER_H

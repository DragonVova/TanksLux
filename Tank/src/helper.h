#ifndef HELPER_H
#define HELPER_H

namespace nConstants
{
    const int HEIGHT           = 27;
    const int WIDTH            = 60;
    const int DEFAULDUSERTANKX = 25;
    const int DEFAULDUSERTANKY = 51;
    const int TESTENEMYX = 10;
    const int TESTENEMYY = 10;
    const int HELTH = 3;
}

namespace nFieldobjects
{
    const int USERTANK         = 2;
    const int ENEMYTANK        = 6;
    const int DEMOLISHEDWALL   = 4;
    const int OBSTACLES        = 1;
    const int CLEARFIELD       = 0;
    const int GOLD             = 5;
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

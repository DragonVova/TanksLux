#include <iostream>
#include "field.h"
#include <windows.h>

Field::Field()
{
    for(int i = 0 ; i < nConstants::HEIGHT; ++i)
    {
        for (int j = 0; j < nConstants::WIDTH; ++j)//i = y, j = x
        {
            //Walls
            if(0 == j ||
               j == nConstants::WIDTH - 1 ||
               0 == i ||
               i == nConstants::HEIGHT - 1 )
            {
                FieldArray[i][j] = nFieldobjects::OBSTACLES;
            }
            else if(i == nConstants::DEFAULDUSERTANKY && j==nConstants::DEFAULDUSERTANKX)
            {
                FieldArray[i][j] = nFieldobjects::USERTANK;
            }
            else if(((i == nRuinwall::WALL_Y2 && j == nRuinwall::WALL_X1)) ||
                   ((i == nRuinwall::WALL_Y2 && j == nRuinwall::WALL_X2))  ||
                   ((i == nRuinwall::WALL_Y2 && j == nRuinwall::WALL_X3))  ||
                   ((i == nRuinwall::WALL_Y1 && j == nRuinwall::WALL_X1))  ||
                   ((i == nRuinwall::WALL_Y1 && j == nRuinwall::WALL_X3)))

            {
                FieldArray[i][j] = nFieldobjects::DEMOLISHEDWALL;
            }
            else if(i == nConstants::GOLDPOSY && j == nConstants::GOLDPOSX)
            {
                FieldArray[i][j] = nFieldobjects::GOLD;
            }
            else if(i == nConstants::TESTENEMYY && j == nConstants::TESTENEMYX)
            {
                FieldArray[i][j] = nFieldobjects::ENEMYTANK;
            }
            else
            {
                FieldArray[i][j] = nFieldobjects::CLEARFIELD;
            }

        }
    }
}

void Field::drawField()
{
    for(int i = 0 ; i < nConstants::HEIGHT; ++i)
    {
        for (int j = 0; j < nConstants::WIDTH; ++j)
        {
            switch(FieldArray[i][j])
            {
            case nFieldobjects::OBSTACLES: std::cout << "#"; break;
            case nFieldobjects::CLEARFIELD: std::cout << " ";break;
            case nFieldobjects::USERTANK: std::cout << "@"; break;
            case nFieldobjects::BULLET: std::cout << "*"; break;
            case nFieldobjects::ENEMYTANK: std::cout << "&"; break;
            case nFieldobjects::DEMOLISHEDWALL: std::cout << "#"; break;
            case nFieldobjects::GOLD: std::cout << "G"; break;
            default: break;
            }
        }
        std::cout<<std::endl;
    }
}

void Field::setcur(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

bool Field::isMove(const Coord &coord)
{
    bool isMove = false;
   if(FieldArray[coord.Y][coord.X] == nFieldobjects::CLEARFIELD)
   {
       isMove = true;
       FieldArray[coord.Y][coord.X] = nFieldobjects::USERTANK;
   }
   return isMove;
}

bool Field::isBulletMove(const Coord &coord)
{
    bool isBulletMove = false;
    if (FieldArray[coord.Y][coord.X] == nFieldobjects::CLEARFIELD)
    {
        isBulletMove = true;
        FieldArray[coord.Y][coord.X] = nFieldobjects::BULLET;
    }
    return isBulletMove;
}

void Field::clearField(const Coord& coord)
{
    FieldArray[coord.Y][coord.X] = nFieldobjects::CLEARFIELD;
}

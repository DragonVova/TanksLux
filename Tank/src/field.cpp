#include <iostream>
#include "field.h"
#include <windows.h>

Field::Field()
{
    for(int i = 0 ; i < nConstants::HEIGHT; ++i)
    {
        for (int j = 0; j < nConstants::WIDTH; ++j)
        {
            if(0 == j ||
               j == nConstants::WIDTH - 1 ||
               0 == i ||
               i == nConstants::HEIGHT - 1 )
            {
                FieldArray[i][j] = nFieldobjects::OBSTACLES;
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
            case nFieldobjects::ENEMYTANK: std::cout << "&"; break;
            case nFieldobjects::DEMOLISHEDWALL: std::cout << "#"; break;
            case nFieldobjects::GOLD: std::cout << "G"; break;
            default: break;
            }
        }
        std::cout<<std::endl;
    }
}

bool Field::isMove()
{

}

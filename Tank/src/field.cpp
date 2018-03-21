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
                FieldArray[i][j] = nConstants::OBSTACLES;
            }
            else
            {
                FieldArray[i][j] = nConstants::CLEARFIELD;
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
            case nFieldobjects::USERTANK: std::cout<< "*"; break;
            default: break;
            }
            if(FieldArray[i][j] == nConstants::OBSTACLES)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout<<std::endl;
    }
}

bool Field::isMove()
{

}

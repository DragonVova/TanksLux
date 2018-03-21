#include <iostream>
#include <windows.h>
#include "drawmap.h"

DrawMap::DrawMap()
{

}

void DrawMap::SetCursor(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void DrawMap::PaintMap()
{
   SetCursor(0,0);
   //system("cls");
   for(int i=0; i<width+1; ++i)
   {
       std::cout<<"#";
   }
   std::cout<<std::endl;


   for(int i=0; i<height; i++)
   {
       for(int k=0; k<width; ++k)
       {
           if (k == 0 || k == width-1)
               std::cout<<"#";
           std::cout<<" ";
       }
       std::cout<<std::endl;
   }


   for(int i=0; i<width+1; ++i)
   {
       std::cout<<"#";
   }
   std::cout<<std::endl;
}

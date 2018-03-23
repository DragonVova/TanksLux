#include <iostream>
#include <stdio.h>
#include <field.h>
#include <core.h>
#include <usertank.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void setcur(int x, int y);
int main()
{
   Field obj_Field;


    Core obj_Core;
    while(true)
    {
    obj_Core.start();
    //system("cls");
    obj_Field.setcur(0,0);
    }


    return 0;
}




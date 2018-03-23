#ifndef FIELD_H
#define FIELD_H

#include "helper.h"

class Field
{
public:
    Field();
    void drawField();
    void setcur(int x, int y);//установка курсора на позицию  x y
    bool isMove(const Coord& coord);
    bool isBulletMove(const Coord& coord);
    void clearField(const Coord& coord);
private:
    int FieldArray[nConstants::HEIGHT][nConstants::WIDTH];
};

#endif // FIELD_H

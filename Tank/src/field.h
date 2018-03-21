#ifndef FIELD_H
#define FIELD_H

#include "helper.h"

class Field
{
public:
    Field();
    void drawField();
    bool isMove();
private:
    int FieldArray[nConstants::HEIGHT][nConstants::WIDTH];
};

#endif // FIELD_H

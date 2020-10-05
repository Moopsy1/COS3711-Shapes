#ifndef SQUARE_H
#define SQUARE_H

#include "shape1property.h"

class Square : public Shape1Property
{
public:
    Square(int penWidth, QColor penColor, QColor fillColor, int p1);
    void draw();

};

#endif // SQUARE_H

#ifndef SQUARE_H
#define SQUARE_H

#include "shape1property.h"

class Square : public Shape1Property
{
public:
    Square(int penWidth, QColor penColor, QColor fillColor, int p1);
    void draw(Canvas &c);
    QStringList toString();


};

#endif // SQUARE_H

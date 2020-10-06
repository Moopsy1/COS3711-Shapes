#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape1property.h"

class Circle : public Shape1Property
{
public:
    Circle(int penWidth, QColor penColor, QColor fillColor, int p1);
    void draw(Canvas &c);
};

#endif // CIRCLE_H

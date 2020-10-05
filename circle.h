#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape1property.h"

class Circle : public Shape1Property
{
public:
    Circle(int penWidth, QColor penColor, QColor fillColor, int p1);
    void draw();
};

#endif // CIRCLE_H

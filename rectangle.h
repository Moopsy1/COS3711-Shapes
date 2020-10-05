#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape2property.h"

class RectAngle : public Shape2Property
{
public:
    RectAngle(int penWidth, QColor penColor, QColor fillColor, int p1, int p2);
    void draw();
};

#endif // RECTANGLE_H

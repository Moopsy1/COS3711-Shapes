#ifndef ELIPSE_H
#define ELIPSE_H
#include "shape2property.h"

class Elipse : public Shape2Property
{
public:
    Elipse(int penWidth, QColor penColor, QColor fillColor, int p1, int p2);
    void draw(Canvas &c);
};

#endif // ELIPSE_H

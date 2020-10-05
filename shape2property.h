#ifndef SHAPE2PROPERTY_H
#define SHAPE2PROPERTY_H
#include "abstractshape.h"

class Shape2Property : public AbstractShape
{
public:
    Shape2Property(int penWidth, QColor penColor, QColor fillColor, int p1, int p2);
protected:
    int property1, property2;
};

#endif // SHAPE2PROPERTY_H

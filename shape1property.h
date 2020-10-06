#ifndef SHAPE1PROPERTY_H
#define SHAPE1PROPERTY_H
#include "abstractshape.h"

class Shape1Property : public AbstractShape
{
public:
    Shape1Property(int penWidth, QColor penColor, QColor fillColor, int p1);

    int getProperty1() const;
    void setProperty1(int value);
    QStringList toString();
    virtual ~Shape1Property(){}

protected:
    int property1;

};

#endif // SHAPE1PROPERTY_H

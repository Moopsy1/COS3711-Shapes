#ifndef SHAPE2PROPERTY_H
#define SHAPE2PROPERTY_H
#include "abstractshape.h"

class Shape2Property : public AbstractShape
{
public:
    Shape2Property(int penWidth, QColor penColor, QColor fillColor, int p1, int p2);
    int getProperty1() const;
    void setProperty1(int value);
    virtual ~Shape2Property(){}
    QStringList toString();

    int getProperty2() const;
    void setProperty2(int value);

protected:
    int property1;
    int property2;
};

#endif // SHAPE2PROPERTY_H

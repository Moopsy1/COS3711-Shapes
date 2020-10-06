#include "shape1property.h"


Shape1Property::Shape1Property(int penWidth, QColor penColor, QColor fillColor, int p1)
    :AbstractShape(penWidth, penColor, fillColor), property1(p1)
{
    //qDebug() << "used Shape1 Property constructor";
}
int Shape1Property::getProperty1() const
{
    return property1;
}

void Shape1Property::setProperty1(int value)
{
    property1 = value;
}


#include "shape2property.h"

Shape2Property::Shape2Property(int penWidth, QColor penColor, QColor fillColor, int p1, int p2)
    :AbstractShape(penWidth, penColor, fillColor), property1(p1), property2(p2)
{
    //qDebug() << "used Shape1 Property constructor";
}
int Shape2Property::getProperty1() const
{
    return property1;
}

void Shape2Property::setProperty1(int value)
{
    property1 = value;
}

QStringList Shape2Property::toString()
{
    return QStringList() << getType()
                         << QString::number(getPenWidth())
                         << getPenColor().name()
                         << getFillColor().name()
                         << QString::number(getProperty1())
                         << QString::number(getProperty2());

}
int Shape2Property::getProperty2() const
{
    return property2;
}

void Shape2Property::setProperty2(int value)
{
    property2 = value;
}



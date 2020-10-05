#include "shape2property.h"

Shape2Property::Shape2Property(int penWidth, QColor penColor, QColor fillColor, int p1, int p2)
    :AbstractShape(penWidth, penColor, fillColor), property1(p1), property2(p2)
{
    //qDebug() << "used Shape1 Property constructor";
}

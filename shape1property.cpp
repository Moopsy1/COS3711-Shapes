#include "shape1property.h"


Shape1Property::Shape1Property(int penWidth, QColor penColor, QColor fillColor, int p1)
    :AbstractShape(penWidth, penColor, fillColor), property1(p1)
{
    //qDebug() << "used Shape1 Property constructor";
}

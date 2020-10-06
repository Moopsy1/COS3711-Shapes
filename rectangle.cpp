#include "rectangle.h"

RectAngle::RectAngle(int penWidth, QColor penColor, QColor fillColor, int p1, int p2)
    : Shape2Property(penWidth, penColor, fillColor, p1, p2)
{
    setType("Rectangle");
    //qDebug() << "used Rectangle constructor";
}

void RectAngle::draw(Canvas &c)
{

    c.setDetails(getProperty1(), getProperty2(), getType(), getPenWidth(), getPenColor(), getFillColor());

}

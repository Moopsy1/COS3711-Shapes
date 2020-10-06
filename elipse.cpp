#include "elipse.h"

Elipse::Elipse(int penWidth, QColor penColor, QColor fillColor, int p1, int p2)
    : Shape2Property(penWidth, penColor, fillColor, p1, p2)
{
    setType("Elipse");
    //qDebug() << "used Circle constructor";
}

void Elipse::draw(Canvas &c)
{
    c.setDetails(getProperty1(), getProperty2(), getType(), getPenWidth(), getPenColor(), getFillColor());

}

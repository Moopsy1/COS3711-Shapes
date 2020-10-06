#include "circle.h"



Circle::Circle(int penWidth, QColor penColor, QColor fillColor, int p1)
    : Shape1Property(penWidth, penColor, fillColor, p1)
{
    setType("Circle");
    //qDebug() << "used Circle constructor";
}

void Circle::draw(Canvas &c)
{
    c.setDetails(getProperty1(), 0, getType(), getPenWidth(), getPenColor(), getFillColor());


//    qDebug() << "We will draw a" << typeid(this).name()
//             << " with property1: " << property1 <<endl
//             << "at Pen width: " << penWidth <<endl
//             << "at Pen Color: " << penColor <<endl
//             << "at fillColor: " << fillColor <<endl;

}

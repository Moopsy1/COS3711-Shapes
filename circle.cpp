#include "circle.h"



Circle::Circle(int penWidth, QColor penColor, QColor fillColor, int p1)
    : Shape1Property(penWidth, penColor, fillColor, p1)
{
    //qDebug() << "used Circle constructor";
}

void Circle::draw()
{

    qDebug() << "We will draw a" << typeid(this).name()
             << " with property1: " << property1 <<endl
             << "at Pen width: " << penWidth <<endl
             << "at Pen Color: " << penColor <<endl
             << "at fillColor: " << fillColor <<endl;

}

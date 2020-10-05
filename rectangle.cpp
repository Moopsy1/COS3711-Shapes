#include "rectangle.h"

RectAngle::RectAngle(int penWidth, QColor penColor, QColor fillColor, int p1, int p2)
    : Shape2Property(penWidth, penColor, fillColor, p1, p2)
{
    //qDebug() << "used Rectangle constructor";
}

void RectAngle::draw()
{

    qDebug() << "We will draw a" << typeid(this).name()
             << " with property1: " << property1 <<endl
             << " with property2: " << property2 <<endl
             << "at Pen width: " << penWidth <<endl
             << "at Pen Color: " << penColor <<endl
             << "at fillColor: " << fillColor <<endl;
}

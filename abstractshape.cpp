#include "abstractshape.h"



AbstractShape::AbstractShape(int penWidth, QColor penColor, QColor fillColor)
    :penWidth(penWidth), penColor(penColor), fillColor(fillColor)
{
    //qDebug() << "used abstract shapes constructor";
}

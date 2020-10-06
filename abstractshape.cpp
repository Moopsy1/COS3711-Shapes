#include "abstractshape.h"



AbstractShape::AbstractShape(int penWidth, QColor penColor, QColor fillColor)
    :penWidth(penWidth), penColor(penColor), fillColor(fillColor)
{
    //qDebug() << "used abstract shapes constructor";
}
int AbstractShape::getPenWidth() const
{
    return penWidth;
}

void AbstractShape::setPenWidth(int value)
{
    penWidth = value;
}
QColor AbstractShape::getPenColor() const
{
    return penColor;
}

void AbstractShape::setPenColor(const QColor &value)
{
    penColor = value;
}
QColor AbstractShape::getFillColor() const
{
    return fillColor;
}

void AbstractShape::setFillColor(const QColor &value)
{
    fillColor = value;
}
QString AbstractShape::getType() const
{
    return type;
}

void AbstractShape::setType(const QString &value)
{
    type = value;
}





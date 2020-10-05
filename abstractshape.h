#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H
#include <QColor>
#include <QDebug>
#include <typeinfo>
class AbstractShape
{
public:
    AbstractShape(int penWidth, QColor penColor, QColor fillColor);
    virtual void draw() = 0;

protected:
    int penWidth;
    QColor penColor, fillColor;

};

#endif // ABSTRACTSHAPE_H

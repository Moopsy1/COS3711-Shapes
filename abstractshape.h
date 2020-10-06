#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H
#include <QColor>
#include <QDebug>
#include <typeinfo>
//#include <QTextEdit>
#include <canvas.h>


class AbstractShape
{
public:
    AbstractShape(int penWidth, QColor penColor, QColor fillColor);
    virtual void draw(Canvas &c) = 0;
    virtual QStringList toString() = 0;
    virtual ~AbstractShape(){}

    int getPenWidth() const;
    void setPenWidth(int value);

    QColor getPenColor() const;
    void setPenColor(const QColor &value);

    QColor getFillColor() const;
    void setFillColor(const QColor &value);

    QString getType() const;
    void setType(const QString &value);

protected:
    int penWidth;
    QColor penColor, fillColor;
    QString type;

};

#endif // ABSTRACTSHAPE_H

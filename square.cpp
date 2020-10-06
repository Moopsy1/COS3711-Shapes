#include "square.h"



Square::Square(int penWidth, QColor penColor, QColor fillColor, int p1)
    : Shape1Property(penWidth, penColor, fillColor, p1)
{
    setType("Square");
    //qDebug() << "used Square constructor";
}

void Square::draw(Canvas &c)
{
    //QRectF rect((this->size().width()-m_prop1)/2, (this->size().height()-m_prop1)/2, m_prop1, m_prop1);
    //qDebug() << "called Draw with"<<typeid(this).name()
     //           <<getProperty1() << 0 << typeid(this).name()<< getPenWidth()<< getPenColor()<< getFillColor();

    c.setDetails(getProperty1(), 0, getType(), getPenWidth(), getPenColor(), getFillColor());
//    c.setProp1(getProperty1());
//    QPen p;
//    p.setColor(getPenColor());
//    p.setWidth(getPenWidth());
//    if(getPenWidth() == 0) p.setStyle(Qt::NoPen);
//    else p.setStyle(Qt::SolidLine);
//    QBrush b;
//    b.setColor(getFillColor());
//    b.setStyle(Qt::SolidPattern);
//    c.setPen(p);
//    c.setBrush(b);

    //QRectF rect((c->size().width()-getProperty1())/2, (this->size().height()-getProperty1())/2, getProperty1(), getProperty1());
    //c.getP();

}

//QStringList Square::toString()
//{
//    return QStringList() << "word1" << "word2";

//}



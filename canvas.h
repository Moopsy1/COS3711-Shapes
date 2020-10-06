#ifndef CANVAS_H
#define CANVAS_H
#include <QBrush>
#include <QPen>
//#include <QPixmap>
#include <QWidget>
//#include <abstractshape.h>


class Canvas : public QWidget
{
    Q_OBJECT

public:

    explicit Canvas(QWidget *parent = 0);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    int prop1() const;
    void setProp1(int prop1);

    int prop2() const;
    void setProp2(int prop2);

    QPen pen() const;
    void setPen(const QPen &pen);

    QBrush brush() const;
    void setBrush(const QBrush &brush);

    QPainter *getP() const;
    void setP(QPainter *value);

signals:

public slots:
    void setDetails(int prop1, int prop2, QString shape, int penW, QColor penC, QColor fill);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QPainter *p;
    //Shape shape;
    QPen m_pen;
    QBrush m_brush;
    //QColor m_fill;
    //QPixmap pixmap;
    int m_prop1;
    int m_prop2;
    QString m_shape;


};

#endif // CANVAS_H

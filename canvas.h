#ifndef CANVAS_H
#define CANVAS_H
#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>


class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
signals:

public slots:
    void setDetails(int prop1, int prop2, QString shape, int penW, QColor penC, QColor fill);

protected:
    void paintEvent(QPaintEvent *event);

private:
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

#ifndef SHAPES_H
#define SHAPES_H

#include <QMainWindow>
#include "abstractshape.h"
#include "canvas.h"
#include <QtWidgets>
#include <shapeslist.h>
#include "xmlhandler.h"
//#include "square.h"
//#include <QSharedPointer>


namespace Ui {
class Shapes;
}

class Shapes : public QMainWindow
{
    Q_OBJECT

public:
    explicit Shapes(QWidget *parent = 0);
    ~Shapes();

private slots:
    void on_createShape_clicked();

    void on_Previous_clicked();

    void on_Next_clicked();

    void on_Savestate_clicked();

    void on_Loadstate_clicked();

private:
    QSharedPointer<AbstractShape> shape;
    Canvas *canvas;
    Ui::Shapes *ui;
    QTextEdit *text;
    ShapesList *shapeList;
    int index;
    XMLHAndler doc;

};

#endif // SHAPES_H

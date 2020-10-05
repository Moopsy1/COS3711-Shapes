#ifndef SHAPES_H
#define SHAPES_H

#include <QMainWindow>
#include "abstractshape.h"
#include "canvas.h"
#include <QtWidgets>


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

private:
    AbstractShape *shape;
    Canvas *canvas;
    Ui::Shapes *ui;
    QTextEdit *text;

    
};

#endif // SHAPES_H

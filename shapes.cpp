#include "shapes.h"
#include "ui_shapes.h"
#include "circle.h"
#include "square.h"
#include "elipse.h"
#include "rectangle.h"
#include "canvas.h"
#include <QWidget>

Shapes::Shapes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Shapes)
{
    ui->setupUi(this);
    canvas = new Canvas;
    ui->MainLayout->addWidget(canvas);

    text = new QTextEdit;

    QStringList colorNames = QColor::colorNames();
    ui->fillColCombo->addItems(colorNames);
    ui->penColCombo->addItems(colorNames);
    //ui->prop1Spinbox->
    ui->penColCombo->setCurrentText("black");


    //    }
}

Shapes::~Shapes()
{
    delete ui;
}

void Shapes::on_createShape_clicked()
{

    QColor penColor(ui->penColCombo->currentText());
    QColor fillColor(ui->fillColCombo->currentText());
    int penWidth = ui->penWidthCombo->value();
    int prop1 = ui->prop1Spinbox->value();
    int prop2 = ui->prop2Spinbox->value();
    QString shape_type = ui->shapeCombo->currentText();


    if(shape_type == "Circle"){
        shape = new Circle(penWidth,
                           penColor,
                           fillColor,
                           prop1);
    }
    else if (shape_type == "Square"){

//        shape = new Square(penWidth,
//                           penColor,
//                           fillColor,
//                           prop1);


    }
    else if (shape_type == "Elipse"){
        shape = new Elipse(penWidth,
                           penColor,
                           fillColor,
                           prop1,
                           prop2);
        qDebug() << "in shapes .cpp " << typeid(shape).name();
    }
    else if (shape_type == "Rectangle"){
        shape = new RectAngle(penWidth,
                              penColor,
                              fillColor,
                              prop1,
                              prop2);
    }
    //canvas->setShape(shape);

    canvas->setDetails(prop1, prop2, shape_type, penWidth, penColor, fillColor);
}

#include "shapes.h"
#include "ui_shapes.h"
#include "circle.h"
#include "square.h"
#include "elipse.h"
#include "rectangle.h"
#include "canvas.h"
//#include <QWidget>

Shapes::Shapes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Shapes)
{
    ui->setupUi(this);
    canvas = new Canvas;
    index = 0;
    //text = new QTextEdit("Index:");
    ui->MainLayout->addWidget(canvas);
    //ui->MainLayout->addWidget(text);

    QStringList colorNames = QColor::colorNames();
    ui->fillColCombo->addItems(colorNames);
    ui->penColCombo->addItems(colorNames);
    ui->penColCombo->setCurrentText("black");
    shapeList = shapeList->getinstance();

    if(!shapeList->isEmpty()){
        ui->Next->setEnabled(true);
    }
    doc.LoadFromFile(*shapeList);
    if(shapeList->count()>0){
    if(shapeList->at(index) != shapeList->last()) ui->Next->setEnabled(true);
    if(index != 0) ui->Previous->setEnabled(true);
    shapeList->at(index)->draw(*canvas);
    }
    //text->setText(QString::number(shapeList->count()));
}

Shapes::~Shapes()
{
    doc.update_DOM(*shapeList);
    doc.SaveToFile();
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
        shape = QSharedPointer<Circle>( new Circle(penWidth,
                                                   penColor,
                                                   fillColor,
                                                   prop1));
    }
    else if (shape_type == "Square"){
        shape = QSharedPointer<Square>( new Square(penWidth,
                                                   penColor,
                                                   fillColor,
                                                   prop1));

    }
    else if (shape_type == "Elipse"){
        shape = QSharedPointer<Elipse>( new Elipse(penWidth,
                                                   penColor,
                                                   fillColor,
                                                   prop1,
                                                   prop2));
        //        qDebug() << "in shapes .cpp " << typeid(shape).name();
    }
    else if (shape_type == "Rectangle"){
        shape = QSharedPointer<RectAngle>( new RectAngle(penWidth,
                                                         penColor,
                                                         fillColor,
                                                         prop1,
                                                         prop2));
    }
    qDebug() <<"index is" << index;
    if(shapeList->empty()){
        qDebug() << "shapeList is empty we append";
        shapeList->append(shape);
    }
    else if (shapeList->at(index) == shapeList->last()) {
        qDebug() << "Were at the last index we append";
        shapeList->append(shape);
        index++;
    }
    else{
        qDebug() << "Were in the list we replace";
        shapeList->replace(index, shape);
    }
    //qDebug() << shape->toString();
    qDebug() << shapeList->at(index)->toString();

    if(shapeList->at(index) != shapeList->last()) ui->Next->setEnabled(true);
    if(index != 0) ui->Previous->setEnabled(true);
    shapeList->at(index)->draw(*canvas);
    text->setText(QString::number(shapeList->count()));

}

void Shapes::on_Previous_clicked()
{
    index--;
    shapeList->at(index)->draw(*canvas);
    if(index== 0)ui->Previous->setEnabled(false);
    if(shapeList->at(index) == shapeList->last()) ui->Next->setEnabled(false);
    else ui->Next->setEnabled(true);

}

void Shapes::on_Next_clicked()
{
    index++;
    shapeList->at(index)->draw(*canvas);
    if(shapeList->at(index) == shapeList->last()) ui->Next->setEnabled(false);
    if(index != 0)ui->Previous->setEnabled(true);
}

void Shapes::on_Savestate_clicked()
{
    shapeList->createMemento();
}

void Shapes::on_Loadstate_clicked()
{

    shapeList->clear();
    shapeList->setMemento();

    index = 0;
    shapeList->at(index)->draw(*canvas);
    if(index== 0)ui->Previous->setEnabled(false);
    if(shapeList->at(index) == shapeList->last()) ui->Next->setEnabled(false);
    else ui->Next->setEnabled(true);
}

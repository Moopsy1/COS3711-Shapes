#ifndef XMLHANDLER_H
#define XMLHANDLER_H
#include <QDomDocument>
#include <QtCore>
#include "abstractshape.h"
#include "square.h"
#include "elipse.h"
#include "rectangle.h"
#include "circle.h"
#include "shapeslist.h"
#include <QDebug>

class XMLHAndler
{
public:
    void ShapeToNode(AbstractShape &s);
    void SaveToFile();
    void LoadFromFile(ShapesList &List);
    void update_DOM(ShapesList &List);
    //void load from file
    XMLHAndler();
private:
    QDomDocument *doc;
};

#endif // XMLHANDLER_H

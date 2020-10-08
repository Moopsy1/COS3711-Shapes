#include "xmlhandler.h"

void XMLHAndler::ShapeToNode(AbstractShape &s)
{
    QDomElement sh = doc->createElement("shape");
    QStringList shLst = s.toString();
    sh.setAttribute("type", shLst.at(0));
    sh.setAttribute("pw", shLst.at(1));
    sh.setAttribute("pc", shLst.at(2));
    sh.setAttribute("fc", shLst.at(3));
    sh.setAttribute("p1", shLst.at(4));
    if(s.getType() == "Elipse" || s.getType() == "Rectangle")
        sh.setAttribute("p2", shLst.at(5));
    else {
        sh.setAttribute("p2", "");
    }

    doc->childNodes().at(0).appendChild(sh);

}

void XMLHAndler::SaveToFile()
{
    QFile file("shapeList.xml");
    if(!file.open(QFile::WriteOnly)){
        qDebug() << "failed opening file"<< QString(file.error());
        return;
    }
    else qDebug() << "File opened successfully"<< QString(file.error());

    //file.resize(0);
    QTextStream ts(&file);
    ts << doc->toString();
    file.close();
}

void XMLHAndler::LoadFromFile(ShapesList &List)
{
    QFile file("shapeList.xml");
    if(!file.open(QFile::ReadWrite)){
        qDebug() <<"Could not open File";
        return;
    }

    if(!doc->setContent(&file)){
        qDebug() <<"Could not set doc"<<file.error();
        file.close();
    }
    //Doc is loaded into memory
    file.close();
    //doc.~QDomDocument();
    QDomElement root = doc->documentElement();
    if(root.tagName() != "shapeList") qDebug() <<"XML root is wrong";
    QDomNode n = root.firstChild();
    while(!n.isNull()){
        QSharedPointer<AbstractShape> shape;
        QDomElement e = n.toElement();
        if(!e.isNull() && e.tagName() == "shape"){
            QString shape_type = e.attribute("type","");
            qDebug() << "found a: "<<shape_type;
            if(shape_type == "Circle"){
                shape = QSharedPointer<Circle>( new Circle(e.attribute("pw","").toInt(),
                                                           QColor(e.attribute("pc","")),
                                                           QColor(e.attribute("fc","")),
                                                           e.attribute("p1","").toInt()));
            }
            else if (shape_type == "Square"){
                shape = QSharedPointer<Square>( new Square(e.attribute("pw","").toInt(),
                                                           QColor(e.attribute("pc","")),
                                                           QColor(e.attribute("fc","")),
                                                           e.attribute("p1","").toInt()));

            }
            else if (shape_type == "Elipse"){
                shape = QSharedPointer<Elipse>( new Elipse(e.attribute("pw","").toInt(),
                                                           QColor(e.attribute("pc","")),
                                                           QColor(e.attribute("fc","")),
                                                           e.attribute("p1","").toInt(),
                                                           e.attribute("p2","").toInt()));
                //        qDebug() << "in shapes .cpp " << typeid(shape).name();
            }
            else if (shape_type == "Rectangle"){
                shape = QSharedPointer<RectAngle>( new RectAngle(e.attribute("pw","").toInt(),
                                                                 QColor(e.attribute("pc","")),
                                                                 QColor(e.attribute("fc","")),
                                                                 e.attribute("p1","").toInt(),
                                                                 e.attribute("p2","").toInt()));
            }
            List.append(shape);

        }
        n = n.nextSibling();
    }
}

void XMLHAndler::update_DOM(ShapesList &List)
{
    doc->clear();
    doc = new QDomDocument("shapeList");
    QDomElement root  = doc->createElement("shapeList");
    doc->appendChild(root);

    if(!List.empty()){
        for (int var = 0; var < List.size(); ++var) {
            qDebug()<<"we will add"<< List.at(var).data()->toString();
            ShapeToNode(*List.at(var).data());
        }
    }
}

XMLHAndler::XMLHAndler()
{
    doc = new QDomDocument("shapeList");
    QDomElement root  = doc->createElement("shapeList");
    doc->appendChild(root);
}

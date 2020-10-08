#ifndef SHAPESLIST_H
#define SHAPESLIST_H
#include <QList>
#include <QStringList>
#include "abstractshape.h"
#include "memento.h"

class ShapesList : public QList<QSharedPointer<AbstractShape> >
{
private:
    ShapesList();
    static ShapesList *OnlyList;
public:
    static ShapesList* getinstance();
    void createMemento();
    void setMemento();
};

#endif // SHAPESLIST_H

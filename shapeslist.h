#ifndef SHAPESLIST_H
#define SHAPESLIST_H
#include <QList>
#include <QStringList>
#include "abstractshape.h"


class ShapesList : public QList<QSharedPointer<AbstractShape> >
{
private:
    ShapesList();
    static ShapesList *OnlyList;
public:
    static ShapesList* getinstance();
};

#endif // SHAPESLIST_H

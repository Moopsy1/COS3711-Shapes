#ifndef SHAPESLIST_H
#define SHAPESLIST_H
#include <QList>
#include <QStringList>

class ShapesList : public QList<QStringList>
{
private:
    ShapesList();
    static ShapesList *OnlyList;
public:
    static ShapesList* getinstance();
};

#endif // SHAPESLIST_H

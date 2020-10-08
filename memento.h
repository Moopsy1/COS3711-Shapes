#ifndef MEMENTO_H
#define MEMENTO_H

class memento
{
private:
    friend class ShapesList;
    memento();
    int getState();
    void setState(int a);
    int state;
};

#endif // MEMENTO_H

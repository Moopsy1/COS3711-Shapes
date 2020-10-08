#include "shapeslist.h"
#include "QPointer"
#include "xmlhandler.h"

ShapesList::ShapesList(){}

ShapesList* ShapesList::OnlyList = NULL;

ShapesList* ShapesList::getinstance(){
    if(OnlyList == NULL){
        OnlyList = new ShapesList;
    }
    return OnlyList;
}

void ShapesList::createMemento()
{
    XMLHAndler caretaker;
    caretaker.update_DOM(*this);
    caretaker.SaveToFile("memento.xml");
}

void ShapesList::setMemento()
{
    XMLHAndler caretaker;
    caretaker.LoadFromFile(*this, "memento.xml");
}

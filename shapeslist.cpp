#include "shapeslist.h"
#include "QPointer"

ShapesList::ShapesList(){}

ShapesList* ShapesList::OnlyList = NULL;

ShapesList* ShapesList::getinstance(){
    if(OnlyList == NULL){
        OnlyList = new ShapesList;
    }
    return OnlyList;
}

#include "shapeslist.h"

ShapesList::ShapesList(){}

ShapesList* ShapesList::OnlyList = nullptr;

ShapesList* ShapesList::getinstance(){
    if(OnlyList == nullptr){
        OnlyList = new ShapesList;
    }
    return OnlyList;
}

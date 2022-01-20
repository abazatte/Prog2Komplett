//
// Created by aazat on 02.06.2021.
//

#include "GeoObjekt.h"


GeoObjekt::~GeoObjekt() = default;

GeoObjekt& GeoObjekt::operator=(GeoObjekt& p) {
    return this->assign(p);
}
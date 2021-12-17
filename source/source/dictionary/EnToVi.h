#pragma once
#include"dictionary.h"

class EnToVi : public dict{
public:
    int id;

    EnToVi(Json::Value dict):
    dict(dict){
        this->id = 1;
    }
};
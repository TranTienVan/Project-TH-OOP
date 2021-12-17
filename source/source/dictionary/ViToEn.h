#pragma once
#include"dictionary.h"

class ViToEn : public dict{
public:
    int id;

    ViToEn(Json::Value dict):
    dict(dict) {
        this->id = 2;
    }

};
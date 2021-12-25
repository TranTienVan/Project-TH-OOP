#pragma once
#include<json/value.h>
#include"../process/process.h"
class AppComponent{
protected:
    AppComponent* parent;
    
    
public:
    
    virtual ~AppComponent() {}
    void SetParent(AppComponent *parent) {
        this->parent = parent;
    }
    AppComponent *GetParent() const {
        return this->parent;
    }
    virtual void Add(AppComponent *component) {}
    
    virtual bool IsComposite() const {
        return false;
    }
    
    virtual Json::Value toJsonValue() {
        return Json::Value();
    };

    virtual void updateToDatabase(Json::Value &obj) {
        return;
    }

    virtual void updateProcess(){
        return;
    }

    virtual int getScore(){
        return 0;
    }

    virtual Process getProcess(){
        return Process();
    }
};
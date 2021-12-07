#pragma once
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
    
};
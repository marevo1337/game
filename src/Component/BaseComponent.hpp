#pragma once

#include <SFML/Graphics.hpp>
#include "Transform.hpp"

class BaseComponent
{
private:
    bool enable = true;
protected:
    Transform transform;
public:
    virtual ~BaseComponent() {};

    bool isEnable();
    void setEnable(bool enable);

    virtual void start() = 0;
    virtual void update() = 0;

    Transform* getTransform();
};

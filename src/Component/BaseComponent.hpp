#pragma once

#include <SFML/Graphics.hpp>

class BaseComponent
{
private:
    bool enable = true;
public:
    virtual ~BaseComponent() {};

    bool isEnable();
    void setEnable(bool enable);

    virtual void start() = 0;
    virtual void update() = 0;
};

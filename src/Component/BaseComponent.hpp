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

    virtual void start(sf::RenderWindow* renderWindow) = 0;
    virtual void update(sf::RenderWindow* renderWindow) = 0;
};

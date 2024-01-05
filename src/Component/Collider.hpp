#pragma once

#include <SFML/Graphics.hpp>
#include "BaseComponent.hpp"

class Collider : public BaseComponent
{
private:
    sf::FloatRect floatRect;
public:
    sf::FloatRect getFloatRect();
    void setFloatRect(sf::FloatRect floatRect);
};

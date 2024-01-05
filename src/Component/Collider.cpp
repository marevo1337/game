#include "Collider.hpp"

sf::FloatRect Collider::getFloatRect()
{
    return floatRect;
}

void Collider::setFloatRect(sf::FloatRect floatRect)
{
    this->floatRect = floatRect;
}

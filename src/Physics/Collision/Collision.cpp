#include "Collision.hpp"

bool Collision::detect(Collider collider, sf::Vector2f point)
{
    return collider.getFloatRect().contains(point);
}

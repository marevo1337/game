#include "Collision.hpp"

bool Collision::detect(Collider collider, sf::Vector2f point)
{
    return collider.getFloatRect().contains(point);
}

bool Collision::detect(Collider colliderA, Collider colliderB)
{
    return colliderA.getFloatRect().intersects(colliderB.getFloatRect());
}

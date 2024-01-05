#pragma once

#include <SFML/Graphics.hpp>
#include "../../Component/Collider.hpp"

class Collision
{
public:
    static bool detect(Collider collider, sf::Vector2f point);
    static bool detect(Collider colliderA, Collider colliderB);
};

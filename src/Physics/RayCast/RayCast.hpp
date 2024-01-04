#pragma once

#include <cmath>
#include <SFML/Graphics.hpp>
#include "RayCastHit.hpp"
#include "../../ElementContainer.hpp"

class RayCast
{
public:
    static RayCastHit cast(
        float angle,
        const sf::Vector2f startPoint,
        float distance = 150
    );
};

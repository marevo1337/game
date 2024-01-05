#pragma once

#include <cmath>
#include <SFML/Graphics.hpp>
#include "RayCastHit.hpp"
#include "../../ElementContainer.hpp"
#include "../../Component/Tag.hpp"
#include "../Collision/Collision.hpp"

class RayCast
{
public:
    static const int defaultDistance = 200;

    static RayCastHit cast(
        float angle,
        const sf::Vector2f startPoint,
        float distance = defaultDistance
    );
};

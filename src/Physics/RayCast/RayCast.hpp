#pragma once

#include <cmath>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "RayCastHit.hpp"
#include "../../ElementContainer.hpp"
#include "../../Component/Tag.hpp"
#include "../Collision/Collision.hpp"

class RayCast
{
public:
    static RayCastHit cast(
        float angle,
        const sf::Vector2f startPoint,
        float distance = 150
    );
};

#pragma once

#include <SFML/Graphics.hpp>
#include "../Physics/RayCast/RayCast.hpp"
#include "../ElementContainer.hpp"
#include "../GameMode.hpp"
#include "PerspectiveMode.hpp"

class Camera
{
private:
    int fov = 120;
    const float fovDelta = 0.01;
    const float startAngleOffset = -0.3f;
public:
    virtual ~Camera() {};

    void look(const sf::Vector2f position, float rotateAngle);
};

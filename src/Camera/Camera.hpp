#pragma once

#include <SFML/Graphics.hpp>
#include "../Physics/RayCast/RayCast.hpp"

class Camera
{
private:
    int fov = 20;
    const float fovDelta = 0.1;
    const float startAngleOffset = -0.3f;
public:
    virtual ~Camera() {};

    void look(const sf::Vector2f position, float rotateAngle);
};

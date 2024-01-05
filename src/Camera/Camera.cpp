#include "Camera.hpp"

void Camera::look(const sf::Vector2f position, float rotateAngle)
{
    float currentAngleOffset = startAngleOffset;
    for (int i = 0; i < fov; i++)
    {
        auto rayCastHit = RayCast::cast(rotateAngle + currentAngleOffset,position);
        currentAngleOffset += fovDelta;
    }
}
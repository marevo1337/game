#include "Camera.hpp"

void Camera::look(const sf::Vector2f position, float rotateAngle)
{
    float currentAngleOffset = startAngleOffset;
    float cellSize = ElementContainer::get().getRenderWindow()->getSize().x / fov;

    for (int i = 0; i < fov; i++)
    {
        auto rayCastHit = RayCast::cast(rotateAngle + currentAngleOffset,position);
        if (rayCastHit.getGameObject() != nullptr)
        {
            if (ElementContainer::get().getGameMode() == GameMode::Perspective)
            {
                PerspectiveMode::draw(cellSize, i, rayCastHit.getDistance(), rayCastHit.getGameObject());
            }
        }

        currentAngleOffset += fovDelta;
    }
}
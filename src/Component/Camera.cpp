#include "Camera.hpp"

void Camera::start()
{}

void Camera::update()
{
    std::cout << getTransform()->getPosition().x << std::endl;

    float currentAngleOffset = startAngleOffset;
    for (int i = 0; i < fov; i++)
    {
        auto rayCastHit = RayCast::cast(
            getTransform()->getRotateAngle() + currentAngleOffset,
            getTransform()->getPosition()
        );
        currentAngleOffset += fovDelta;
    }
}

Transform* Camera::getTransform()
{
    return &transform;
}

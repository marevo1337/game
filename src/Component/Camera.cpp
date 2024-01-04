#include "Camera.hpp"

void Camera::start()
{}

void Camera::update()
{
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

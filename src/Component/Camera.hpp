#pragma once

#include <iostream>
#include "BaseComponent.hpp"
#include "Transform.hpp"
#include "../Physics/RayCast/RayCast.hpp"

class Camera : public BaseComponent
{
private:
    int fov = 20;
    const float fovDelta = 0.05;
    const float startAngleOffset = -0.2f;
    Transform transform;
public:
    virtual ~Camera() {};

    void start() override;
    void update() override;

    Transform* getTransform();
};

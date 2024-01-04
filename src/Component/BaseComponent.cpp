#include "BaseComponent.hpp"

bool BaseComponent::isEnable()
{
    return enable;
}

void BaseComponent::setEnable(bool enable)
{
    this->enable = enable;
}

Transform* BaseComponent::getTransform()
{
    return &transform;
}

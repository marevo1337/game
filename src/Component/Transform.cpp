#include "Transform.hpp"

sf::Vector2f Transform::getPosition()
{
    return position;
}

void Transform::setPosition(sf::Vector2f position)
{
    this->position = position;
}

float Transform::getRotateAngle()
{
    return rotateAngle;
}

void Transform::setRotateAngle(float rotateAngle)
{
    this->rotateAngle = rotateAngle;
}

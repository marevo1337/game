#pragma once

#include <SFML/Graphics.hpp>

class Transform
{
private:
    sf::Vector2f position;
    float rotateAngle;
public:
    sf::Vector2f getPosition();
    void setPosition(sf::Vector2f position);

    float getRotateAngle();
    void setRotateAngle(float rotateAngle);
};

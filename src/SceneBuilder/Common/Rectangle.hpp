#pragma once

#include "SFML/Graphics.hpp"
#include "../../GameObject/GameObject.hpp"
#include "../../ElementContainer.hpp"

class Rectangle : public GameObject
{
private:
    sf::Vector2f size;
    sf::Vector2f position;
    sf::Color color;

    sf::RectangleShape* rectangle = nullptr;
public:
    Rectangle(sf::Vector2f size, sf::Vector2f position, sf::Color color);
    virtual ~Rectangle();

    void start() override;
    void update() override;

    sf::Vector2f getPosition() override;
    float getRotateAngle() override;
    sf::Color getColor() override;
};

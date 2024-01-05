#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../../../GameObject/GameObject.hpp"
#include "../../../ElementContainer.hpp"
#include "../../../Component/Collider.hpp"
#include "../../../Component/Tag.hpp"

class Cube : public GameObject
{
private:
    float width = 10.0f;
    sf::Vector2f startPosition;
    float startRotateAngle;

    sf::RectangleShape* cube;

    Collider* collider;
    Collider* rayCather;
public:
    explicit Cube(float width, sf::Vector2f startPosition, float startRotateAngle);
    virtual ~Cube();

    void start() override;
    void update() override;

    sf::Vector2f getPosition() override;
    float getRotateAngle() override;
};
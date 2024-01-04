#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "../../../Component/BaseComponent.hpp"
#include "../../../ElementContainer.hpp"
#include "../../../Physics/RayCast/RayCast.hpp"

class PlayerBehavior : public BaseComponent
{
private:
    const float speed = 3.0f;
    const float mouseSensitive = 0.1f;

    sf::Vector2i prevMousePosition;

    sf::CircleShape* playerPoint = nullptr;

    void playerMovement();
    void mouseMovement();
public:
    virtual ~PlayerBehavior();

    void start() override;
    void update() override;
};
#pragma once

#include <SFML/Graphics.hpp>
#include "../../../GameObject/GameObject.hpp"
#include "../../../ElementContainer.hpp"
#include "../../../Physics/RayCast/RayCast.hpp"
#include "../../../Camera/Camera.hpp"

class Player : public GameObject
{
private:
    const float speed = 3.0f;
    const float mouseSensitive = 0.1f;

    sf::Vector2i prevMousePosition;

    sf::CircleShape* playerPoint = nullptr;

    Camera* camera = nullptr;

    void playerMovement();
    void mouseMovement();
public:
    virtual ~Player();

    void start() override;
    void update() override;

    sf::Vector2f getPosition() override;
    float getRotateAngle() override;
};
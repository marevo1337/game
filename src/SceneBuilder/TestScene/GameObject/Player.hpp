#pragma once

#include <SFML/Graphics.hpp>
#include "../../../GameObject/GameObject.hpp"
#include "../../../ElementContainer.hpp"
#include "../../../Physics/RayCast/RayCast.hpp"
#include "../../../Component/Collider.hpp"

class Player : public GameObject
{
private:
    const float speed = 3.0f;
    const float mouseSensitive = 0.05f;

    sf::Vector2i prevMousePosition;
    sf::Vector2f prevPlayerPosition;

    sf::CircleShape* playerPoint = nullptr;

    Collider* collider;

    void playerMovement();
    void mouseMovement();
public:
    virtual ~Player();

    void start() override;
    void update() override;

    sf::Vector2f getPosition() override;
    float getRotateAngle() override;
    sf::Color getColor() override;

    void onCollisionDetect(GameObject* gameObject) override;
};
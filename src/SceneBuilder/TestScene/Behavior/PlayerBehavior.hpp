#pragma once

#include <SFML/Graphics.hpp>
#include "../../../Component/BaseComponent.hpp"

class PlayerBehavior : public BaseComponent
{
private:
    const float speed = 3.0f;

    sf::CircleShape* playerPoint = nullptr;
public:
    virtual ~PlayerBehavior();

    void start(sf::RenderWindow* renderWindow) override;
    void update(sf::RenderWindow* renderWindow) override;
};
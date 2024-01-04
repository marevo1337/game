#include "PlayerBehavior.hpp"

PlayerBehavior::~PlayerBehavior()
{
    if (playerPoint)
    {
        delete playerPoint;
    }
}

void PlayerBehavior::start(sf::RenderWindow *renderWindow)
{
    auto windowSize = renderWindow->getSize();

    playerPoint = new sf::CircleShape(5);
    playerPoint->setFillColor(sf::Color::Green);
    playerPoint->setPosition(windowSize.x / 2, windowSize.y / 2);
}

void PlayerBehavior::update(sf::RenderWindow* renderWindow)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        playerPoint->move(-1 * speed, 0);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        playerPoint->move(1 * speed, 0);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        playerPoint->move(0, -1 * speed);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        playerPoint->move(0, 1 * speed);
    }

    renderWindow->draw(*playerPoint);
}

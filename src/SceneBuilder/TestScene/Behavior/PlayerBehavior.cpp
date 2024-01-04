#include "PlayerBehavior.hpp"

PlayerBehavior::~PlayerBehavior()
{
    if (playerPoint)
    {
        delete playerPoint;
    }
}

void PlayerBehavior::start()
{
    float radius = 5.0f;
    auto windowSize = ElementContainer::get().getRenderWindow()->getSize();

    playerPoint = new sf::CircleShape(radius);
    playerPoint->setFillColor(sf::Color::Green);
    playerPoint->setPosition(windowSize.x / 2, windowSize.y / 2);
    playerPoint->setOrigin(radius, radius);
    prevMousePosition = sf::Mouse::getPosition(*ElementContainer::get().getRenderWindow());
}

void PlayerBehavior::update()
{
    playerMovement();
    mouseMovement();

    sf::Vector2f startPoint(
        playerPoint->getPosition().x,
        playerPoint->getPosition().y
    );

    auto rayCastHit = RayCast::cast(playerPoint->getRotation(), startPoint);

    ElementContainer::get().getRenderWindow()->draw(*playerPoint);
}

void PlayerBehavior::playerMovement()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        playerPoint->move(-speed, 0);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        playerPoint->move(speed, 0);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        playerPoint->move(0, speed);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        float x = speed * sin(playerPoint->getRotation());
        float y = speed * cos(playerPoint->getRotation());

        playerPoint->move(x, y);
    }
}

void PlayerBehavior::mouseMovement()
{
    sf::Vector2i localPosition = sf::Mouse::getPosition(*ElementContainer::get().getRenderWindow());
    if (
        prevMousePosition.x == localPosition.x &&
        prevMousePosition.y == localPosition.y
    )
    {
        return;
    }

    if (prevMousePosition.x < localPosition.x)
    {
        playerPoint->rotate(-mouseSensitive);
    }

    if (prevMousePosition.x > localPosition.x)
    {
        playerPoint->rotate(mouseSensitive);
    }

    prevMousePosition = localPosition;
}

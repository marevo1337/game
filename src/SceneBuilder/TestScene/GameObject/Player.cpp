#include "Player.hpp"

Player::~Player()
{
    if (playerPoint)
    {
        delete playerPoint;
    }
}

void Player::start()
{
    float radius = 5.0f;
    auto windowSize = ElementContainer::get().getRenderWindow()->getSize();

    playerPoint = new sf::CircleShape(radius);
    playerPoint->setFillColor(sf::Color::Green);
    playerPoint->setPosition(windowSize.x / 2, windowSize.y / 2);
    playerPoint->setOrigin(radius, radius);

    prevMousePosition = sf::Mouse::getPosition(*ElementContainer::get().getRenderWindow());

    collider = new Collider();
    collider->setFloatRect(playerPoint->getGlobalBounds());
    registerComponent(Tag::Collider, collider);
}

void Player::update()
{
    prevPlayerPosition = playerPoint->getPosition();

    playerMovement();
    mouseMovement();

    ElementContainer::get().getCamera()->look(getPosition(), getRotateAngle());
    ElementContainer::get().getRenderWindow()->draw(*playerPoint);

    collider->setFloatRect(playerPoint->getGlobalBounds());
}

void Player::playerMovement()
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

void Player::mouseMovement()
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

sf::Vector2f Player::getPosition()
{
    return playerPoint->getPosition();
}

float Player::getRotateAngle()
{
    return playerPoint->getRotation();
}

void Player::onCollisionDetect(GameObject* gameObject)
{
    playerPoint->setPosition(prevPlayerPosition);
}

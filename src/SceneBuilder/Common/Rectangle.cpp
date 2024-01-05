#include "Rectangle.hpp"

Rectangle::Rectangle(sf::Vector2f size, sf::Vector2f position, sf::Color color)
{
    this->size = size;
    this->position = position;
    this->color = color;
}

Rectangle::~Rectangle()
{
    if (rectangle)
    {
        delete rectangle;
    }
}

void Rectangle::start()
{
    this->rectangle = new sf::RectangleShape(size);
    this->rectangle->setPosition(position);
    this->rectangle->setOrigin(this->rectangle->getSize().x / 2, this->rectangle->getSize().y / 2);
    this->rectangle->setFillColor(color);
}

void Rectangle::update()
{
    ElementContainer::get().getRenderWindow()->draw(*rectangle);
}

sf::Vector2f Rectangle::getPosition()
{
    return rectangle->getPosition();
}

float Rectangle::getRotateAngle()
{
    return rectangle->getRotation();
}

sf::Color Rectangle::getColor()
{
    return rectangle->getFillColor();
}

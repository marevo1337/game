#include "Cube.hpp"

Cube::Cube(float width, Transform transform)
{
    this->width = width;
    this->transform = transform;
}

Cube::~Cube()
{
    if (cube)
    {
        delete cube;
    }
}

void Cube::start()
{
    cube = new sf::RectangleShape(sf::Vector2f(width, width));
    cube->setFillColor(sf::Color::Blue);
}

void Cube::update()
{
    cube->setPosition(getTransform()->getPosition());
    cube->setRotation(getTransform()->getRotateAngle());

    ElementContainer::get().getRenderWindow()->draw(*cube);
}

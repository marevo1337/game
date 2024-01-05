#include "PerspectiveMode.hpp"

void PerspectiveMode::draw(float cellSize, int offset, int distance, GameObject* gameObject)
{
    sf::Vector2f size(cellSize, (float) RayCast::defaultDistance / distance * 20);

    float yPosition = ElementContainer::get().getRenderWindow()->getSize().y / 1.5;
    sf::Vector2f position(
        ElementContainer::get().getRenderWindow()->getSize().x - cellSize * offset,
        yPosition
    );

    Rectangle rectangle(size, position, gameObject->getColor());

    rectangle.start();
    rectangle.update();
}

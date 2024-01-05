#include "PerspectiveMode.hpp"

void PerspectiveMode::draw(float cellSize, int offset, int distance, GameObject* gameObject)
{
    sf::Vector2f size(cellSize, (float) 150 / distance * 20);
    sf::Vector2f position(
        ElementContainer::get().getRenderWindow()->getSize().x - cellSize * offset,
        ElementContainer::get().getRenderWindow()->getSize().y / 1.5
    );

    Rectangle rectangle(size, position, gameObject->getColor());

    rectangle.start();
    rectangle.update();
}

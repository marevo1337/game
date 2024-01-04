#include "RayCast.hpp"

RayCastHit RayCast::cast(
    float angle,
    const sf::Vector2f startPoint,
    float distance
)
{
    auto gameObjects = ElementContainer::get()
        .getSceneController()
        ->getCurrentScene()
        ->getGameObjects();

    sf::Vector2f endPosition;
    for (int i = 1; i <= distance; i++)
    {
        endPosition.x = startPoint.x + i * sin(angle);
        endPosition.y = startPoint.y + i * cos(angle);

        for (auto gameObject : gameObjects)
        {

        }
    }

    endPosition.x = startPoint.x + distance * sin(angle);
    endPosition.y = startPoint.y + distance * cos(angle);

    sf::Vertex line[] =
    {
        sf::Vertex(sf::Vector2f(startPoint.x, startPoint.y)),
        sf::Vertex(endPosition)
    };

    ElementContainer::get().getRenderWindow()->draw(line, 2, sf::Lines);

    return RayCastHit(0, nullptr);
}

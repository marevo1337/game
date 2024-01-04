#include "RayCast.hpp"

RayCastHit RayCast::cast(
    float angle,
    const sf::Vector2f startPoint,
    float distance
)
{
    // auto gameObjects = ElementContainer::get()
    //    .getSceneController()
    //    ->getCurrentScene()
    //    ->getGameObjects();

    sf::Vector2f endPosition;
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

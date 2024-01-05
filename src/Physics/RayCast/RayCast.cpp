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

    for (int i = 1; i <= distance; i++)
    {
        sf::Vector2f endPosition;
        endPosition.x = startPoint.x + i * sin(angle);
        endPosition.y = startPoint.y + i * cos(angle);

        sf::Vertex line[] =
        {
            sf::Vertex(startPoint),
            sf::Vertex(endPosition)
        };
        ElementContainer::get().getRenderWindow()->draw(line, 2, sf::Lines);

        for (auto gameObject : gameObjects)
        {
            BaseComponent* component = gameObject->findComponentByTag(Tag::Collider);
            if (component != nullptr)
            {
                Collider* collider = dynamic_cast<Collider*>(component);
                if(Collision::detect(*collider, endPosition))
                {
                    // ...
                }
            }
        }
    }

    return RayCastHit(distance, nullptr);
}

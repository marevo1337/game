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

        ElementContainer::get().getDebugInfo()->drawLine(startPoint, endPosition);

        for (auto gameObject : gameObjects)
        {
            BaseComponent* component = gameObject->findComponentByTag(Tag::RayCather);
            if (component != nullptr)
            {
                Collider* collider = dynamic_cast<Collider*>(component);
                if(Collision::detect(*collider, endPosition))
                {
                    return RayCastHit(i, gameObject);
                }
            }
        }
    }

    return RayCastHit(distance, nullptr);
}

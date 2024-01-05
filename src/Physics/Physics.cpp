#include "Physics.hpp"

void Physics::sceneUpdateCollision()
{
    auto gameObjects = ElementContainer::get()
        .getSceneController()
        ->getCurrentScene()
        ->getGameObjects();

    for (auto gameObject : gameObjects)
    {
        BaseComponent* collider = gameObject->findComponentByTag(Tag::Collider);
        if (collider != nullptr)
        {
            for (auto collidable : gameObjects)
            {
                if (gameObject == collidable)
                {
                    continue;
                }

                BaseComponent* subCollider = collidable->findComponentByTag(Tag::Collider);
                if (subCollider == nullptr)
                {
                    continue;
                }

                Collider* castedCollider = dynamic_cast<Collider*>(collider);
                Collider* castedSubCollider = dynamic_cast<Collider*>(subCollider);

                if (Collision::detect(*castedCollider, *castedSubCollider))
                {
                    gameObject->onCollisionDetect(collidable);
                }
            }
        }
    }
}

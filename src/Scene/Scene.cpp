#include "Scene.hpp"

Scene::~Scene()
{
    for (auto gameObject : gameObjects)
    {
        if (gameObject)
        {
            delete gameObject;
        }
    }
}

void Scene::attachGameObject(GameObject* gameObject)
{
    gameObjects.push_back(gameObject);
}

std::vector<GameObject*> Scene::getGameObjects()
{
    return gameObjects;
}

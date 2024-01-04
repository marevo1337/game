#pragma once

#include <vector>
#include "../GameObject/GameObject.hpp"

class Scene
{
private:
    std::vector<GameObject*> gameObjects;
public:
    virtual ~Scene();

    void attachGameObject(GameObject* gameObject);
    std::vector<GameObject*> getGameObjects();
};
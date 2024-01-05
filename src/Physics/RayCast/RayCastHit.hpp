#pragma once

#include "../../GameObject/GameObject.hpp"

class RayCastHit
{
private:
    int distance = 0;
    GameObject* gameObject = nullptr;
public:
    RayCastHit(int distance, GameObject* gameObject);
    virtual ~RayCastHit() {};

    int getDistance();
    GameObject* getGameObject();
};

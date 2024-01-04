#pragma once

#include "../../GameObject/GameObject.hpp"

class RayCastHit
{
private:
    float delta = 0;
    GameObject* gameObject = nullptr;
public:
    RayCastHit(float delta, GameObject* gameObject);
    virtual ~RayCastHit() {};

    float getDelta();
    GameObject* getGameObject();
};

#include "RayCastHit.hpp"

RayCastHit::RayCastHit(float delta, GameObject *gameObject)
{
    this->delta = delta;
    this->gameObject = gameObject;
}

float RayCastHit::getDelta()
{
    return delta;
}

GameObject *RayCastHit::getGameObject()
{
    return gameObject;
}

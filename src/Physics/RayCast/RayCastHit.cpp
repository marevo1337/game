#include "RayCastHit.hpp"

RayCastHit::RayCastHit(int distance, GameObject *gameObject)
{
    this->distance = distance;
    this->gameObject = gameObject;
}

int RayCastHit::getDistance()
{
    return distance;
}

GameObject* RayCastHit::getGameObject()
{
    return gameObject;
}

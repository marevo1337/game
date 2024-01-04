#pragma once

#include <vector>
#include "../Component/BaseComponent.hpp"

class GameObject
{
private:
    std::vector<BaseComponent*> components;
public:
    virtual ~GameObject();

    GameObject* attachComponent(BaseComponent* component);
    std::vector<BaseComponent*> getComponents();
};
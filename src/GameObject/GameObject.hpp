#pragma once

#include <map>
#include "../Component/BaseComponent.hpp"

class GameObject
{
private:
    std::map<std::string, BaseComponent*> components;
public:
    virtual ~GameObject();

    GameObject* attachComponent(const std::string tag, BaseComponent* component);
    std::map<std::string, BaseComponent*> getComponents();
};
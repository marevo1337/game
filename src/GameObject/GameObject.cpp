#include "GameObject.hpp"

GameObject::~GameObject()
{
    for (auto component : componentsTable)
    {
        if (component.second != nullptr)
        {
            delete component.second;
            component.second = nullptr;
        }
    }
}

void GameObject::registerComponent(const std::string& tag, BaseComponent* component)
{
    componentsTable[tag] = component;
}

BaseComponent* GameObject::findComponentByTag(const std::string& tag)
{
    if (componentsTable.find(tag) == componentsTable.end())
    {
        return nullptr;
    }

    return componentsTable[tag];
}

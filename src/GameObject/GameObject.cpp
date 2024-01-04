#include "GameObject.hpp"

GameObject::~GameObject() {
    for (auto component : components)
    {
        if (component.second)
        {
            delete component.second;
        }
    }
}

GameObject* GameObject::attachComponent(const std::string tag, BaseComponent *component)
{
    components[tag] = component;

    return this;
}

std::map<std::string, BaseComponent*> GameObject::getComponents()
{
    return components;
}

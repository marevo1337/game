#include "GameObject.hpp"

GameObject::~GameObject() {
    for (auto component : components)
    {
        if (component)
        {
            delete component;
        }
    }
}

GameObject* GameObject::attachComponent(BaseComponent *component)
{
    components.push_back(component);

    return this;
}

std::vector<BaseComponent*> GameObject::getComponents()
{
    return components;
}

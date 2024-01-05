#pragma once

#include <map>
#include <SFML/Graphics.hpp>
#include "../Component/BaseComponent.hpp"

class GameObject
{
private:
    std::map<std::string, BaseComponent*> componentsTable;
protected:
    void registerComponent(const std::string& tag, BaseComponent* component);
public:
    virtual ~GameObject();

    virtual void start() = 0;
    virtual void update() = 0;

    virtual sf::Vector2f getPosition() = 0;
    virtual float getRotateAngle() = 0;
    virtual sf::Color getColor() = 0;

    BaseComponent* findComponentByTag(const std::string& tag);

    virtual void onCollisionDetect(GameObject* gameObject) {};
};
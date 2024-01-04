#pragma once

#include <SFML/Graphics.hpp>
#include "Scene.hpp"

class SceneController
{
private:
    Scene* currentScene = nullptr;
public:
    virtual ~SceneController();

    void switchScene(Scene* next, sf::RenderWindow* renderWindow);
    void update(sf::RenderWindow* renderWindow);
};
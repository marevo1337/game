#pragma once

#include <SFML/Graphics.hpp>
#include "Scene.hpp"

class SceneController
{
private:
    Scene* currentScene = nullptr;
public:
    virtual ~SceneController();

    Scene* getCurrentScene();

    void switchScene(Scene* next);
    void update();
};
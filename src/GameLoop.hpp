#pragma once

#include <SFML/Graphics.hpp>
#include "Scene/SceneController.hpp"
#include "SceneBuilder/TestScene/TestSceneBuilder.hpp"

class GameLoop
{
private:
    SceneController* sceneController;
public:
    GameLoop();
    virtual ~GameLoop();

    void run(sf::RenderWindow* targetRenderWindow);
};

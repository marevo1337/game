#pragma once

#include <SFML/Graphics.hpp>
#include "Scene/SceneController.hpp"
#include "SceneBuilder/TestScene/TestSceneBuilder.hpp"
#include "ElementContainer.hpp"

class GameLoop
{
public:
    virtual ~GameLoop() {};

    void run();
};

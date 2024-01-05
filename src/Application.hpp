#pragma once

#include <SFML/Graphics.hpp>
#include "GameLoop.hpp"
#include "ElementContainer.hpp"
#include "Camera/Camera.hpp"

class Application
{
public:
    Application();
    virtual ~Application();

    void run();
};

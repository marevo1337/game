#pragma once

#include <SFML/Graphics.hpp>
#include "GameLoop.hpp"

class Application
{
private:
    sf::RenderWindow* renderWindow = nullptr;
public:
    Application();
    virtual ~Application();

    void run();
};

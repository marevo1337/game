#include "Application.hpp"

Application::Application()
{
    renderWindow = new sf::RenderWindow( { 800u, 600u }, "Game" );
    renderWindow->setFramerateLimit(60u);
}

Application::~Application()
{
    if (renderWindow)
    {
        delete renderWindow;
    }
}

void Application::run()
{
    GameLoop gameLoop;
    gameLoop.run(renderWindow);
}

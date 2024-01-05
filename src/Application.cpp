#include "Application.hpp"

Application::Application()
{
    sf::RenderWindow* renderWindow = new sf::RenderWindow( { 1440u, 900u }, "Game" );
    renderWindow->setFramerateLimit(60u);

    ElementContainer::get().setRenderWindow(renderWindow);
    ElementContainer::get().setCamera(new Camera());
}

Application::~Application()
{
    ElementContainer::get().free();
}

void Application::run()
{
    GameLoop gameLoop;
    gameLoop.run();
}

#include "GameLoop.hpp"

GameLoop::GameLoop()
{
    sceneController = new SceneController();
}

GameLoop::~GameLoop()
{
    if (sceneController)
    {
        delete sceneController;
    }
}

void GameLoop::run(sf::RenderWindow* targetRenderWindow)
{
    sceneController->switchScene(TestSceneBuilder::build(), targetRenderWindow);

    while (targetRenderWindow->isOpen())
    {
        sf::Event event;
        while (targetRenderWindow->pollEvent(event))
        {
            // TODO: This code segments need to refactoring to "EventSystem"
            if (event.type == sf::Event::Closed)
            {
                targetRenderWindow->close();
            }
        }

        targetRenderWindow->clear();
        sceneController->update(targetRenderWindow);
        targetRenderWindow->display();
    }
}

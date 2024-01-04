#include "SceneController.hpp"

SceneController::~SceneController()
{
    if (currentScene)
    {
        delete currentScene;
    }
}

void SceneController::switchScene(Scene *next, sf::RenderWindow* renderWindow)
{
    if (currentScene)
    {
        delete currentScene;
    }

    currentScene = next;

    for (auto gameObject : currentScene->getGameObjects())
    {
        for (auto component : gameObject->getComponents())
        {
            component->start(renderWindow);
        }
    }
}

void SceneController::update(sf::RenderWindow* renderWindow)
{
    for (auto gameObject : currentScene->getGameObjects())
    {
        for (auto component : gameObject->getComponents())
        {
            if (component->isEnable())
            {
                component->update(renderWindow);
            }
        }
    }
}

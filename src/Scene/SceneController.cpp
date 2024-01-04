#include "SceneController.hpp"

SceneController::~SceneController()
{
    if (currentScene)
    {
        delete currentScene;
    }
}

void SceneController::switchScene(Scene *next)
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
            component->start();
        }
    }
}

void SceneController::update()
{
    for (auto gameObject : currentScene->getGameObjects())
    {
        for (auto component : gameObject->getComponents())
        {
            if (component->isEnable())
            {
                component->update();
            }
        }
    }
}

Scene *SceneController::getCurrentScene()
{
    return currentScene;
}

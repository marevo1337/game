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
        gameObject->start();
    }
}

void SceneController::update()
{
    for (auto gameObject : currentScene->getGameObjects())
    {
        gameObject->update();
    }
}

Scene *SceneController::getCurrentScene()
{
    return currentScene;
}

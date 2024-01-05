#include "ElementContainer.hpp"

bool ElementContainer::isDebugEnable()
{
    return debugEnable;
}

void ElementContainer::setDebugEnable(bool debugEnable)
{
    this->debugEnable = debugEnable;
}

SceneController* ElementContainer::getSceneController()
{
    return sceneController;
}

void ElementContainer::setSceneController(SceneController* sceneController)
{
    this->sceneController = sceneController;
}

sf::RenderWindow *ElementContainer::getRenderWindow()
{
    return renderWindow;
}

void ElementContainer::setRenderWindow(sf::RenderWindow *renderWindow)
{
    this->renderWindow = renderWindow;
}

Camera *ElementContainer::getCamera()
{
    return camera;
}

void ElementContainer::setCamera(Camera *camera)
{
    this->camera = camera;
}

DebugInfo* ElementContainer::getDebugInfo()
{
    return debugInfo;
}

void ElementContainer::setDebugInfo(DebugInfo* debugInfo)
{
    this->debugInfo = debugInfo;
}

int ElementContainer::getGameMode()
{
    return gameMode;
}

void ElementContainer::setGameMode(int gameMode)
{
    this->gameMode = gameMode;
}

void ElementContainer::free()
{
    if (sceneController)
    {
        delete sceneController;
    }

    if (renderWindow)
    {
        delete renderWindow;
    }

    if (camera)
    {
        delete camera;
    }

    if (debugInfo)
    {
        delete debugInfo;
    }
}

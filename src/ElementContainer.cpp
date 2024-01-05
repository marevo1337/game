#include "ElementContainer.hpp"

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
}

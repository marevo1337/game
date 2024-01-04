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
}
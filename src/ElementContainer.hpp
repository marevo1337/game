#pragma once

#include <SFML/Graphics.hpp>
#include "Scene/SceneController.hpp"

class ElementContainer
{
private:
    SceneController* sceneController = nullptr;
    sf::RenderWindow* renderWindow = nullptr;

    ElementContainer() {};
    ~ElementContainer() {};

    ElementContainer(ElementContainer const&);
    ElementContainer& operator= (ElementContainer const&);
public:
    static ElementContainer& get()
    {
        static ElementContainer ec;
        return ec;
    }

    SceneController* getSceneController();
    void setSceneController(SceneController* sceneController);

    sf::RenderWindow* getRenderWindow();
    void setRenderWindow(sf::RenderWindow* renderWindow);

    void free();
};
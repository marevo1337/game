#pragma once

#include <SFML/Graphics.hpp>
#include "Scene/SceneController.hpp"
#include "Camera/Camera.hpp"
#include "Debug/DebugInfo.hpp"
#include "GameMode.hpp"

class Camera;
class DebugInfo;

class ElementContainer
{
private:
    bool debugEnable = false;
    int gameMode = GameMode::Composite;
    SceneController* sceneController = nullptr;
    sf::RenderWindow* renderWindow = nullptr;
    Camera* camera = nullptr;
    DebugInfo* debugInfo = nullptr;

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

    bool isDebugEnable();
    void setDebugEnable(bool debugEnable);

    int getGameMode();
    void setGameMode(int gameMode);

    SceneController* getSceneController();
    void setSceneController(SceneController* sceneController);

    sf::RenderWindow* getRenderWindow();
    void setRenderWindow(sf::RenderWindow* renderWindow);

    Camera* getCamera();
    void setCamera(Camera* camera);

    DebugInfo* getDebugInfo();
    void setDebugInfo(DebugInfo* debugInfo);

    void free();
};
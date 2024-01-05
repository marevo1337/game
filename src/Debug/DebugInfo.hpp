#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include "../ElementContainer.hpp"
#include "../GameMode.hpp"

class DebugInfo
{
private:
    sf::Font defaultFont;

    sf::Text fpsPresenter;
    sf::Text playerPositionPresenter;
    sf::Text playerRotationPresenter;
    sf::Text gameModePresenter;
public:
    DebugInfo();
    virtual ~DebugInfo() {};

    void setFpsValue(float fps);
    void setPlayerPosition(sf::Vector2f position);
    void setPlayerRotation(float playerRotation);
    void setGameMode(int gameMode);
    void drawLine(sf::Vector2f start, sf::Vector2f end);

    void draw();
};

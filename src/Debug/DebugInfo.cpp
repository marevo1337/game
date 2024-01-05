#include "DebugInfo.hpp"

DebugInfo::DebugInfo()
{
    defaultFont.loadFromFile("../../resource/font/Roboto-Bold.ttf");

    fpsPresenter.setString("FPS: -");
    fpsPresenter.setCharacterSize(24);
    fpsPresenter.setPosition(10, 10);
    fpsPresenter.setFont(defaultFont);

    playerPositionPresenter.setString("Player position: -");
    playerPositionPresenter.setCharacterSize(24);
    playerPositionPresenter.setPosition(10, 35);
    playerPositionPresenter.setFont(defaultFont);

    playerRotationPresenter.setString("Player rotation: -");
    playerRotationPresenter.setCharacterSize(24);
    playerRotationPresenter.setPosition(10, 60);
    playerRotationPresenter.setFont(defaultFont);

    gameModePresenter.setString("Game mode: -");
    gameModePresenter.setCharacterSize(24);
    gameModePresenter.setPosition(10, 85);
    gameModePresenter.setFont(defaultFont);
}

void DebugInfo::draw()
{
    if (ElementContainer::get().isDebugEnable())
    {
        ElementContainer::get().getRenderWindow()->draw(fpsPresenter);
        ElementContainer::get().getRenderWindow()->draw(playerPositionPresenter);
        ElementContainer::get().getRenderWindow()->draw(playerRotationPresenter);
        ElementContainer::get().getRenderWindow()->draw(gameModePresenter);
    }
}

void DebugInfo::setFpsValue(float fps)
{
    fpsPresenter.setString("FPS: " + std::to_string(fps));
}

void DebugInfo::setPlayerPosition(sf::Vector2f position)
{
    playerPositionPresenter.setString(
        "Player position: " + std::to_string(position.x) + ", " + std::to_string(position.y)
    );
}

void DebugInfo::setPlayerRotation(float playerRotation)
{
    playerRotationPresenter.setString("Player rotation: " + std::to_string(playerRotation));
}

void DebugInfo::setGameMode(int gameMode)
{
    std::string gameModeLabel = "-";
    if (gameMode == GameMode::Composite)
    {
        gameModeLabel = "Composite";
    }
    if (gameMode == GameMode::Perspective)
    {
        gameModeLabel = "Perspective";
    }

    gameModePresenter.setString("Game mode: " + gameModeLabel);
}

void DebugInfo::drawLine(sf::Vector2f start, sf::Vector2f end)
{
    if (!ElementContainer::get().isDebugEnable() || ElementContainer::get().getGameMode() == GameMode::Perspective)
    {
        return;
    }

    sf::Vertex line[] =
    {
        sf::Vertex(start),
        sf::Vertex(end)
    };
    ElementContainer::get().getRenderWindow()->draw(line, 2, sf::Lines);
}

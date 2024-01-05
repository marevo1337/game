#include "GameLoop.hpp"

void GameLoop::run()
{
    ElementContainer::get().setSceneController(new SceneController());
    ElementContainer::get()
        .getSceneController()
        ->switchScene(TestSceneBuilder::build());

    ElementContainer::get().getRenderWindow()->setMouseCursorVisible(false);

    while (ElementContainer::get().getRenderWindow()->isOpen())
    {
        sf::Event event;
        while (ElementContainer::get().getRenderWindow()->pollEvent(event))
        {
            // TODO: This code segments need to refactoring to "EventSystem"
            if (event.type == sf::Event::Closed)
            {
                ElementContainer::get().getRenderWindow()->close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
            {
                ElementContainer::get().setDebugEnable(true);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            {
                ElementContainer::get().setDebugEnable(false);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
            {
                ElementContainer::get().setGameMode(GameMode::Composite);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
            {
                ElementContainer::get().setGameMode(GameMode::Perspective);
            }
        }

        ElementContainer::get().getRenderWindow()->clear();
        ElementContainer::get().getSceneController()->update();
        Physics::sceneUpdateCollision();

        ElementContainer::get().getDebugInfo()->setGameMode(ElementContainer::get().getGameMode());
        ElementContainer::get().getDebugInfo()->draw();

        ElementContainer::get().getRenderWindow()->display();
    }
}

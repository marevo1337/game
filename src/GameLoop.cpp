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
        }

        ElementContainer::get().getRenderWindow()->clear();
        ElementContainer::get().getSceneController()->update();
        ElementContainer::get().getRenderWindow()->display();
    }
}

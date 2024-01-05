#include "TestSceneBuilder.hpp"

Scene *TestSceneBuilder::build()
{
    Scene* scene = new Scene();

    GameObject* player = new Player();
    scene->attachGameObject(player);

    GameObject* cube = new Cube(30.0f, sf::Vector2f(400.0f, 300.0f), 0);
    scene->attachGameObject(cube);

    return scene;
}

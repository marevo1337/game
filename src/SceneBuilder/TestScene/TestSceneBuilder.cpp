#include "TestSceneBuilder.hpp"

Scene *TestSceneBuilder::build()
{
    Scene* scene = new Scene();

    // Player
    GameObject* player = new GameObject();
    player->attachComponent("PlayerBehavior", new PlayerBehavior());
    scene->attachGameObject(player);

    // Cube
    GameObject* cube = new GameObject();
    Transform cubeTransform;
    cubeTransform.setPosition(sf::Vector2f(400.0f, 300.0f));
    cubeTransform.setRotateAngle(0);
    cube->attachComponent("Cube", new Cube(30.0f, cubeTransform));
    scene->attachGameObject(cube);

    return scene;
}

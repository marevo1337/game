#include "TestSceneBuilder.hpp"

Scene *TestSceneBuilder::build()
{
    Scene* scene = new Scene();

    GameObject* player = new GameObject();
    player->attachComponent(new PlayerBehavior());
    scene->attachGameObject(player);

    return scene;
}

#pragma once

#include "../SceneBuilder/Common/Rectangle.hpp"
#include "../ElementContainer.hpp"
#include "../GameObject/GameObject.hpp"
#include "../Physics/RayCast/RayCast.hpp"

class PerspectiveMode
{
public:
    static void draw(float cellSize, int offset, int distance, GameObject* gameObject);
};

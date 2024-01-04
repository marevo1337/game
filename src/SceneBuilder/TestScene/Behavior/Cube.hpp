#pragma once

#include <SFML/Graphics.hpp>
#include "../../../Component/BaseComponent.hpp"
#include "../../../Component/Transform.hpp"
#include "../../../ElementContainer.hpp"

class Cube : public BaseComponent
{
private:
    float width = 10.0f;
    sf::RectangleShape* cube;
public:
    explicit Cube(float width, Transform transform);
    virtual ~Cube();

    void start() override;
    void update() override;
};
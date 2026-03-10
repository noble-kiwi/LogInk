#pragma once
#include <SFML/Graphics.hpp>
#include "Car.h"

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    Car m_Car;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:

    Engine();
    void start();

};
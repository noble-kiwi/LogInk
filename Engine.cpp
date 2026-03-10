#include "Engine.h"

Engine::Engine()
{
    Vector2f resolution;
    resolution.x = 1280;
    resolution.y = 720;

    m_Window.create(VideoMode(resolution.x, resolution.y), L"LogInk: Побег со склада");

    m_BackgroundTexture.loadFromFile("Image/Background.jpg");

    m_BackgroundSprite.setTexture(m_BackgroundTexture);

}

void Engine::start()
{
    
    Clock clock;

    while (m_Window.isOpen())
    {
        Image icon;
        icon.loadFromFile("Image/icon.png");
        m_Window.setIcon(64, 64, icon.getPixelsPtr());
        Time dt = clock.restart();

        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
    }
}
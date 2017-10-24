#include "Engine.h"

Engine::Engine()
{
    sf::Vector2f resolution;

    resolution.x = sf::VideoMode::getDesktopMode().width;
    resolution.y = sf::VideoMode::getDesktopMode().height;

    // Creates game screen
    game_screen.create(sf::VideoMode(resolution.x, resolution.y), "RPG beta", sf::Style::Fullscreen);

    // Loads and sets background
    game_background_t.loadFromFile("background.jpg");
    game_background_s.setTexture(game_background_t);

}

void Engine::run()
{
    //Game update timer
    sf::Clock clock;

    while (game_screen.isOpen())
    {

        sf::Time timer = clock.restart();

        float secTimer =  timer.asSeconds();

        input();
        update(secTimer);
        draw();
    }
}

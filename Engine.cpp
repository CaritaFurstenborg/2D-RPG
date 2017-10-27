#include "Engine.h"

Engine::Engine()
{
    _resolution.x = sf::VideoMode::getDesktopMode().width;
    _resolution.y = sf::VideoMode::getDesktopMode().height;

    // Creates game screen
    game_screen.create(sf::VideoMode(_resolution.x, _resolution.y), "RPG beta", sf::Style::Fullscreen);

    // Loads and sets background
    game_background_t.loadFromFile("Tausta.png");
    game_background_s.setTexture(game_background_t);

}

void Engine::run()
{

    while (game_screen.isOpen())
    {
        _timer = _clock.restart();

        float secTimer =  _timer.asSeconds();

        input();
        update(secTimer);
        draw();
    }
}

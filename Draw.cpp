#include "Engine.h"

void Engine::draw()
{
    //Clears window for new elements
    game_screen.clear(sf::Color::White);

    //Draws background and player
    game_screen.draw(game_background_s);
    game_screen.draw(player.getSprite());

    //Displays window to player
    game_screen.display();
}

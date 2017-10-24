#include "Engine.h"

void Engine::input()
{

    //Player walking to left
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        player.moveLeftDirection();
    }
    else
    {
        player.stopMovingLeft();
    }

    //Player walking to right
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        player.moveRightDirection();
    }
    else
    {
        player.stopMovingRight();
    }

    //Quit game
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        game_screen.close();
    }
}

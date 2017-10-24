#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Engine
{

private:

    //Game screen
    sf::RenderWindow game_screen;

    //Player initialize
    Player player;

    //Background
    sf::Sprite game_background_s;
    sf::Texture game_background_t;

    void input();
    void draw();
    void update(float secTimer);

public:

    //Initializes engine
    Engine();

    //Run function -> private
    void run();

};

#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Engine
{

private:

    //Game screen
    sf::RenderWindow game_screen;

    //resolution
    sf::Vector2f _resolution;

    //Player initialize
    Player player;

    //Background
    sf::Sprite game_background_s;
    sf::Texture game_background_t;

    //Clock game update timer
    sf::Clock _clock;

    //timer
    sf::Time _timer;

    void input();
    void draw();
    void update(float secTimer);

public:

    //Initializes engine
    Engine();

    //Run function -> private
    void run();

};

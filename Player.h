#pragma once
#include <SFML/Graphics.hpp>


class Player
{
private:

    sf::Vector2f  p_position;

    sf::Texture pTexture;
    sf::Sprite pSprite;

    bool isLeftKeyDown;
    bool isRightKeyDown;
    bool isSpaceKeyDown;

    float p_speed;
    const int ground_level = 850;

public:

    Player();

    sf::Sprite getSprite();

    void moveLeftDirection();
    void moveRightDirection();
    void jump();

    void stopMovingLeft();
    void stopMovingRight();
    void stopJump();

    void update(float moveTimer);

};

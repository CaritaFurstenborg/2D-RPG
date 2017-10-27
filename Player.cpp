#include "Player.h"


Player::Player()
{
    //Declares player movement speed
    p_speed = 1000;

    //Player location(Left to right)
    p_position.x = 100;
    //Player location(Up to down)
    p_position.y = ground_level;



    //Loads textures for player
    pTexture.loadFromFile("Hahmo.png");
    pSprite.setTexture(pTexture);
}

sf::Sprite Player::getSprite()
{
    return pSprite;
}

void Player::moveLeftDirection()
{
    isLeftKeyDown = true;
}

void Player::moveRightDirection()
{
    isRightKeyDown = true;
}

void Player::jump()
{
    isSpaceKeyDown = true;
}

void Player::stopMovingLeft()
{
    isLeftKeyDown = false;
}

void Player::stopMovingRight()
{
    isRightKeyDown = false;
}

void Player::stopJump()
{
    isSpaceKeyDown = false;
}

void Player::update(float timeGone)
{
    if (isLeftKeyDown)
    {
        if (p_position.x >= 0) // KAPU MUUTA SCALEEVAKS
        {
            p_position.x -= p_speed * timeGone;
        }
    }

    if (isRightKeyDown)
    {
        if (p_position.x <= 1830)// KAPU MUUTA SCALEEVAKS
        {
            p_position.x += p_speed * timeGone;
        }
    }

    if (isSpaceKeyDown)
    {
        if (p_position.y >= 550)
        {
            p_position.y -= p_speed * timeGone;
        }

    }
    else if (!isSpaceKeyDown)
    {
        if (p_position.y < ground_level)
        {
            p_position.y += p_speed * timeGone;
        }
    }

    pSprite.setPosition(p_position.x, p_position.y);
}

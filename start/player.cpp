// player.cpp

#include "player.h"

Player::Player(): Entity()
{
	this->addSprite("assets/square.tga");
    this->sprite()->color = RED;
}

Player::~Player()
{

}

// physics
/*void Player::movement(float deltaTime)
{
    this->velocity += this->acceleration * deltaTime;
    this->position += this->velocity * deltaTime;
    this->acceleration *= 0;
}*/

void Player::update(float deltaTime)
{

}

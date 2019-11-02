#include "Player.h"
#include <string>
Player::Player(int points,std::string name)
{
	Points = points;
	this->name = name;

}


std::string Player::GetName()
{
	return name;

}

int Player::GetScore()
{
	return this->Points;
}

int Player::GetAttempts()
{
	return this->Attempts;
}

int Player::GetMultiplier()
{
	return this->Multiplier;
}

void Player::SetScore(int amount)
{
	this->Points = amount;
}

void Player::SetMultiplier(int amount)
{
	this->Multiplier = amount;
}

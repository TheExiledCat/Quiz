#pragma once
#include <string>
class Player
{
public:
	Player(int points, std::string name);
	~Player();
	std::string GetName();
	int GetScore();
	int	GetAttempts();
	int GetMultiplier();
	void SetScore(int amount);
	void SetMultiplier(int amount);
private:
	std::string name;
	int Points=0;
	int Multiplier=0;
	int Attempts=0;
};


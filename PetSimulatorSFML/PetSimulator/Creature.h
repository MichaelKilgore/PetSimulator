#pragma once
#include <SFML\Graphics.hpp>

class Creature
{
public:
	Creature();
	Creature(int health, int energy, int hunger, int thirst, sf::Sprite newCreature);

	int getHealth();
	int getEnergy();
	int getHunger();
	int getThirst();

	void setHealth(int hp);
	void setEnergy(int energy);
	void getHunger(int hunger);
	void getThirst(int thirst);

private:
	int health;
	int energy;
	int hunger;
	int thirst;

	sf::Sprite creature;
};
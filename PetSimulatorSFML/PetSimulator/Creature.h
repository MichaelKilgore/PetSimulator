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
	sf::Sprite & getCreature();

	void setHealth(int hp);
	void setEnergy(int energy);
	void setHunger(int hunger);
	void setThirst(int thirst);
	void setCreature(sf::Sprite newCreature);


private:
	int health;
	int energy;
	int hunger;
	int thirst;

	sf::Sprite creature;
};
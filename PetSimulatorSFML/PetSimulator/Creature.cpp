#include "Creature.h"

Creature::Creature()
{
	this->energy;
	this->health;
	this->hunger;
	this->thirst;

	this->creature;
}
Creature::Creature(int health, int energy, int hunger, int thirst, sf::Sprite newCreature)
{
	this->health = health;
	this->energy = energy;
	this->hunger = hunger;
	this->thirst = thirst;

	this->creature = newCreature;
}

int Creature::getHealth()
{
	return this->health;
}
int Creature::getEnergy()
{
	return this->energy;
}
int Creature::getHunger()
{
	return this->hunger;
}
int Creature::getThirst()
{
	return this->thirst;
}
sf::Sprite & Creature::getCreature()
{
	return this->creature;
}

void Creature::setHealth(int hp)
{
	this->health = hp;
}
void Creature::setEnergy(int energy)
{
	this->energy = energy;
}
void Creature::setHunger(int hunger)
{
	this->hunger = hunger;
}
void Creature::setThirst(int thirst)
{
	this->thirst = thirst;
}
void Creature::setCreature(sf::Sprite newCreature)
{
	this->creature = newCreature;
}
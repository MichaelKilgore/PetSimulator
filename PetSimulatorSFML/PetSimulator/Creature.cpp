#include "Creature.h"

Creature::Creature()
{
	this->energy;
	this->health;
	this->hunger;
	this->thirst;

	this->creature;
	this->currentAnimation = Animation::AnimationIndex::WALKING_DOWN;
}
Creature::Creature(int health, int energy, int hunger, int thirst, sf::Sprite newCreature)
{
	this->health = health;
	this->energy = energy;
	this->hunger = hunger;
	this->thirst = thirst;

	this->creature = newCreature;

	this->creature.setTextureRect({ 0, 0, 64, 64 });

	animations_[int(Animation::AnimationIndex::WALKING_UP)]    = Animation(64, 525, 64, 64, "Assets/Creature 1.png", -1);
	animations_[int(Animation::AnimationIndex::WALKING_DOWN)]  = Animation(64, 650, 64, 64, "Assets/Creature 1.png", -1);
	animations_[int(Animation::AnimationIndex::WALKING_LEFT)]  = Animation(64, 590, 64, 64, "Assets/Creature 1.png", -1);
	animations_[int(Animation::AnimationIndex::WALKING_RIGHT)] = Animation(64, 720, 64, 64, "Assets/Creature 1.png", -1);
	
	animations_[int(currentAnimation)].ApplyToSprite(this->creature);

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

void Creature::Render(sf::RenderTarget & target)
{
	target.draw(this->getCreature());
}

void Creature::Update(float dT)
{
	animations_[int(currentAnimation)].Update(dT, 0);
	animations_[int(currentAnimation)].ApplyToSprite(creature);
}

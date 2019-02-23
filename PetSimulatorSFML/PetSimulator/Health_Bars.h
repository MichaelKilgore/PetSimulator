#pragma once
#include <SFML\Graphics.hpp>

class health_bars
{
public:
	health_bars();
	health_bars(int value);

	int getValue();
	sf::RectangleShape & getBar();

	void setValue();
	void setBar(sf::RectangleShape newSize);

private:
	int value;
	sf::RectangleShape bar;
};
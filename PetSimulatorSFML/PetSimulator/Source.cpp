#include <iostream>
#include <SFML/Graphics.hpp>
#include "Creature.h"

int main(void)
{
	//Screen dimensions
	constexpr int SCREEN_WIDTH = 800;
	constexpr int SCREEN_HEIGHT = 600; 

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");
	sf::CircleShape shape(120.f);
	shape.setFillColor(sf::Color::Green);

	sf::Texture creatureTexture;
	creatureTexture.loadFromFile("Assets/Creature 1.png");
	sf::Sprite creatureSprite;
	creatureSprite.setTexture(creatureTexture);

	Creature *creature = new Creature(100, 100, 100, 100, creatureSprite);
	
	

	// Run windowasdf
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		creature->Render(window);
		window.display();
	}

}
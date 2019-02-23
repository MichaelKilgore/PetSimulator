#include <iostream>
#include <SFML/Graphics.hpp>
#include "Creature.h"
#include "Animation.h"
>>>>>>> 5b77a0b87f1696cb0c574c96467e20f78dd6e02d

int main(void)
{
	//Screen dimensions
	constexpr int SCREEN_WIDTH = 800;
	constexpr int SCREEN_HEIGHT = 600; 

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");
	sf::CircleShape shape(120.f);
	shape.setFillColor(sf::Color::Green);

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
		window.display();
		////////////////////////////////////
	}

}
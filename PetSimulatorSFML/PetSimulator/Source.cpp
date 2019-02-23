#include <iostream>
#include <SFML/Graphics.hpp>
<<<<<<< HEAD
#include "Creature.h"

#include "Animation.h"
=======
#include "Animation.h"
#include "Creature.h"
>>>>>>> 272d4f0e065b1af17c2a57b8e9ed20e1dc34f455

int main(void)
{
	//Screen dimensions
	constexpr int SCREEN_WIDTH = 800;
	constexpr int SCREEN_HEIGHT = 600;

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");
	sf::Texture texture;
	
	texture.loadFromFile("Assets/grass block.jpg");
	
<<<<<<< HEAD
	

	// Run windowasdf
=======
	sf::Sprite sprite(texture);
	
	sprite.setTextureRect({ 20, 20, 100, 100 });
	// Run window
>>>>>>> 272d4f0e065b1af17c2a57b8e9ed20e1dc34f455
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		creature->Update(.001);

		window.clear();

		// SETTING THE BACKGROUND////////////
		//window.draw(background.getSprite());
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				sprite.setPosition(i * 100, j * 100);
				window.draw(sprite);
			}
		}
		sprite.setPosition(0, 0);
		
		window.display();
		////////////////////////////////////
	}

}
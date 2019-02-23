#include <iostream>
#include <SFML/Graphics.hpp>
#include "Animation.h"
int main(void)
{
	//Screen dimensions
	constexpr int SCREEN_WIDTH = 800;
	constexpr int SCREEN_HEIGHT = 600; 

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML works!");
	sf::Texture texture;
	texture.loadFromFile("Assets/grass block.jpg");
	sf::Sprite sprite(texture);
	sprite.setTextureRect({ 20, 20, 100, 100 });
	// Run window
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

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
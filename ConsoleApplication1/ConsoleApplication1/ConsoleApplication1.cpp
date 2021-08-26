#include <iostream>
#include <SFML/Graphics.hpp>
#include <iomanip> 
#include <chrono> 
#include <ctime> 
#include <thread>
#include  <time.h>

using namespace sf;

int main()
{
	srand(time(0));
	RenderWindow window(VideoMode(400, 400), "Time");
	
	sf::Font font;
	if (!font.loadFromFile("Summer Calling.ttf")) {
		std::cout << "error";
	}

	time_t now = time(0);
	tm* ltm = localtime(&now);
	const char* localtime;
	ato
	sf::Text text;
	text.setFont(font);
	text.setString();
	text.setCharacterSize(24);
	text.setFillColor(Color::White);


	while (window.isOpen())
	{
		Event event;
		window.clear(sf::Color::Black);
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed) {
				if (event.key.code == Keyboard::D) {
					window.clear(sf::Color::Black);
					text.setFillColor(Color::White);
				}
				if (event.key.code == Keyboard::S) {
					window.clear(sf::Color::White);
					text.setFillColor(Color::Black);
				}
			}

		}
		window.draw(text);
		window.display();
	}
}


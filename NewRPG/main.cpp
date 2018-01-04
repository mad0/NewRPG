#include "engine.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(1440, 960), "My window");

	Engine start(window);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		start.Events(event);
		}
		start.Update();
		start.Draw();
	}
	return 0;
}
#pragma once
#include "GUI.h"

#include <vector>
#include "character.h"
#include <iostream>

class Engine {
private:
	Character *player;
	sf::RenderWindow &window;
	sf::Font font;
public:
	Engine(sf::RenderWindow&);
	~Engine();
	void Events(sf::Event&);
	void Update();
	void Draw();
};
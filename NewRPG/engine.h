#pragma once
#include "GUI.h"
#include <vector>
#include "character.h"
#include <iostream>

class Engine {
private:
	Character *player;
	std::vector<textGUI*> guiButtons;
	sf::RenderWindow *window;
public:
	Engine(sf::RenderWindow *window);
	~Engine();

	void Update();
	void Draw();
};
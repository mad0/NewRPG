#pragma once
#include "GUI.h"
#include <vector>
#include "character.h"
#include <iostream>

class Engine {
private:
	Character *player;
	std::vector<styleGUI*> guiButtons;
	std::vector<graphGUI*> guiGraph;
	sf::RenderWindow *window;
	sf::Font font;
public:
	Engine(sf::RenderWindow *window);
	~Engine();
	void Events(sf::Event&);
	void Update();
	void Draw();
};
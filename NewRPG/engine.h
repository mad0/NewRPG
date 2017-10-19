#pragma once
#include "GUI.h"
#include <vector>
#include "character.h"

class Engine {
private:
	std::vector<textGUI*> guiButtons;
	sf::RenderWindow *window;
public:
	Engine(sf::RenderWindow *window);
	~Engine();

	void Update();
	void Draw();
};
#pragma once
#include "SFML\Graphics.hpp"
#include <string>
#include <iostream>

class GUI {
private:
	sf::Font fontFile;
	sf::Color fontColor;
	int fontSize;

public:
	GUI();
	~GUI();

	//TMP
	void Update();
};




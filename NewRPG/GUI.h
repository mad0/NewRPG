#pragma once
#include "SFML\Graphics.hpp"
#include <string>
#include <iostream>

class textGUI {
private:
	sf::Text buttonSprite;
	std::string buttonText;
	sf::Font buttonFont;
	sf::Vector2f buttonPosition;
	sf::Color textColor;

public:
	textGUI(const std::string&, sf::Font&, sf::Vector2f);
	textGUI(const std::string&, sf::Font&, sf::Vector2f, sf::Color);
	sf::Vector2f getPosition();
	sf::FloatRect getBounds();
	~textGUI();
	void Draw(sf::RenderTarget&);
	void Update();
};


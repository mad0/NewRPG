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
	int size;

public:
	textGUI(const std::string&, sf::Font&, sf::Vector2f);
	textGUI(const std::string&, sf::Font&, sf::Vector2f, sf::Color, int);
	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f);
	sf::FloatRect getBounds();
	void setText(const std::string&);
	~textGUI();
	void Draw(sf::RenderTarget&);
	void Update();
};


class graphGUI {
private:
	sf::Sprite spriteGUI;
	std::string file;
	sf::Texture *textureGUI;
	sf::Vector2f spritePosition;
	
public:
	graphGUI(const std::string&, sf::Vector2f);
	graphGUI(textGUI);
	~graphGUI();
	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f);
	void guiGraphRect(int);
	void Draw(sf::RenderTarget&);
	void Update();
	

};

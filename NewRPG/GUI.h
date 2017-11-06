#pragma once
#include "SFML\Graphics.hpp"
#include <string>
#include <iostream>

class styleGUI {
private:
	sf::Font fontFile;
	sf::Color fontColor;
	int fontSize;

public:
	styleGUI(sf::Font& _fontFile, sf::Color _fontColor, int size_);
	~styleGUI();
	void setFont(sf::Font& _fontFile);
	void setFontColor(sf::Color _fontColor);
	void setFontSize(int _fontSize);
	//TMP
	void Update();
};

class textGUI {
private:
	std::string displayText;
	sf::Text text;
public:
	textGUI();
	~textGUI();
};

class graphGUI {
private:
	sf::Sprite spriteGUI;
	std::string file;
	sf::Texture *textureGUI;
	sf::Vector2f spritePosition;
	
public:
	graphGUI(const std::string&, sf::Vector2f);
	graphGUI(styleGUI);
	~graphGUI();
	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f);
	void guiGraphRect(int);
	void Draw(sf::RenderTarget&);
	void Update();
	

};

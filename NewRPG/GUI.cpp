#include "GUI.h"

textGUI::textGUI(const std::string& _buttonText, sf::Font& _buttonFont, sf::Vector2f _buttonPosition) : buttonText(_buttonText), buttonFont(_buttonFont), buttonPosition(_buttonPosition) {
	std::cout << "START TEXTGUI...\n";
	buttonSprite.setCharacterSize(23);
	buttonSprite.setString(this->buttonText);
	buttonSprite.setFont(this->buttonFont);
	buttonSprite.setFillColor(sf::Color::White);
	buttonSprite.setPosition(this->buttonPosition);
}

textGUI::textGUI(const std::string& _buttonText, sf::Font& _buttonFont, sf::Vector2f _buttonPosition, sf::Color _textColor) : buttonText(_buttonText), buttonFont(_buttonFont), buttonPosition(_buttonPosition), textColor(_textColor){
	std::cout << "START TEXTGUI...\n";
	buttonSprite.setCharacterSize(23);
	buttonSprite.setString(this->buttonText);
	buttonSprite.setFont(this->buttonFont);
	buttonSprite.setFillColor(this->textColor);
	buttonSprite.setPosition(this->buttonPosition);
}

sf::Vector2f textGUI::getPosition(){ return buttonSprite.getPosition(); }
sf::FloatRect textGUI::getBounds() { return buttonSprite.getGlobalBounds(); }

textGUI::~textGUI(){
	std::cout << "END TEXTGUI...\n";
}

void textGUI::Draw(sf::RenderTarget& target) {
	target.draw(buttonSprite);
}

void textGUI::Update() {
	
}


///// GRAPHGUI

graphGUI::graphGUI(const std::string& _file, sf::Vector2f _spritePosition) : file(_file), spritePosition(_spritePosition)  {
	textureGUI = new(sf::Texture);
	textureGUI->loadFromFile(file);
	spriteGUI.setTexture(*textureGUI);
	spriteGUI.setPosition(spritePosition);
}

graphGUI::~graphGUI() {

 }

void graphGUI::Draw(sf::RenderTarget& target){
	target.draw(spriteGUI);
}

void graphGUI::Update(){
}

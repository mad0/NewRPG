#include "GUI.h"

//Default constructor
textGUI::textGUI(const std::string& _buttonText, sf::Font& _buttonFont, sf::Vector2f _buttonPosition) : buttonText(_buttonText), buttonFont(_buttonFont), buttonPosition(_buttonPosition) {
	std::cout << "START TEXTGUI...\n";
	size = 23;
	buttonSprite.setCharacterSize(size);
	buttonSprite.setString(this->buttonText);
	buttonSprite.setFont(this->buttonFont);
	buttonSprite.setFillColor(sf::Color::White);
	buttonSprite.setPosition(this->buttonPosition);
}
//Constructor
textGUI::textGUI(const std::string& _buttonText, sf::Font& _buttonFont, sf::Vector2f _buttonPosition, sf::Color _textColor, int _size) : buttonText(_buttonText), buttonFont(_buttonFont), buttonPosition(_buttonPosition), textColor(_textColor), size(_size){
	std::cout << "START TEXTGUI...\n";
	buttonSprite.setCharacterSize(size);
	buttonSprite.setString(this->buttonText);
	buttonSprite.setFont(this->buttonFont);
	buttonSprite.setFillColor(this->textColor);
	buttonSprite.setPosition(this->buttonPosition);
}
//Return positions/bounds
sf::Vector2f textGUI::getPosition(){ return buttonSprite.getPosition(); }

//Set text position
void textGUI::setPosition(sf::Vector2f _newPos) { buttonSprite.setPosition(_newPos); }

//Get text bounds
sf::FloatRect textGUI::getBounds() { return buttonSprite.getGlobalBounds(); }

//Set text
void textGUI::setText(const std::string & _text) { buttonSprite.setString(_text); }

//Destructor
textGUI::~textGUI(){ std::cout << "END TEXTGUI...\n"; }

//Draw buttonSprite
void textGUI::Draw(sf::RenderTarget& target) { target.draw(buttonSprite); }

void textGUI::Update() {
	buttonSprite.setString(this->buttonText);
}




///////////////////////////// GRAPHGUI /////////////////////////////////////////////////

//Constructor graphGUI
graphGUI::graphGUI(const std::string& _file, sf::Vector2f _spritePosition) : file(_file), spritePosition(_spritePosition)  {
	std::cout << "START GRAPH GUI...\n";
	textureGUI = new(sf::Texture);
	textureGUI->loadFromFile(file);
	spriteGUI.setTexture(*textureGUI);
	spriteGUI.setPosition(spritePosition);
}

graphGUI::graphGUI(textGUI) {

}

//Destructor: graphGUI
graphGUI::~graphGUI() { std::cout << "END GRAPH GUI...\n"; }

//Get position graphGUI
sf::Vector2f graphGUI::getPosition() { return sf::Vector2f(); }

//Set position graphGUI
void graphGUI::setPosition(sf::Vector2f _newPos) { spriteGUI.setPosition(_newPos); }

void graphGUI::guiGraphRect(int _percent) {
	spriteGUI.setTextureRect(sf::IntRect(0, 0, _percent, 25));
}

//Draw graphGUI
void graphGUI::Draw(sf::RenderTarget& target){ target.draw(spriteGUI); }

void graphGUI::Update(){
	
}

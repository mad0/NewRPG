#include "engine.h"

Engine::Engine(sf::RenderWindow *window) {
	std::cout << "START ENGINE...\n";
	this->window = window;
	this->window->setFramerateLimit(30);
	sf::Font font;
	std::string name("Heeero");
	font.loadFromFile("Fire.otf");
	//Y + 30 na pozycji
	guiButtons.push_back(new textGUI("Name:", font, sf::Vector2f(30, 40)));
	guiButtons.push_back(new textGUI("Gerwazy Bomba", font, sf::Vector2f(180, 40), sf::Color(255,122,23)));
	guiButtons.push_back(new textGUI("Health Points:", font, sf::Vector2f(30, 70)));
	guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 70), sf::Color(255, 122, 23)));
	guiButtons.push_back(new textGUI("Damage:", font, sf::Vector2f(30, 100)));
	guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 100), sf::Color(255, 122, 23)));
	guiButtons.push_back(new textGUI("Exp:", font, sf::Vector2f(30, 130) ));
	guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 130), sf::Color(255, 122, 23)));
	guiButtons.push_back(new textGUI("Level:", font, sf::Vector2f(30, 160)));
	guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 160), sf::Color(255, 122, 23)));
	guiButtons.push_back(new textGUI("Map name:", font, sf::Vector2f(650, 10)));
	//GUI SPRITES
	guiSprites.push_back(new graphGUI("textures/line.jpg", sf::Vector2f(200,200)));
}

Engine::~Engine() {
	for (int x = 0; x < guiButtons.size(); x++)
		delete guiButtons[x];
	for (int x = 0; x < guiSprites.size(); x++)
		delete guiButtons[x];
	std::cout << "END ENGINE...\n";

}

void Engine::Draw() {
	window->clear();
	//guiSprites
	for (auto i : guiSprites)
		i->Draw(*window);
	//guiButtons
	for (auto i : guiButtons)
		i->Draw(*window);
	window->display();
}

void Engine::Update() {

}
#include "engine.h"

Engine::Engine(sf::RenderWindow *window) {
	std::cout << "START ENGINE...\n";
	this->window = window;
	this->window->setFramerateLimit(30);
	player = new Character(10);
	sf::Font font;
	std::string name("Heeero");
	font.loadFromFile("Fire.otf");
	//Y + 30 na pozycji
	guiButtons.push_back(new textGUI("Name:", font, sf::Vector2f(30, 40)));
	guiButtons.push_back(new textGUI("Gerwazy Bomba", font, sf::Vector2f(180, 40), sf::Color(255,122,23)));
	//guiButtons.push_back(new textGUI("Health Points:", font, sf::Vector2f(30, 70)));
	//guiButtons.push_back(new textGUI(std::to_string(player->getHP())+" / "+std::to_string(player->getMaxHP()), font, sf::Vector2f(180, 70), sf::Color(sf::Color::Red)));
	//guiButtons.push_back(new textGUI("Damage:", font, sf::Vector2f(30, 100)));
	//guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 100), sf::Color(255, 122, 23)));
	//guiButtons.push_back(new textGUI("Exp:", font, sf::Vector2f(30, 130) ));
	//guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 130), sf::Color(255, 122, 23)));
	//guiButtons.push_back(new textGUI("Level:", font, sf::Vector2f(30, 160)));
	//guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 160), sf::Color(255, 122, 23)));
	//guiButtons.push_back(new textGUI("Map name:", font, sf::Vector2f(650, 10)));
	guiGraph.push_back(new graphGUI("gfx/hp.png", sf::Vector2f(30,70)));
	guiGraph.push_back(new graphGUI("gfx/bg.png", sf::Vector2f(30, 70)));
}

Engine::~Engine() {
	for (int x = 0; x < guiButtons.size(); x++)
		delete guiButtons[x];
		for (int x = 0; x < guiGraph.size(); x++)
			delete guiGraph[x];
	delete player;
	std::cout << "END ENGINE...\n";
}

void Engine::Draw() {
	window->clear();
	for (auto i : guiButtons)
		i->Draw(*window);
	for (auto i : guiGraph)
		i->Draw(*window);
	window->display();
}

void Engine::Update() {

}
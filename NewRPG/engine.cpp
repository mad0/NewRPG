#include "engine.h"

Engine::Engine(sf::RenderWindow & _window) : window(_window) {
	std::cout << "START ENGINE...\n";
	window.setFramerateLimit(30);
	window.setKeyRepeatEnabled(false);
	player = new Character(1000);
	std::string name("Heeero");
	font.loadFromFile("Fire.otf");
	//Y + 30 na pozycji
	//guiGraph.push_back(new graphGUI("gfx/hpBG2.png",
	//								sf::Vector2f(20,20)));
	//guiGraph.push_back(new graphGUI("gfx/hpBAR.png", 
	//								sf::Vector2f(20, 20)));
	//guiGraph.push_back(new graphGUI("gfx/stats.png",
	//								sf::Vector2f(400,200)));
	//guiButtons.push_back(new textGUI("Name:", font, sf::Vector2f(30, 40)));
	//guiButtons.push_back(new textGUI("Gerwazy Bomba", font, sf::Vector2f(180, 40), sf::Color(255,122,23)));
	//guiButtons.push_back(new textGUI("Health Points:", font, sf::Vector2f(50, 20)));
	//guiButtons.push_back(new styleGUI(std::to_string(player->getHP())
	//								,font,
	//								sf::Vector2f(110, 40), 
	//								sf::Color(sf::Color::White), 15));
	//guiButtons.push_back(new textGUI("Damage:", font, sf::Vector2f(30, 100)));
	//guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 100), sf::Color(255, 122, 23)));
	//guiButtons.push_back(new textGUI("Exp:", font, sf::Vector2f(30, 130) ));
	//guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 130), sf::Color(255, 122, 23)));
	//guiButtons.push_back(new textGUI("Level:", font, sf::Vector2f(30, 160)));
	//guiButtons.push_back(new textGUI("------------", font, sf::Vector2f(180, 160), sf::Color(255, 122, 23)));
	//guiButtons.push_back(new textGUI("Map name:", font, sf::Vector2f(650, 10)));
}

Engine::~Engine() {
	//for (int x = 0; x < guiButtons.size(); x++)
	//	delete guiButtons[x];
	//	for (int x = 0; x < guiGraph.size(); x++)
	//		delete guiGraph[x];
	//delete player;
	//std::cout << "END ENGINE...\n";
}

void Engine::Events(sf::Event & _zdarz) {
	if(_zdarz.type == sf::Event::KeyPressed && _zdarz.key.code == sf::Keyboard::Num1) {
		player->setHP(-100);
	}

	if (_zdarz.type == sf::Event::KeyPressed && _zdarz.key.code == sf::Keyboard::Num2) {
		player->setHP(100);
	}
	
	if (_zdarz.type == sf::Event::KeyPressed && _zdarz.key.code == sf::Keyboard::C) {
		player->setHP(100);
	}
}


void Engine::Draw() {
	window.clear();
	//for (auto i : guiGraph)
	//	i->Draw(*window);
	//for (auto i : guiButtons)
	//	i->Draw(*window);
	
	window.display();
}

void Engine::Update() {
	//guiButtons[0]->setText(std::to_string(player->getHP()));
	//std::cout << player->getHP() << " - " << player->drawHP() << "\n";
	//guiGraph[1]->guiGraphRect(player->drawHP());
}
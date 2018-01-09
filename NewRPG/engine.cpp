#include "engine.h"

Engine::Engine(sf::RenderWindow & _window) : window(_window) {
	std::cout << "START ENGINE...\n";
	window.setFramerateLimit(30);
	window.setKeyRepeatEnabled(false);
	player = new Character(1000);
	std::string name("Heeero");
	cout = 0;
	font.loadFromFile("Fire.otf");
	kontener.setPrimitiveType(sf::Quads);
	kontener.resize(100);
	for (int z = 0;  z < 8; z++) {
		xx = &kontener[z*4];
		std::cout << z * 4 << "\n";
		xx[0].position = sf::Vector2f(512, 10+z*70);
		xx[1].position = sf::Vector2f(576, 10+z*70);
		xx[2].position = sf::Vector2f(576, 64+z*70);
		xx[3].position = sf::Vector2f(512, 64+z*70);
		xx[0].color = sf::Color::White;
		xx[1].color = sf::Color::White;
		xx[2].color = sf::Color::White;
		xx[3].color = sf::Color::White; 

	}
	


		

	
	box.setPrimitiveType(sf::Quads);
	box.resize(4);
	box2.setPrimitiveType(sf::Quads);
	box2.resize(4);
	box3.setPrimitiveType(sf::Quads);
	box3.resize(4);
	//sf::VertexArray box(sf::Quads, 4);
	box[0].position = sf::Vector2f(32, 0);
	box[1].position = sf::Vector2f(64, 16);
	box[2].position = sf::Vector2f(32, 32);
	box[3].position = sf::Vector2f(0, 16);
	box[0].color = sf::Color::Red;
	box[1].color = sf::Color::Green;
	box[2].color = sf::Color::Blue;
	box[3].color = sf::Color::Magenta;
	box2[0].position = sf::Vector2f(96, 0);
	box2[1].position = sf::Vector2f(128, 16);
	box2[2].position = sf::Vector2f(96, 32);
	box2[3].position = sf::Vector2f(64, 16);
	box2[0].color = sf::Color::Red;
	box2[1].color = sf::Color::Green;
	box2[2].color = sf::Color::Blue;
	box2[3].color = sf::Color::Magenta;
	box3[0].position = sf::Vector2f(64, 16);
	box3[1].position = sf::Vector2f(96, 32);
	box3[2].position = sf::Vector2f(64, 48);
	box3[3].position = sf::Vector2f(32, 32);
	box3[0].color = sf::Color::Red;
	box3[1].color = sf::Color::Green;
	box3[2].color = sf::Color::Blue;
	box3[3].color = sf::Color::Magenta;
	

	//widok.setSize(1440, 960);
	//widok.rotate(0);


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
	//window.setView(widok);
	window.clear();
	window.draw(box);
	window.draw(box2);
	window.draw(box3);
	window.draw(kontener);
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
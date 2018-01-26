#pragma once
#include "GUI.h"

#include <vector>
#include "character.h"
#include <iostream>

class Engine {
private:
	Character *player;
	sf::VertexArray box,box2, box3;
	sf::VertexArray kontener;
	sf::VertexArray isometric;
	sf::Vertex *xx;
	sf::Vertex *yy;
	sf::View widok;
	sf::RenderWindow &window;
	sf::Font font;
	int cout;
public:
	Engine(sf::RenderWindow&);
	~Engine();
	void Events(sf::Event&);
	void Update();
	void Draw();
};
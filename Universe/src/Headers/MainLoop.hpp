#pragma once
#include "Common.hpp"
#include "Useful.hpp"

class World {
private:
	sf::Clock fpsClock;
	sf::Text fpsText;
	
private:
	unsigned int Frame = 0;

public:
	World();

public:
	void input();
	void update();
	void render();
};
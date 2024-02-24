#pragma once
#include <SFML/Graphics.hpp>

class Body {
private:
	sf::Vector2f acc = { 0, 0 };
	sf::Vector2f lastPos = { 0, 0 };

private:
	float mass = 0.0f;

public:
	Body(float Mass, sf::Color Color, sf::Vector2f initialVelocity);

public:
	void physicsUpdate(float dt);

public:
	float getMass();
	
public:
	sf::Vector2f vel = { 0, 0 };
	sf::Vector2f pos = { 0, 0 };
	sf::Color color = sf::Color::White;
};
#include "Body.hpp"

Body::Body(float Mass, sf::Color Color, sf::Vector2f initialVelocity) : mass(Mass), color(Color), vel(initialVelocity) {}

void Body::physicsUpdate(float dt)
{
    acc = { 0, 0 };

    // Verlet
    sf::Vector2f temp_pos = pos;
    pos += vel + acc * dt * dt;
    lastPos = temp_pos;

    vel = pos - lastPos;
}

float Body::getMass()
{
    return mass;
}

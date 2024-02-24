#include "MainLoop.hpp"

World::World()
{
	setupFps(&fpsText);
}

void World::input()
{
	sf::Event event;
	while (_window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed: {
			_window->close();
			break;
		}
		case sf::Event::Resized: {
			_window->setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
			break;
		}
		case sf::Event::MouseMoved: {
			break;
		}
		case sf::Event::MouseButtonPressed: {
			switch (event.mouseButton.button)
			{
			default:
				break;
			}
			break;
		}
		default:
			break;
		}
	}
}

void World::update()
{
	_window->clear();
}

void World::render()
{
	updateFPS(&fpsText, &Frame, &fpsClock);
	_window->display();
}

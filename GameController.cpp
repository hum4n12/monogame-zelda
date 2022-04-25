#include "GameController.h"
#include <iostream>
using namespace gc;


GameController::GameController(sf::RenderWindow* window) : window(window)
{

}

void GameController::events()
{
	sf::Event event;
	while (this->window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			this->window->close();
		}

		if (this->player != nullptr)
		{
			this->player->handleKeyboard(&event);
		}
	}
}

void GameController::init()
{
	this->player = new gobj::Player({ 200,200 }, new sf::RectangleShape({ 50,50 }));
	this->player->getShape()->setFillColor(sf::Color::Red);
	this->shape = new sf::CircleShape(100.0f);
	this->shape->setFillColor(sf::Color::Green);
}

void GameController::update(double delta)
{
	this->events();
	action::Action* action = this->player->update(delta);
	if (action != nullptr) {
		action->execute(delta);
	}
	
}

void GameController::draw()
{
	this->window->clear();
	this->window->draw(*this->shape);
	this->player->draw(this->window);
	window->display();
}

void GameController::clear()
{
	delete this->shape;
	delete this->player;
}
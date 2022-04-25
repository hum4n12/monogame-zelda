#include "Player.h"
#include <iostream>

using namespace gobj;

action::Action* gobj::Player::update(double delta)
{
	return this->currentAction; 
}

void gobj::Player::handleKeyboard(sf::Event* e)
{
	if (e->type == sf::Event::KeyPressed)
	{	
		if (e->key.code == sf::Keyboard::D)
		{
			this->dir.x = 1;
		}

		if (e->key.code == sf::Keyboard::A)
		{
			this->dir.x = -1;
		}

		if (e->key.code == sf::Keyboard::W)
		{
			this->dir.y = -1;
		}

		if (e->key.code == sf::Keyboard::S)
		{
			this->dir.y = 1;
		}
		if(this->currentAction == nullptr)
			this->currentAction = new action::MoveAction(this, this->speed);
	}

	else if (e->type == sf::Event::KeyReleased)
	{
		if (e->key.code == sf::Keyboard::D)
		{
			if(this->dir.x > 0)
				this->dir.x = 0;
		}

		if (e->key.code == sf::Keyboard::A)
		{
			if (this->dir.x < 0)
				this->dir.x = 0;
		}

		if (e->key.code == sf::Keyboard::W)
		{
			if (this->dir.y < 0)
				this->dir.y = 0;
		}

		if (e->key.code == sf::Keyboard::S)
		{
			if (this->dir.y > 0)
				this->dir.y = 0;
		}

		if (this->dir.x == 0 && this->dir.y == 0)
		{
			delete this->currentAction;
			this->currentAction = nullptr;
		}
	}
}

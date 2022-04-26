#include "Player.h"
#include "MoveAction.h"
#include <iostream>

void Player::update()
{
	//EXAMPLE, NEED TO EXCLUDE IT TO KEYBOARD HANDLER
	Action* action = nullptr;
	if (IsKeyDown(KEY_W) || IsKeyDown(KEY_A) || IsKeyDown(KEY_S) || IsKeyDown(KEY_D))
	{
		if (IsKeyDown(KEY_W))
		{
			this->direction.y = -1;
		}
		
		if (IsKeyDown(KEY_A))
		{
			this->direction.x = -1;
		}

		if (IsKeyDown(KEY_S))
		{
			this->direction.y = 1;
		}

		if (IsKeyDown(KEY_D))
		{
			this->direction.x = 1;
		}

		//action = new MoveAction(this->direction,this->speed);
	}

	this->move();

	if (action != nullptr)
	{
		action->execute(*this);
		delete action;
	}
}

void Player::move()
{
	this->setPosition(this->basicMove(this->getPosition(), this->speed));
}

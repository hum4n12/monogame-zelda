#include "KeyboardHandler.h"

KeyboardHandler::KeyboardHandler(Player* player)
{
	this->player = player;
}

void KeyboardHandler::handleInput()
{
	if (IsKeyDown(KEY_W) || IsKeyDown(KEY_A) || IsKeyDown(KEY_S) || IsKeyDown(KEY_D))
	{
		Vector2 direction = { 0,0 };
		if (IsKeyDown(KEY_W))
		{
			direction.y = -1;
		}

		if (IsKeyDown(KEY_A))
		{
			direction.x = -1;
		}

		if (IsKeyDown(KEY_S))
		{
			direction.y = 1;
		}

		if (IsKeyDown(KEY_D))
		{
			direction.x = 1;
		}

		this->player->setDirection(direction);
		this->player->move();
	}
}
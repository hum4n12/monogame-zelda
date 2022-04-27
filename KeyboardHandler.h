#pragma once
#include "Action.h"
#include "Player.h"
#include "MoveAction.h"
#include <vector>

class KeyboardHandler
{
public:
	KeyboardHandler(Player* player);
	void handleInput();
private:
	Player* player;
};
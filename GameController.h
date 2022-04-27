#pragma once
#include "Player.h"
#include "KeyboardHandler.h"
#include <vector>

class GameController
{
public:
	GameController();
	void init();
	void update();
	void draw();
	void clear();
private:
	Player* player;
	KeyboardHandler* keyboardHandler;
	std::vector<Actor*> actors; //interactive entities
	//Action events();
};
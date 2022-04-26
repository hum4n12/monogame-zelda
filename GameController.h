#pragma once
#include "Player.h"
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
	std::vector<Actor*> actors; //interactive entities
	//Action events();
};
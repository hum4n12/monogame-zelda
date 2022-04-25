#pragma once
#include <memory>
#include "SFML/Graphics.hpp"
#include "Player.h"

namespace gc
{

	class GameController
	{
	public:
		GameController(sf::RenderWindow* window);
		void init();
		void update(double delta);
		void draw();
		void clear();
	private:
		gobj::Player* player;
		sf::RenderWindow* window = nullptr;
		sf::CircleShape* shape = nullptr;
		void events();
	};


}
#pragma once
#include "SFML/Graphics.hpp"
#include "Action.h"

namespace gobj 
{
	class GameObject
	{
	public:
		GameObject(sf::Vector2f, sf::Shape* shape);
		GameObject(sf::Vector2f, sf::Shape* shape, sf::Texture* texture);
		GameObject(sf::Vector2f, sf::Shape* shape, sf::Texture* texture,sf::IntRect rect);
		sf::Shape* getShape();
		sf::Vector2f getPosition();
		sf::Vector2f getDirection();
		void setPosition(sf::Vector2f pos);
		virtual action::Action* update(double dt) = 0;
		virtual void draw(sf::RenderWindow* screen);
		virtual ~GameObject();
	protected:
		sf::Vector2f pos;
		sf::Vector2f dir{ 0,0 };
		sf::Sprite sprite;
		sf::IntRect rect;
		sf::Shape* shape = nullptr;
		sf::Texture* texture = nullptr;
	};
}

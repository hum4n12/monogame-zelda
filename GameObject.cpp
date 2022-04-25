#include "GameObject.h"

using namespace gobj;

GameObject::GameObject(sf::Vector2f pos, sf::Shape* shape) : pos(pos), shape(shape)
{

}

GameObject::GameObject(sf::Vector2f pos, sf::Shape* shape,sf::Texture* texture) : pos(pos), shape(shape), texture(texture)
{
	this->sprite.setTexture(*texture);
}

GameObject::GameObject(sf::Vector2f pos, sf::Shape* shape, sf::Texture* texture,sf::IntRect rect) : pos(pos), shape(shape), texture(texture),rect(rect)
{
	this->sprite.setTexture(*texture);
	this->sprite.setTextureRect(rect);
}

sf::Shape* gobj::GameObject::getShape()
{
	return this->shape;
}

sf::Vector2f GameObject::getPosition()
{
	return this->pos;
}

sf::Vector2f gobj::GameObject::getDirection()
{
	return this->dir;
}

void GameObject::setPosition(sf::Vector2f pos)
{
	this->pos = pos;
}

void GameObject::draw(sf::RenderWindow* screen)
{
	if (this->texture != nullptr)
	{
		screen->draw(this->sprite);
	}
	else
	{
		this->shape->setPosition(this->pos);
		screen->draw(*this->shape);
	}
}

GameObject::~GameObject()
{

}

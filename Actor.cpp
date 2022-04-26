#include "Actor.h"

Actor::Actor(shape::Shape* shape) : shape(shape)
{
	
}

shape::Shape* Actor::getShape()
{
	return this->shape;
}

Vector2 Actor::getPosition()
{
	return this->shape->getPosition();
}

void Actor::setPosition(Vector2 pos)
{
	this->shape->setPoisition(pos);
}

void Actor::draw()
{
	this->shape->draw();
}

Actor::~Actor()
{

}

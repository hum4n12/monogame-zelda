#include "MoveAction.h"
#include "Movable.h"
#include <math.h>

MoveAction::MoveAction(Movable* movable)
{
	this->movable = movable;
}

void MoveAction::setDirection(Vector2 direction)
{
	this->direction = direction;
}

void MoveAction::setSpeed(float speed)
{
	this->speed = speed;
}

void MoveAction::execute()
{
	this->movable->move();
}

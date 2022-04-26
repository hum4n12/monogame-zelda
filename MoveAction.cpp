#include "MoveAction.h"
#include "Movable.h"
#include <math.h>

MoveAction::MoveAction(Vector2 dir, float speed)
{
	this->dir = dir;
	this->speed = speed;
}

void MoveAction::setDir(Vector2 dir)
{
	this->dir = dir;
}

void MoveAction::setSpeed(float speed)
{
	this->speed = speed;
}

void MoveAction::execute(Entity& entity)
{
	//(Movable*)entity.move();
}

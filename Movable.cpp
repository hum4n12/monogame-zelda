#include "Movable.h"
#include <math.h>

Vector2 Movable::basicMove(Vector2 position, float speed)
{
	float dt = GetFrameTime();

	if (direction.x == 0 && direction.y == 0) 
	{
		return position;
	}

	Vector2 newPosition;
	double length = sqrt((double)direction.x * (double)direction.x + (double)direction.y * (double)direction.y);

	newPosition.x = direction.x / length;
	newPosition.y = direction.y / length;

	newPosition.x *= this->speed * dt;
	newPosition.y *= this->speed * dt;

	newPosition.x += position.x;
	newPosition.y += position.y;

	direction.x = 0;
	direction.y = 0;

	return newPosition;
}

void Movable::setDirection(Vector2 direction)
{
	this->direction = direction;
}

float Movable::getSpeed()
{
	return this->speed;
}

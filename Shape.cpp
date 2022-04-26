#include "Shape.h"

Vector2 shape::Shape::getPosition()
{
	return this->pos;
}

void shape::Shape::setPoisition(Vector2 pos)
{
	this->pos = pos;
}

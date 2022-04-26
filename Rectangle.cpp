#include "Rectangle.h"

shape::Rectangle::Rectangle(int width, int height, Vector2 pos)
{
	this->width = width;
	this->height = height;
	this->pos = pos;
}

shape::Rectangle::Rectangle(int width, int height, Vector2 pos, Color color)
{
	this->width = width;
	this->height = height;
	this->pos = pos;
	this->color = color;
}

void shape::Rectangle::draw()
{
	DrawRectangle(pos.x, pos.y, width, height, color);
}

#pragma once
#include "raylib.h"
#include "Entity.h"

class Movable
{
public:
	virtual void move() = 0;
	Vector2 basicMove(Vector2 position, float speed);
	void setDirection(Vector2 direction);
	float getSpeed();
protected:
	Vector2 direction = { 0,0 };
	float speed = 500.f;
};
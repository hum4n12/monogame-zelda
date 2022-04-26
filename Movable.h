#pragma once
#include "raylib.h"
#include "Entity.h"

class Movable : public Entity
{
public:
	virtual void move() = 0;
	Vector2 basicMove(Vector2 position, float speed);
protected:
	Vector2 direction = { 0,0 };
	float speed = 500.f;
};
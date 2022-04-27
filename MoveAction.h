#pragma once
#include "Action.h"
#include "Movable.h"
#include "raylib.h"
class MoveAction : public Action
{
public:
	MoveAction(Movable* movable);
	void setDirection(Vector2 direction);
	void setSpeed(float speed);
	virtual void execute() override;
private:
	Vector2 direction;
	float speed;
	Movable* movable;
};
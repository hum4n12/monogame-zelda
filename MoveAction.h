#pragma once
#include "Action.h"
#include "Movable.h"
#include "raylib.h"
class MoveAction : public Action
{
public:
	MoveAction(Vector2 dir, float speed);
	void setDir(Vector2 dir);
	void setSpeed(float speed);
	virtual void execute(Entity& entity) override;
private:
	Vector2 dir;
	float speed;
};
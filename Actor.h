#pragma once
#include "Action.h"
#include "raylib.h"
#include "Shape.h"

class Actor
{
public:
	Actor(shape::Shape* shape);
	shape::Shape* getShape();
	Vector2 getPosition();
	void setPosition(Vector2 pos);
	virtual void update() = 0;
	virtual void draw();
	virtual ~Actor();
protected:
	shape::Shape* shape = nullptr;
};

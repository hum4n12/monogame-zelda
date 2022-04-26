#pragma once
#include "Actor.h"
#include "Movable.h"

class Player :public Actor, public Movable
{
public:
	using Actor::Actor;
	virtual void update() override;
	virtual void move() override;
};
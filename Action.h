#pragma once
#include "Entity.h"

class Action
{
public:
	virtual void execute(Entity& entity) = 0;
	//virtual void undo(gameobject::GameObject& go) = 0;
	virtual ~Action();
};
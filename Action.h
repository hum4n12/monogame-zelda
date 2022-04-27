#pragma once
#include "Entity.h"

class Action
{
public:
	Action();
	virtual void execute() = 0;
	//virtual void undo(gameobject::GameObject& go) = 0;
	virtual ~Action();
};
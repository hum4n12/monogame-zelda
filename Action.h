#pragma once
#include "SFML/Graphics.hpp"

namespace gobj 
{
	class GameObject;
}

namespace action
{
	class Action
	{
	public:
		virtual void execute(double delta) = 0;
		virtual ~Action();
	protected:
		Action(gobj::GameObject * go);
		gobj::GameObject* go = nullptr;
	};
}
#include "GameObject.h"
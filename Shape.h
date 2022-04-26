#pragma once
#include "raylib.h"

namespace shape
{
	class Shape
	{
	public:
		virtual void draw() = 0;
		Vector2 getPosition();
		void setPoisition(Vector2 pos);
	protected:
		Vector2 pos;
	};
}
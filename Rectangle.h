#pragma once
#include "Shape.h"
#include "raylib.h"

namespace shape
{
	class Rectangle : public Shape
	{
	public:
		// position of upper-left corner
		Rectangle(int width, int height, Vector2 pos);
		Rectangle(int width, int height, Vector2 pos, Color color);
		virtual void draw() override;
	private:	
		int width;
		int height;
		Color color = RED;
	};
}
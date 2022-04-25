#pragma once
#include "Action.h"

namespace action
{
	class MoveAction : public Action
	{
	public:
		MoveAction(gobj::GameObject* go, double speed);
		virtual void execute(double dt) override;
	private:
		double speed;
	};
}
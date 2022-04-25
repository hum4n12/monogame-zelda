#pragma once
#include "GameObject.h"
#include "MoveAction.h"

namespace gobj
{
	class Player :public GameObject
	{
	public:
		using GameObject::GameObject;
		virtual action::Action* update(double delta) override;
		void handleKeyboard(sf::Event* e);
	private:
		action::Action* currentAction = nullptr;
		double speed = 500.f;
	};
}



#include "MoveAction.h"
#include <iostream>
using namespace action;

MoveAction::MoveAction(gobj::GameObject* go,double speed): speed(speed),Action(go)
{
	std::cout << "created\n";
}

void MoveAction::execute(double dt)
{
	sf::Vector2f direction = this->go->getDirection();

	if (direction.x == 0 && direction.y == 0) return;
	sf::Vector2f newPos;
	double length = sqrt(direction.x * direction.x + direction.y * direction.y);
	
	newPos.x = direction.x / length;
	newPos.y = direction.y / length;

	newPos.x *= this->speed * dt;
	newPos.y *= this->speed * dt;

	newPos += go->getPosition();
	go->setPosition(newPos);
}
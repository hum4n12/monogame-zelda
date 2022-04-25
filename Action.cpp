#include "Action.h"
#include <iostream>
using namespace action;
using namespace gobj;

action::Action::~Action()
{
	std::cout << "destroyed\n";
}

Action::Action(GameObject* go): go(go)
{

}
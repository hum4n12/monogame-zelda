#include "GameController.h"
#include <iostream>
#include "raylib.h"
#include "Rectangle.h"

GameController::GameController()
{

}

//action::Action GameController::events()
//{
//	
//}

void GameController::init()
{
	this->player = new Player(new shape::Rectangle(50, 50, { 200, 200 }));
	this->actors.push_back(player);
	this->keyboardHandler = new KeyboardHandler(this->player);
}

void GameController::update()
{
	this->keyboardHandler->handleInput();

	for (auto& actor : this->actors)
	{
		actor->update();
	}
}

void GameController::draw()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);

	for (auto& actor : this->actors)
	{
		actor->draw();
	}

	EndDrawing();
}

void GameController::clear()
{
	delete this->player;
}
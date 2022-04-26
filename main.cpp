#include <iostream>
#include "raylib.h"
#include "GameController.h"
#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define TITLE "Adventure"
#define FPS 60

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(FPS);

    GameController GC;

    GC.init();

    while (!WindowShouldClose())
    {
        GC.update();
        GC.draw();
    }

    GC.clear();
    CloseWindow();

    return 0;
}
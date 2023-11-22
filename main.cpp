#include "include/to_include.hpp"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "raylib [textures] example - image drawing");
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		ClearBackground(BLACK);
		EndDrawing();
    }
    CloseWindow();
return 0;
}
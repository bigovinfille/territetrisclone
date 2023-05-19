// Terri.cpp, tetris clone 
// "Terri"
// start 5/19/23
// last edited 5/19/23

#include <raylib.h>

int main(void) 
{

	//init window inits window wow
	const int screenW = 800;
	const int screenH = 460;

	InitWindow(screenW, screenH, "TESTT!!");

	Vector2 ballPosition = { (float)screenW/2, (float)screenH/2 };

	//set fps... sets fps
	SetTargetFPS(30);

	//game loooop
	//note: WindowShouldClose detects window close button or esc key enters!
	while (!WindowShouldClose()) 
	{
		// update
		// 
		if (IsKeyDown(KEY_RIGHT)) 
			ballPosition.x += 2.0f;
		if (IsKeyDown(KEY_LEFT))
			ballPosition.x -= 2.0f;
		if (IsKeyDown(KEY_UP))
			ballPosition.y -= 2.0f;
		if (IsKeyDown(KEY_DOWN))
			ballPosition.y += 2.0f;	
		//

		//draw
		//
		BeginDrawing();
			
			ClearBackground(RAYWHITE);

			DrawText ("move ball with arrow keys", 10, 10, 20, DARKGRAY);

			DrawCircleV (ballPosition, 50, GREEN);
		EndDrawing();
		//

	}
	//clean up
	CloseWindow();
	//
	

	return 0;
}


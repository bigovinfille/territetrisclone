// Tetris clone 
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

	//set fps... sets fps
	SetTargetFPS(30);

	//game loooop
	//note: WindowShouldClose detects window close button or esc key enters!
	while (!WindowShouldClose()) 
	{
		// to come

		BeginDrawing();
			
			ClearBackground(RAYWHITE);

			DrawText("My first window swag", 190, 200, 20, LIGHTGRAY);

		EndDrawing();


	}
	//clean up
	CloseWindow();
	//
	

	return 0;
}


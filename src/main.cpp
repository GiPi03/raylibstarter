#include <cstdlib>
#include "raylib.h"
#include "config.h"
#include "Diff.h"


int main() {
    // Raylib initialization
    // Project name, screen size, fullscreen mode etc. can be specified in the config.h.in file
    std::cout  << "Welcome to Tower Defense!" << std::endl;
    std::cout << "Please select a difficulty:  " << std::endl;
    std::cout << "Easy" << std::endl;
    std::cout << "Medium" << std::endl;
    std::cout << "Hard" << std::endl;
    std::cin >>  TowerDefense::ant;
   
    if (TowerDefense::question = true)
    {
        InitWindow(Game::ScreenWidth, Game::ScreenHeight, Game::PROJECT_NAME);
        SetTargetFPS(60);

#ifdef GAME_START_FULLSCREEN
        ToggleFullscreen();
        std::cin >> Game::Difficulty::difficulty;
        std::cout << "Difficulty: " << Game::Difficulty::difficulty << std::endl; "
#endif

            // Your own initialization code here
            // ...
            // ...
            Texture2D myTexture = LoadTexture("assets/graphics/testimage.png");

        // Main game loop
        while (!WindowShouldClose()) // Detect window close button or ESC key
        {
            // Updates that are made by frame are coded here
            // ...
            // ...

            BeginDrawing();
            // You can draw on the screen between BeginDrawing() and EndDrawing()
            // ...
            // ...
            ClearBackground(WHITE);
            DrawText("Hello, world!", 10, 10, 30, LIGHTGRAY);
            DrawTexture(myTexture, 10, 100, WHITE);

            EndDrawing();
        } // Main game loop end

        // De-initialization here
        // ...
        // ...
        UnloadTexture(myTexture);

        // Close window and OpenGL context
        CloseWindow();

        return EXIT_SUCCESS;
    }
}

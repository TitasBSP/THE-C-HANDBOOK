/*******************************************************************************************
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 960;
    int screenHeight = 540;
    
    float titleX = 120;
    float titleY = 230;
    int titleSize = 50;
    
    float ButtonBinaryX = 300;
    float ButtonBinaryY = 220;
    
    float alphaButtonBinary = 0.0f;
    
    float TextBinaryX = 350;
    float TextBinaryY = 235;
    char TextBinary[8] = "BINARY";
    
    float ButtonDecimalX = 300;
    float ButtonDecimalY = 350;
    
    float alphaButtonDecimal = 0.0f;
    
   
    char title[64] = "Binary & Decimal Converter";

    InitWindow(screenWidth, screenHeight, "Binary & Decimal Converter");

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        
        // Draw
        //----------------------------------------------------------------------------------
        if (titleY > 75) {
            titleY -= 1.5;
        } else {
            if (alphaButtonBinary < 1.0f) alphaButtonBinary += 0.02f;
            DrawRectangle(310, 230, 300, 75, Fade(BLACK, alphaButtonBinary));
            DrawRectangle(ButtonBinaryX, ButtonBinaryY, 300, 75, Fade(WHITE, alphaButtonBinary));
            DrawText(TextBinary, TextBinaryX, TextBinaryY, 50, Fade(BLACK, alphaButtonBinary));
            
            if (alphaButtonDecimal < 1.0f) alphaButtonDecimal += 0.02f;
            DrawRectangle(310, 360, 300, 75, Fade(BLACK, alphaButtonDecimal));
            DrawRectangle(ButtonDecimalX, ButtonDecimalY, 300, 75, Fade(WHITE, alphaButtonDecimal));
        }
        
        
        BeginDrawing();
        
            ClearBackground(BLUE);
            
            DrawText(title, titleX, titleY, titleSize, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

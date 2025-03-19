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
#include "stdio.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    
    bool DrawScreen = true;

    int screenWidth = 960;
    int screenHeight = 540;
    
    float titleX = 120;
    float titleY = 230;
    int titleSize = 50;
    
    float ButtonBinaryX = 300;
    float ButtonBinaryY = 220;
    Rectangle ButtonBinary = {ButtonBinaryX, ButtonBinaryY, 300, 75};

    float alphaButtonBinary = 0.0f;
    
    float TextBinaryX = 350;
    float TextBinaryY = 235;
    char TextBinary[8] = "BINARY";
    
    float ButtonDecimalX = 300;
    float ButtonDecimalY = 350;
    Rectangle ButtonDecimal = {ButtonDecimalX, ButtonDecimalY, 300, 75};
    
    float alphaButtonDecimal = 0.0f;
    
    float TextDecimalX = 340;
    float TextDecimalY = 365;
    char TextDecimal[8] = "DECIMAL";
    
    char Copyright[64] = "© 2025 - Elevens";
    
   
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
            DrawRectangleRec(ButtonBinary, Fade(WHITE, alphaButtonBinary));
            DrawText(TextBinary, TextBinaryX, TextBinaryY, 50, Fade(BLACK, alphaButtonBinary));
            
            if (alphaButtonDecimal < 1.0f) alphaButtonDecimal += 0.02f;
            DrawRectangle(310, 360, 300, 75, Fade(BLACK, alphaButtonDecimal));
            DrawRectangleRec(ButtonDecimal, Fade(WHITE, alphaButtonDecimal));
            DrawText(TextDecimal, TextDecimalX, TextDecimalY, 50, Fade(BLACK, alphaButtonDecimal));
            DrawText(Copyright, 360, 500, 20, Fade(WHITE, alphaButtonDecimal));
        }
        
        Vector2 mousePos = GetMousePosition();
        
        bool isHoveringBinary = CheckCollisionPointRec(mousePos, ButtonBinary);
        bool isHoveringDecimal = CheckCollisionPointRec(mousePos, ButtonDecimal);
        
        if (isHoveringBinary) {
            DrawRectangleRec(ButtonBinary, Fade(LIGHTGRAY, alphaButtonBinary));
            DrawText(TextBinary, TextBinaryX, TextBinaryY, 50, Fade(BLACK, alphaButtonBinary));
        } else {
            DrawRectangleRec(ButtonBinary, Fade(WHITE, alphaButtonDecimal));
            DrawText(TextBinary, TextBinaryX, TextBinaryY, 50, Fade(BLACK, alphaButtonBinary));
        }
        
        if (isHoveringDecimal) {
            DrawRectangleRec(ButtonDecimal, Fade(LIGHTGRAY, alphaButtonBinary));
            DrawText(TextDecimal, TextDecimalX, TextDecimalY, 50, Fade(BLACK, alphaButtonBinary));
        } else {
            DrawRectangleRec(ButtonDecimal, Fade(WHITE, alphaButtonDecimal));
            DrawText(TextDecimal, TextDecimalX, TextDecimalY, 50, Fade(BLACK, alphaButtonBinary));
        }
        
        
        
        BeginDrawing();
        
            ClearBackground(BLUE);
            
            DrawText(title, titleX, titleY, titleSize, WHITE);
            
            if (isHoveringBinary && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                ClearBackground(BLUE);
                printf("Button Clicked!\n");
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

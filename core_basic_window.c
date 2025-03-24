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
#include "string.h"
#include "stdlib.h"

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
    
    // ----------------- BINARY ---------------------------- //
    
    float windowBinaryX = 220;
    float windowBinaryY = 250;
    Rectangle windowBinary = {windowBinaryX, windowBinaryY, 500, 75};
    
    float convertBinaryX = 360;
    float convertBinaryY = 360;
    Rectangle convertBinary = {convertBinaryX, convertBinaryY, 200, 50};
    
    float alphaConvertBinary = 0.0f;
    
    float outputBinaryX = 360;
    float outputBinaryY = 240;
    Rectangle outputBinary = {outputBinaryX, outputBinaryY, 200, 75};
    
    float alphaOutputBinary = 0.0f;
    
    // ------------------- DECIMAL -------------------------- //

    float windowDecimalX = 310;
    float windowDecimalY = 250;
    Rectangle windowDecimal = {windowDecimalX, windowDecimalY, 300, 75};
    
    float convertDecimalX = 360;
    float convertDecimalY = 360;
    Rectangle convertDecimal = {convertDecimalX, convertDecimalY, 200, 50};
    
    float alphaConvertDecimal = 0.0f;
    
    float outputDecimalX = 220;
    float outputDecimalY = 250;
    Rectangle outputDecimal = {outputDecimalX, outputDecimalY, 500, 75};
    
    float alphaOutputDecimal = 0.0f;
    
    // --------------------- MISCELLANEOUS ------------------------ //
    
    char Copyright[64] = "© 2025 - Elevens";
    
    char title[64] = "Binary & Decimal Converter";

    InitWindow(screenWidth, screenHeight, "Binary & Decimal Converter");

    SetTargetFPS(60);
    
    bool clearScreen = false;
    
    bool displayBinary = false;
    bool displayDecimal = false;
    
    bool displayBinaryResult = false;
    bool displayDecimalResult = false;
    
    char outputTextBinary[4];
    char outputTextDecimal[9];
    
    bool errorDecimal = false;
    
    //-------------------------------- Handling user input --------------------------------//
    
    char binaryInput[9] = "";
    char decimalInput[4] = "";
    int binaryLen = 0;
    int decimalLen = 0;
    
    int binaryArray[8] = {0};
    char resultDecimal[8] = "";
    //-------------------------------------------------------------------------------------//
    
    
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        //----------------------------------------------------------------------------------
        // TO-DO LIST:
        //
        // o Display the result
        //      o Reuse the logic from the terminal version
        //      o Make it so that the user has to press enter to get back to main menu
        //----------------------------------------------------------------------------------

        
        // Draw
        //----------------------------------------------------------------------------------
        // int pressedKey = GetCharPressed();
        
        Vector2 mousePos = GetMousePosition();
            
        bool isHoveringBinary = CheckCollisionPointRec(mousePos, ButtonBinary);
        bool isHoveringDecimal = CheckCollisionPointRec(mousePos, ButtonDecimal);
        
        bool isHoveringConvertBinary = CheckCollisionPointRec(mousePos, convertBinary);
        bool isHoveringConvertDecimal = CheckCollisionPointRec(mousePos, convertDecimal);
        
///////////////////////////////////// BINARY //////////////////////////////

        if (displayBinary) {
            int pressedKey = GetCharPressed();
            while (pressedKey > 0) {
            
                if (binaryLen < 8 && (pressedKey == '0' || pressedKey == '1')) {
                    binaryInput[binaryLen] = (char)pressedKey;
                    binaryLen++;
                    binaryInput[binaryLen] = '\0';
                    
                }
                pressedKey = GetCharPressed();
            }
            
            if (IsKeyPressed(KEY_BACKSPACE) && binaryLen > 0) {
                binaryLen--;
                binaryInput[binaryLen] = '\0';
            }
            
            if (IsKeyPressed(KEY_ENTER) && binaryLen == 8 || isHoveringConvertBinary && IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && binaryLen == 8) {
                int decimalNumbers = 128;
                int outputDecimal = 0;
                
                for (int binaryCounter = 0; binaryCounter < 8; ++binaryCounter) {
                    if (binaryInput[binaryCounter] == '1') {
                        outputDecimal += decimalNumbers;
                    }
                    decimalNumbers /= 2;
                };
                displayBinaryResult = true;
                sprintf(outputTextBinary, "%d", outputDecimal);
                printf("%s", outputTextBinary);
                fflush(stdout); // Debug to see working number
                
            }
        }
        
///////////////////////////////// DECIMAL ////////////////////////////////

        if (displayDecimal) {
            int pressedKey = GetCharPressed();
            while (pressedKey > 0) {
            
                if (decimalLen < 3 && pressedKey >= '0' && pressedKey <= '9') {
                    decimalInput[decimalLen] = (char)pressedKey;
                    decimalLen++;
                    decimalInput[decimalLen] = '\0';
                    
                }
                pressedKey = GetCharPressed();
            }
            
            if (IsKeyPressed(KEY_BACKSPACE) && decimalLen > 0) {
                decimalLen--;
                decimalInput[decimalLen] = '\0';
            }
            
            int decimalValue = atoi(decimalInput);  // Convert the string to an integer
            
            if ((IsKeyPressed(KEY_ENTER) && decimalLen < 4 && decimalLen > 0 && decimalValue <= 255 && decimalValue > 0) || 
                (isHoveringConvertDecimal && IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && decimalLen < 4 && decimalLen > 0 && decimalValue <= 255)) {           
                
                int binaryNumbers = 128;
                memset(resultDecimal, 0, sizeof(resultDecimal));
                
                for (int binaryCounter = 0; binaryCounter < 8; ++binaryCounter) { // binaryCounter goes through all 8 digits of the binary table!
                    binaryArray[binaryCounter] = (decimalValue / binaryNumbers) ? 1 : 0;
                    if (binaryArray[binaryCounter]) {
                        decimalValue -= binaryNumbers; // The current number is subtracted with the binary sequence number and the loop is repeated until binaryCounter goes up to 8
                        }
                        binaryNumbers /= 2; // If the inputNumber is indivisible by the current one, it will be divided by two
                }
                
                for (int i = 0; i < 8; i++) {
                    resultDecimal[i] = binaryArray[i] + '0'; // Convert int to char ('0' or '1')
                }
                resultDecimal[8] = '\0'; // Null-terminate the string
                
                displayDecimalResult = true;
                sprintf(outputTextDecimal, "%s", resultDecimal);
                
                printf("Result: %s", outputTextDecimal);
                fflush(stdout); // Debug to see working number
                
            } else if ((IsKeyPressed(KEY_ENTER) && decimalValue > 255) || (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && decimalValue > 255)) {
                errorDecimal = true;
            }
            
        }
   
        // ---------------------------- TITLE SCREEN ---------------------------- //
        if (isHoveringBinary && IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && clearScreen == false) {
            clearScreen = true;
            printf("Debug Working Here!\n");
            displayBinary = true;
        }
        
        if (isHoveringDecimal && IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && clearScreen == false) {
            clearScreen = true;
            printf("Debug Working Here Too!\n");
            displayDecimal = true;
        }
        
        // ---------------------------- BINARY ---------------------------- //
        
        if (displayBinaryResult || displayDecimalResult) {
            if (IsKeyPressed(KEY_SPACE)) {
                displayBinaryResult = false;
                displayDecimalResult = false;
                displayBinary = false;
                displayDecimal = false;
                binaryLen = 0;  // Reset binary input length
                decimalLen = 0;
                
                memset(binaryInput, 0, sizeof(binaryInput));  // Clear the binary input
                memset(decimalInput, 0, sizeof(decimalInput));  // Clear the decimal input
                
                clearScreen = false;  // Show the title screen again
                errorDecimal = false;
                
                alphaButtonBinary = 0.0f;
                alphaButtonDecimal = 0.0f;
                alphaConvertBinary = 0.0f;
                alphaOutputBinary = 0.0f;
            }
        }
        
        BeginDrawing();
        ClearBackground(BLUE);
        
        if (!clearScreen) {
            
            DrawText(title, titleX, titleY, titleSize, WHITE);
            
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
           
            if (isHoveringBinary) {
                DrawRectangleRec(ButtonBinary, Fade(LIGHTGRAY, alphaButtonBinary));
                DrawText(TextBinary, TextBinaryX, TextBinaryY, 50, Fade(BLACK, alphaButtonBinary));
            } else {
                DrawRectangleRec(ButtonBinary, Fade(WHITE, alphaButtonDecimal));
                DrawText(TextBinary, TextBinaryX, TextBinaryY, 50, Fade(BLACK, alphaButtonBinary));
            }
            
            if (isHoveringDecimal) {
                DrawRectangleRec(ButtonDecimal, Fade(LIGHTGRAY, alphaButtonDecimal));
                DrawText(TextDecimal, TextDecimalX, TextDecimalY, 50, Fade(BLACK, alphaButtonDecimal));
            } else {
                DrawRectangleRec(ButtonDecimal, Fade(WHITE, alphaButtonDecimal));
                DrawText(TextDecimal, TextDecimalX, TextDecimalY, 50, Fade(BLACK, alphaButtonDecimal));
            }
            
        } else if (displayBinary) {
            if (!displayBinaryResult) {
                ClearBackground(BLUE);
                if (alphaConvertBinary < 1.0f) alphaConvertBinary += 0.04f;
                DrawText("Please enter a BINARY number to convert\n               (00000000 - 11111111)", 50, 100, 40, Fade(WHITE, alphaConvertBinary));
                DrawRectangle(windowBinaryX+10, windowBinaryY+10, 500, 75, Fade(BLACK, alphaConvertBinary));
                DrawRectangleRec(windowBinary, Fade(WHITE, alphaConvertBinary));
                
                DrawRectangle(convertBinaryX+10, convertBinaryY+10, 200, 50, Fade(BLACK, alphaConvertBinary));
                DrawRectangleRec(convertBinary, Fade(WHITE, alphaConvertBinary));
                
                if (isHoveringConvertBinary) {
                    DrawRectangle(convertBinaryX+10, convertBinaryY+10, 200, 50, Fade(BLACK, alphaConvertBinary));
                    DrawRectangleRec(convertBinary, Fade(LIGHTGRAY, alphaButtonBinary));
                }
                
                DrawText("CONVERT", 375, 370, 35, Fade(BLACK, alphaConvertBinary));
                DrawText(binaryInput, 250, 260, 60, Fade(BLACK, alphaConvertBinary));
                
            } else if (displayBinaryResult) {
                ClearBackground(BLUE);
                
                if (alphaOutputBinary < 1.0f) alphaOutputBinary += 0.08f;
                DrawText("The binary equivalent to [              ] is", 80, 150, 40, Fade(WHITE, alphaOutputBinary));
                DrawText(binaryInput, 630, 150, 40, Fade(RED, alphaOutputBinary));
                
                DrawRectangle(outputBinaryX+10, outputBinaryY+10, 200, 75, Fade(BLACK, alphaOutputBinary));
                DrawRectangleRec(outputBinary, Fade(WHITE, alphaOutputBinary));
                DrawText(outputTextBinary, 410, 250, 60, Fade(BLACK, alphaOutputBinary));
                
                DrawText("PRESS [SPACE] TO RETURN", 320, 400, 20, Fade(WHITE, alphaOutputBinary));
                
                
            }
            
        } else if (displayDecimal) {            
            ClearBackground(BLUE);
            
            if (!displayDecimalResult) {
                ClearBackground(BLUE);
                if (alphaConvertDecimal < 1.0f) alphaConvertDecimal += 0.04f;
                DrawText("Please enter a DECIMAL number to convert\n                       (1-255)", 30, 100, 40, Fade(WHITE, alphaConvertDecimal));
                DrawRectangle(windowDecimalX+10, windowDecimalY+10, 300, 75, Fade(BLACK, alphaConvertDecimal));
                DrawRectangleRec(windowDecimal, Fade(WHITE, alphaConvertDecimal));
                
                DrawRectangle(convertDecimalX+10, convertDecimalY+10, 200, 50, Fade(BLACK, alphaConvertDecimal));
                DrawRectangleRec(convertDecimal, Fade(WHITE, alphaConvertDecimal));
                
                if (isHoveringConvertDecimal) {
                    DrawRectangle(convertDecimalX+10, convertDecimalY+10, 200, 50, Fade(BLACK, alphaConvertDecimal));
                    DrawRectangleRec(convertBinary, Fade(LIGHTGRAY, alphaButtonDecimal));
                }
                
                DrawText("CONVERT", 375, 370, 35, Fade(BLACK, alphaConvertDecimal));
                DrawText(decimalInput, 330, 260, 60, Fade(BLACK, alphaConvertDecimal));
                
                if (errorDecimal) {
                    DrawText("VALUE MUST BE BETWEEN [1-256]!", 280, 450, 20, Fade(YELLOW, alphaConvertDecimal));
                }
                
                
            } else if (displayDecimalResult) {
                ClearBackground(BLUE);
                
                if (alphaOutputDecimal < 1.0f) alphaOutputDecimal += 0.08f;
                DrawText("The decimal equivalent to [      ] is", 80, 150, 40, Fade(WHITE, alphaOutputDecimal));
                DrawText(decimalInput, 650, 150, 40, Fade(RED, alphaOutputDecimal));
                
                DrawRectangle(outputDecimalX+10, outputDecimalY+10, 500, 75, Fade(BLACK, alphaOutputDecimal));
                DrawRectangleRec(outputDecimal, Fade(WHITE, alphaOutputDecimal));
                DrawText(outputTextDecimal, 250, 260, 60, Fade(BLACK, alphaOutputDecimal));
                
                DrawText("PRESS [SPACE] TO RETURN", 320, 400, 20, Fade(WHITE, alphaOutputDecimal));
                   
            }
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

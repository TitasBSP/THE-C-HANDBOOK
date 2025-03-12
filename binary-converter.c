#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<Windows.h>

void clearTerminal() {
    printf("\e[1;1H\e[2J");
}

int main() {
    clearTerminal();
    int i;
    bool programRunning = true; // Ensures that we are inside the while loop at required times
    int binaryArray[] = {0, 0, 0, 0, 0, 0, 0, 0}; // The array for the actual binary numbers is stored in this array
    int inputNumber = 0; // The number which the user will input in the "scanf()" below

    printf("Welcome to the decimal to binary converter!\n");

    while (programRunning == true) { // PRIMARY LOOP FOR THE PROGRAM
        printf("Please enter a number to convert (1-255): ");
        scanf("%d", &inputNumber);

        if (inputNumber <= 255) {

            // USE MODULO FOR THIS!
            

            switch (inputNumber) {
                case 255:
                    binaryArray[0] = 1;
                    binaryArray[1] = 1;
                    binaryArray[2] = 1;
                    binaryArray[3] = 1;
                    binaryArray[4] = 1;
                    binaryArray[5] = 1;
                    binaryArray[6] = 1;
                    binaryArray[7] = 1;
                    break;
                case 128:
                    binaryArray[0] = 1;
                    break;
                case 64:
                    binaryArray[1] = 1;
                    break;
                case 32:
                    binaryArray[2] = 1;
                    break;
                case 16:
                    binaryArray[3] = 1;
                    break;
                case 8:
                    binaryArray[4] = 1;
                    break;
                case 4:
                    binaryArray[5] = 1;
                    break;
                case 2:
                    binaryArray[6] = 1;
                    break;
                case 1:
                    binaryArray[7] = 1;
                    break;
                default:
                    printf("idk");
                    break;
            }

            clearTerminal();
            printf("The binary equivalent to [%d]", inputNumber);
            printf(" is:\n%d",binaryArray);
            Sleep(5000);
            main();

        } else {
            clearTerminal();
            printf("We're sorry, but the number that you entered exceeds the binary limit!");
            Sleep(2000);
            main();
        }

    };
    return 0;
}

// Suggestions on how to solve the problem:

// Create an array for each number so that it can be assigned a 1 or 0 later on
// Use switch and modulo to narrow down if something is a certain letter

// if (inputNumber % 64 = 0) {
//   binaryArray[1] = 1;
//   AND SO ON
// }
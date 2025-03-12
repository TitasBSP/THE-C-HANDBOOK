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
    int number;
    bool programRunning = true; // Ensures that we are inside the while loop at required times
    int binaryArray[8] = {0}; // The array for the actual binary numbers is stored in this array
    int inputNumber = 0; // The number which the user will input in the "scanf()" below
    int binaryNumbers = 128; // Used to divide the input number in while for loop ahead!

    printf("Welcome to the decimal to binary converter!\n"); // Welcome text!

    while (programRunning == true) { // PRIMARY LOOP FOR THE PROGRAM
        clearTerminal();
        printf("Please enter a number to convert (1-255): "); // Asks for input
        scanf("%d", &inputNumber); // Keyword for input
        int number = inputNumber;

        if (number <= 255) { // If-statement where the magic happens
            for (int binaryCounter = 0; binaryCounter < 8; ++binaryCounter) { // binaryCounter goes through all 8 digits of the binary table!
                binaryArray[binaryCounter] = (number / binaryNumbers) ? 1 : 0; // The selected binary number is now checked if it is divisible by the current binaryNumber, right now 128, and if so, it is given a 1
                    if (binaryArray[binaryCounter]) {
                        number -= binaryNumbers; // The current number is subtracted with the binary sequence number and the loop is repeated until binaryCounter goes up to 8
                    }
                    binaryNumbers /= 2; // If the inputNumber is indivisible by the current one, it will be divided by two
            }
            clearTerminal();
            printf("The binary equivalent to [%d]", inputNumber);
            printf(" is: "); // Here's the prompt which the user will see

            for (int i = 0; i < 8; i++) { // Since whole arrays cannot be printed, they have to be fragmented into a for-loop which prints out the elements one by one
                printf("%d", binaryArray[i]);
            }
            printf("\n");
            Sleep(5000);
            clearTerminal();

        } else { // If the number which was entered is higher than 255, the program will notify the user and loop back to the beginning!
            clearTerminal();
            printf("We're sorry, but the number that you entered exceeds the binary limit!");
            Sleep(2000);
        }

    };
    return 0;
}

#include<stdio.h> 
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

// DO NOT RUN THE PROGRAM, THIS IS PURELY VISUAL AND SHOULD GIVE YOU A GENERAL UNDERSTANDING OF C!

    
// ███████╗██╗░░░██╗███╗░░██╗░█████╗░████████╗██╗░█████╗░███╗░░██╗░██████╗
// ██╔════╝██║░░░██║████╗░██║██╔══██╗╚══██╔══╝██║██╔══██╗████╗░██║██╔════╝
// █████╗░░██║░░░██║██╔██╗██║██║░░╚═╝░░░██║░░░██║██║░░██║██╔██╗██║╚█████╗░
// ██╔══╝░░██║░░░██║██║╚████║██║░░██╗░░░██║░░░██║██║░░██║██║╚████║░╚═══██╗
// ██║░░░░░╚██████╔╝██║░╚███║╚█████╔╝░░░██║░░░██║╚█████╔╝██║░╚███║██████╔╝
// ╚═╝░░░░░░╚═════╝░╚═╝░░╚══╝░╚════╝░░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝╚═════╝░

// main() is the main function of the (C) interface!

void FunctionTwo() { // Void indicates that the function does not have a return value.
    printf("Execution finished!");
}

void callToMain(int count) {
    printf("These\n %d", count);
}
void names(char names[]) { // We use a character array to sort names
    printf("people use the inferior VIM IDE: %s\n", names); // We expect to add names later on, so we keep the variable here
}

int g = 5; // This is a global variable, it can be used in ANY function.

// If you need to return a value, then you use one of the keywords instead of VOID to create a function
// REMINDER: VARIABLES CREATED INSIDE FUNCTIONS ARE LOCAL AND WILL ONLY APPLY IN THAT FUNCTION, DO NOT ATTEMPT TO USE THEM OUTSIDE OF IT!

int returnFunction(int x) {
    return 8 + x;
}

int arrayCalculator (int z, int y) {
    return z + y;
}

int sum(int k) {
    if (k > 0) {
        return k + sum(k-1);
    } else {
        return 0;
    }
}

int main() // Main function of the code!
{
    FunctionTwo(); // This is how you call a function

    callToMain(3); // You add an element to the variable inside the outer function, in this case the "callToMain"
    names("Vladimir"); // Here are more examples!
    names("Dimitri");
    names("Kostya");

    printf("Result is: %d", returnFunction(2)); // This will output 10 since we asked the function above to return 8, and here we add 2.

    int arrayForFunction[3];

    arrayForFunction[0] = arrayCalculator(2, 1); // 2 + 1
    arrayForFunction[1] = arrayCalculator(5, 7); // 5 + 7
    arrayForFunction[2] = arrayCalculator(13, 29); // 13 + 29

    for (int i = 0; i < 6; i++) {
        printf("Result%d is = %d\n", i + 1, arrayForFunction[i]);
      } // This for-loop will display the results one by one!

    int result = sum(10); // We used the int sum(int k) function to make a recursion
    printf("%d", result); // Recursions happen when function call themselves over repeatedly
    // In this case in the aforementioned function, the parameter k is used to sum all of the numbers starting from 10 are summed up, i.e. 10 + 9 + 8...
    // When k comes to 0, the function will RETURN 0!

    // MATH FUNCTIONS ARE IMPORTANT, import with #include<math.h>
    
    //////////////////////////////////////////////
    //             MATH FUNCTIONS               //
    //////////////////////////////////////////////
    // sqrt() - Square Root                     //
    // ceil() - rounds up to nearest integer    //
    // floor() - rounds down to nearest integer //
    // pow(x, y) - x to the power of y          //
    //////////////////////////////////////////////

// ████████╗██╗░░██╗███████╗  ██████╗░░█████╗░░██████╗██╗░█████╗░░██████╗
// ╚══██╔══╝██║░░██║██╔════╝  ██╔══██╗██╔══██╗██╔════╝██║██╔══██╗██╔════╝
// ░░░██║░░░███████║█████╗░░  ██████╦╝███████║╚█████╗░██║██║░░╚═╝╚█████╗░
// ░░░██║░░░██╔══██║██╔══╝░░  ██╔══██╗██╔══██║░╚═══██╗██║██║░░██╗░╚═══██╗
// ░░░██║░░░██║░░██║███████╗  ██████╦╝██║░░██║██████╔╝██║╚█████╔╝██████╔╝
// ░░░╚═╝░░░╚═╝░░╚═╝╚══════╝  ╚═════╝░╚═╝░░╚═╝╚═════╝░╚═╝░╚════╝░╚═════╝░

    printf("Hello world\n");// "printf" to print a statement // "\n" to add a new line, "\n\n" to have a space for a new line
    printf("Goodbye world\n\n");// Don't forget your semicolons!

    int myVariable = 42; // Declare the type of variable, set the variable name and then write the value of the variable

    myVariable = 24; // The value can be reassigned to something else

    // "int" for whole numbers, "float" for decimal numbers and "char" for characters

    printf("%d\n", myVariable); // You are required to define the format of your variable before it is output correctly
    // "%d" for integers, "%f" for floats and "%c" for characters!
    printf("The bingo number is: %d\n", myVariable); // The format is defined at the end of your quotes

    int otherVariable = 96; // We defined a second variable to use for the introduction
    myVariable = otherVariable; // Now our previous variable will have the same value as our second variable!

    printf("myVariable are equal to: %d", myVariable);
    printf(" and %d\n", otherVariable); // Now you can check to see that both variables are of the same value!

    int combinationOfValues; // You can create variables without defining them

    combinationOfValues = myVariable + otherVariable; // You can use mathematics to assign other values or combine already defined values to add to the undefined variable


//  ████████╗██╗░░░██╗██████╗░███████╗░██████╗  ░█████╗░███╗░░██╗██████╗░
//  ╚══██╔══╝╚██╗░██╔╝██╔══██╗██╔════╝██╔════╝  ██╔══██╗████╗░██║██╔══██╗
//  ░░░██║░░░░╚████╔╝░██████╔╝█████╗░░╚█████╗░  ███████║██╔██╗██║██║░░██║
//  ░░░██║░░░░░╚██╔╝░░██╔═══╝░██╔══╝░░░╚═══██╗  ██╔══██║██║╚████║██║░░██║
//  ░░░██║░░░░░░██║░░░██║░░░░░███████╗██████╔╝  ██║░░██║██║░╚███║██████╔╝
//  ░░░╚═╝░░░░░░╚═╝░░░╚═╝░░░░░╚══════╝╚═════╝░  ╚═╝░░╚═╝╚═╝░░╚══╝╚═════╝░
//  
//  ░█████╗░██████╗░███████╗██████╗░░█████╗░████████╗░█████╗░██████╗░░██████╗
//  ██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔══██╗╚══██╔══╝██╔══██╗██╔══██╗██╔════╝
//  ██║░░██║██████╔╝█████╗░░██████╔╝███████║░░░██║░░░██║░░██║██████╔╝╚█████╗░
//  ██║░░██║██╔═══╝░██╔══╝░░██╔══██╗██╔══██║░░░██║░░░██║░░██║██╔══██╗░╚═══██╗
//  ╚█████╔╝██║░░░░░███████╗██║░░██║██║░░██║░░░██║░░░╚█████╔╝██║░░██║██████╔╝
//  ░╚════╝░╚═╝░░░░░╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░░╚════╝░╚═╝░░╚═╝╚═════╝░

    float myFloatie = 3.14; // float stores up to six or even decimal digits
    double leFloatie = 97E8; // double doubles that to around 15

    printf("The world works with numbers around: %.2f", myFloatie); // You can limit the amount of decimals after the whole number by adding a dot and your limit between % and f, like %.2f
    printf(" and %.1lf", leFloatie); // Remember that "lf" is used for the double!

    ///////////////////////////
    // IMPORTANT MEMORY RULE //
    // INT: 2-4 BYTES        //
    // FLOAT: 4 BYTES        //
    // DOUBLE: 8 BYTES       //
    // CHAR: 1 BYTE          //
    ///////////////////////////

    printf("%lu\n", sizeof(combinationOfValues)); // use "%lu" to locate the sizeof keyword, then encapsulate your variables inside of "sizeof()" for it to display the amount of memory the variable is using

    char dolories = "$"; // We create a character variable for use in our next chapter
    printf("The price of this product is: %d %c\n", myVariable, dolories); // To have multiple formats, put them in the correct order of the variables which will be displayed

    float myLength = 18;
    printf("%f", myLength); // The C Language will automatically convert an integer into a float

    float floatingScore = (float) myLength / myFloatie; // We use "(float)" to manually convert the variables into a different data type, in this case we have one float and one integer, and the end result will be a single float number
    printf("\n\nThe answer is: %.2f", floatingScore); // Here is the output of our conversion

    const int Natalie = 22; // Keeps this variable as a constant, prevents from changing
    // !!! DO NOT CHANGE IT UNLESS YOU WANT AN ERROR BARRAGE !!!

    ///////////////////////////       //////////////////////////       /////////////////////////////
    // OPERATORS             //       // ASSIGNMENT OPERATORS //       // COMPARISON OPERATORS    //
    // + for addition        //       // += 3 = (x=x+3)       //       // == for equal to         //
    // - for subtraction     //       // -= 3 = (x=x-3)       //       // != for not equal to     //
    // * for multiplication  //       // *= 3 = (x=x*3)       //       // > for greater than      //
    // / for division        //       // /= 3 = (x=x/3)       //       // < for less than         //
    // % for modulus         //       // %= 3 = (x=x&3)       //       // >= for greater or equal //
    // ++ for increment      //       //                      //       // <= for less or equal    //
    // -- for decrement      //       //                      //       //                         //
    // && for and            //       //                      //       //                         //
    // || for or             //       //                      //       //                         //
    // ! for not             //       //                      //       //                         //
    ///////////////////////////       //////////////////////////       /////////////////////////////

    // Booleans are used to check if a statement or variable true or false, PLEASE INCLUDE "#include<stdbool.h>" when using it!
    bool isNatalieAwesome = true;
    bool isDeenGoodAtDriving = false;
    // Use "%d" to return boolean values :)

    printf("%d", 10 == 10); // Returns 1, (true)
    printf("%d", 120 == 150); // Returns 0, (false)

    
// ██╗███████╗██╗░██████╗  ░█████╗░███╗░░██╗██████╗░  ██╗░░░░░░█████╗░░█████╗░██████╗░░██████╗
// ██║██╔════╝╚█║██╔════╝  ██╔══██╗████╗░██║██╔══██╗  ██║░░░░░██╔══██╗██╔══██╗██╔══██╗██╔════╝
// ██║█████╗░░░╚╝╚█████╗░  ███████║██╔██╗██║██║░░██║  ██║░░░░░██║░░██║██║░░██║██████╔╝╚█████╗░
// ██║██╔══╝░░░░░░╚═══██╗  ██╔══██║██║╚████║██║░░██║  ██║░░░░░██║░░██║██║░░██║██╔═══╝░░╚═══██╗
// ██║██║░░░░░░░░██████╔╝  ██║░░██║██║░╚███║██████╔╝  ███████╗╚█████╔╝╚█████╔╝██║░░░░░██████╔╝
// ╚═╝╚═╝░░░░░░░░╚═════╝░  ╚═╝░░╚═╝╚═╝░░╚══╝╚═════╝░  ╚══════╝░╚════╝░░╚════╝░╚═╝░░░░░╚═════╝░

    // IF-STATEMENT - Needs to meet a certain condition to be true or false, can add an else block afterwards to signal an action to be done if it's none of the above
    if (isNatalieAwesome == true) {
        printf("\nYIPEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
    } else if (isDeenGoodAtDriving != false) { // Add an else-if to provide more statements to be checked
        printf("\nDEEEEEEEEEEEN YOU DID IT!!!!!!!!!!\n");
    } else {
        printf(";(");
    }

    // SHORT HAND IF-STATEMENT - Useful when there are no else-ifs - saves code space while being easily readable because it's made up of (STATEMENT - TRUE EXPRESSION - FALSE EXPRESSION)
    int clock = 12;
    (clock == 12) ? printf("It's HIGH NOON!\n") : printf("Aw damn.");


    int gold_membership = 1; // We define our variable to use for the next keyword!
    switch (gold_membership) { // SWITCH is used for when you have several else-ifs and you need them to look nicer, and they most often do because cases are just easier to keep track of!
        case 1:
            printf("Enjoy our privileges at this establishment!\n");
            break;
        case 2:
            printf("You must upgrade to get access to these privileges!\n");
            break;
        default: // If none of the above terms match the cases, you can add a default that waits for the switch case to be used again when a case applies.
        printf("Bababooey..."); 
    } // You can have practically infinite cases, but 2 are enough for this boolean :)

    float bucket = 0;

    while (bucket <= 10) { // While loops are used to wait until a certain condition is met, like for example waiting until a bucket is filled up to 10L of liquid!
        printf("Waiting for bucket to fill... %f", bucket);
        printf("L\n");
        bucket++;
    }

    bucket = 0;

    do { // Here you put the code that has to be executed once, and then repeated until the condition inside the while loop is true.
        printf("%f\n", bucket);
        bucket++;
    }
    while (bucket < 8); // It means that the code is executed at least one time before being checked by the while condition again, before being either repeated or skipped.

    for (bucket = 20; bucket < 100; bucket++) { // For-loops are used to have a loop for a certain amount of time instead of while something is true
        printf("Filling up: %f", bucket);
        printf("L\n");
    } // Expression 1 is executed before the code block, Expression 2 defines the condition for executing the block, Expression 3 is executed AFTER the block has been executed!

    float ladybug = 1;
    float cockroach = 3;

    for (ladybug = 1; ladybug < 5; ladybug++) { // This is nested code, it will commit multiple keywords to one place and let you execute multiple loops and so on.
        printf("Nested outside count: %f\n", ladybug);

        for (cockroach = 1; cockroach < 6; cockroach++) {
            printf("Nested inside count: %f\n", cockroach);
    
        } // This part of the code will run 30 times (5 * 6)
    } // This part of the code will only run 3 times like intended

    for (bucket = 1; bucket < 11; bucket++) {
        if (bucket == 5) {
            break; // Break is used to JUMP out of a loop, in this example the loop will break if "bucket" reaches 5.
            continue; // Continue is used to keep the loop going after a specific condition is met.
        }
        printf("%f\n");
    } 


// ░█████╗░██████╗░██████╗░░█████╗░██╗░░░██╗░██████╗
// ██╔══██╗██╔══██╗██╔══██╗██╔══██╗╚██╗░██╔╝██╔════╝
// ███████║██████╔╝██████╔╝███████║░╚████╔╝░╚█████╗░
// ██╔══██║██╔══██╗██╔══██╗██╔══██║░░╚██╔╝░░░╚═══██╗
// ██║░░██║██║░░██║██║░░██║██║░░██║░░░██║░░░██████╔╝
// ╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═════╝░
 
    int numberList[] = {1, 2, 3, 4, 5}; // This is an array, it holds multiple integers, characters or strings. Use [] to define an array in a variable
    printf("%d", numberList[2]); // The list outputs the third number on the list, which is number 3
    
    numberList[1] = 45; // You link the relative number and then add your change
    printf("\n%d", numberList[1]); // <--- Now you can check if it outputs 45

    int i; // We define the variable beforehand
    int newList[5]; // You can declare an array with a set of integers and add elements later on

    newList[0] = 94;
    newList[1] = 188;
    newList[2] = 376;
    newList[3] = 752;

    printf("%d", newList); // You can confirm this by using printf
    // DO NOT MIX DATA TYPES IN ARRAYS

    printf("%lu", sizeof(newList)); // Prints 16 because each integer is worth 4 bytes, 4 times 4 is 16 bytes!
    
    int lengthOfArray = sizeof(newList) / sizeof(newList[0]); // This calculation shows how many elements you have in an array
    printf("%d", lengthOfArray);

    
    int multiDimensionalArray[2][3] = {{1, 3, 5}, {2, 4, 6}}; // This 2D array has 2 rows and 3 columns marked by the numbers after the variable
    
              // VISUALIZATION OF THE ARRAY //
    ///////////////////////////////////////////////////////
    /////////////// COLUMN 0 //// COLUMN 1 //// COLUMN 2 //
    /////// ROW 0 /     1    ////    3     ////     5    //
    /////// ROW 0 /     2    ////    4     ////     6    //
    ///////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////

    printf("%d", multiDimensionalArray[1][1]); // It outputs 4.


    // To create a string in C, we use a CHAR array
    char greeting[] = "Hello there";
    printf("%s", greeting); // Rememeber to use the %s format

    greeting[6] = 'T';
    greeting[10] = 'a';
    printf("%s", greeting); // We can modify strings to display different words, now it will display "Hello Thera!"

    char individualWord[] = "Bababooey";
    int f;

    for (f = 0; f < 9; f++) {
        printf("%c\n", individualWord[f]);
    } // THIS LOOP makes it so that each individual letter of individualWord[] is displayed on a new line

    printf("%s, %s!", greeting, individualWord); // Combine two strings to put one format after another and then the variables after each other!


//  ███╗░░░███╗██╗░██████╗░█████╗░███████╗██╗░░░░░██╗░░░░░░█████╗░███╗░░██╗███████╗░█████╗░██╗░░░██╗░██████╗
//  ████╗░████║██║██╔════╝██╔══██╗██╔════╝██║░░░░░██║░░░░░██╔══██╗████╗░██║██╔════╝██╔══██╗██║░░░██║██╔════╝
//  ██╔████╔██║██║╚█████╗░██║░░╚═╝█████╗░░██║░░░░░██║░░░░░███████║██╔██╗██║█████╗░░██║░░██║██║░░░██║╚█████╗░
//  ██║╚██╔╝██║██║░╚═══██╗██║░░██╗██╔══╝░░██║░░░░░██║░░░░░██╔══██║██║╚████║██╔══╝░░██║░░██║██║░░░██║░╚═══██╗
//  ██║░╚═╝░██║██║██████╔╝╚█████╔╝███████╗███████╗███████╗██║░░██║██║░╚███║███████╗╚█████╔╝╚██████╔╝██████╔╝
//  ╚═╝░░░░░╚═╝╚═╝╚═════╝░░╚════╝░╚══════╝╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝╚══════╝░╚════╝░░╚═════╝░╚═════╝░

    ///////////////////////////
    //   SPECIAL CHARACTERS  //
    // "\'" = Single Quote   //
    // "\"" = Double Quote   //
    // "\\" = Backslash      //
    // "\t" = TAB            //
    // "\0" = Null           //
    ///////////////////////////

    char specialChar[] = "\nThis \'Sentence\' \"Includes\" all \\ special \t characters \0";
    printf("%s", specialChar);

    ///////////////////////////
    //   STRING FUNCTIONS    //
    //  #INCLUDE <STRING.H>  //
    // strlen() = length     // Length of a variable:                       USED LIKE THIS -> strlen("Hi"); will return 2
    // sizeof() = byte-size  // Amount of bytes in a variable:              USED LIKE THIS -> printf("%c\n", "S") will return 1
    // strcat() = concant    // Concantenate multiple variables into one:   USED LIKE THIS -> (source, to be added, etc.);
    // strcpy() = copy       // Copies a variable into another one:         USED LIKE THIS -> (to be copied, source);
    // strcmp() = compare    // Compares existing variables to one another: USED LIKE THIS -> printf("%d\n, strcmp("bruh", "booba"); will return 1
    ///////////////////////////

    // USER INPUTS are written with the "scanf" keyword, just like printf's
    int inputNumber;
    char currencies;

    printf("Hey, give me a number: ");
    scanf("%d", &inputNumber); // Remember to use a "&" to append the input, append means add BTW
    printf("Now give me a letter as a currency: ");
    scanf("%c", &currencies);

    printf("Your sum is: %d %c", inputNumber, currencies);

    int memory = 27; 
    printf("%p", &memory); // "%p" outputs the memory address of the variable

    // POINTERS: Variable that stores the memory address of another variable as its value
    // Points to a certain data type (int, char, etc.), and you use the "*" operator for it

    int Titas = 18;
    int* ptr = &Titas;
    printf("%d\n", Titas); // Outputs the int value
    printf("%p\n", &Titas); // Outputs the memory address of "Titas"
    printf("%d\n", ptr); // Outputs the memory address of "Titas" with "ptr"

    printf("%d\n", *ptr); // This will dereference and output the int value

    // Pointers in arrays can be used to display the memory addreses for all variables

    i = 0;
    int primeNumbers[7] = {2, 3, 5, 7, 11, 13, 17};

    for (i = 0; i < 7; i++) {
        printf("%p\n", &primeNumbers);
    }

    printf("%p\n", &primeNumbers[2]); // You can point to a specific value from the array to acquire its memory address

    *(primeNumbers +2) = 19; // You can change values with pointers as well!

    

//  ███████╗██╗██╗░░░░░███████╗  ███╗░░░███╗░█████╗░███╗░░██╗░█████╗░░██████╗░███████╗███╗░░░███╗███████╗███╗░░██╗████████╗
//  ██╔════╝██║██║░░░░░██╔════╝  ████╗░████║██╔══██╗████╗░██║██╔══██╗██╔════╝░██╔════╝████╗░████║██╔════╝████╗░██║╚══██╔══╝
//  █████╗░░██║██║░░░░░█████╗░░  ██╔████╔██║███████║██╔██╗██║███████║██║░░██╗░█████╗░░██╔████╔██║█████╗░░██╔██╗██║░░░██║░░░
//  ██╔══╝░░██║██║░░░░░██╔══╝░░  ██║╚██╔╝██║██╔══██║██║╚████║██╔══██║██║░░╚██╗██╔══╝░░██║╚██╔╝██║██╔══╝░░██║╚████║░░░██║░░░
//  ██║░░░░░██║███████╗███████╗  ██║░╚═╝░██║██║░░██║██║░╚███║██║░░██║╚██████╔╝███████╗██║░╚═╝░██║███████╗██║░╚███║░░░██║░░░
//  ╚═╝░░░░░╚═╝╚══════╝╚══════╝  ╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝░╚═════╝░╚══════╝╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚══╝░░░╚═╝░░░

    // FILE MANAGEMENT
    // By defining a pointer of type FILE, and using the fopen() function to create, open and read files
    FILE *fptr;
    fptr = fopen("filename", "mode"); // Ignore the quotes

    // filename is the actual name of the file, like "kasskaitystasgaidys.txt"
    // mode is a single char which represents if you want to w - overwrite to a file, a - append new data to a file, r - read from a file

    // REAL EXAMPLE
    fptr = fopen("kasskaitystasgaidys.txt", "w"); // The file will be by default created in the same directory as the C file

    fprintf(fptr, "Random"); // fprintf to print to the file, fptr to select the pointer and then write your text in the quotes
    fclose(fptr); // Remember to close the file after use

    fptr = fopen("kasskaitystasgaidys.txt", "a"); // Now the content added will add to the file without overwriting anything!
    fprintf(fptr, "\nI agree!");
    fclose(fptr); 

    fptr = fopen("kasskaitystasgaidys.txt", "r"); // This will allow you to read the file.
    char storage[100]; // Now you can store up to 100 characters of the file!
    
    fgets(storage, 100, fptr); // use fgets() to read the content of the file
    // FIRST PARAMETER: WHERE TO STORE THE FILE CONTENT
    // SECOND PARAMETER: MAXIMUM SIZE OF DATA TO READ
    // THIRD PARAMETER: FILE POINTER, LIKE FPTR

    printf("%s", storage);
    // Now the content of "kasskaitystasgaidys.txt" will be printed out to the user!

    if(fptr == NULL) {
        printf("Not able to open the file.");
      } // It's good practice to have this in case your file has no content!
    
    fclose(fptr);


//  ░██████╗████████╗██████╗░██╗░░░██╗░█████╗░████████╗██╗░░░██╗██████╗░███████╗░██████╗
//  ██╔════╝╚══██╔══╝██╔══██╗██║░░░██║██╔══██╗╚══██╔══╝██║░░░██║██╔══██╗██╔════╝██╔════╝
//  ╚█████╗░░░░██║░░░██████╔╝██║░░░██║██║░░╚═╝░░░██║░░░██║░░░██║██████╔╝█████╗░░╚█████╗░
//  ░╚═══██╗░░░██║░░░██╔══██╗██║░░░██║██║░░██╗░░░██║░░░██║░░░██║██╔══██╗██╔══╝░░░╚═══██╗
//  ██████╔╝░░░██║░░░██║░░██║╚██████╔╝╚█████╔╝░░░██║░░░╚██████╔╝██║░░██║███████╗██████╔╝
//  ╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░░░╚═╝░░░░╚═════╝░╚═╝░░╚═╝╚══════╝╚═════╝░

    struct Structure { // This is a structure, they allow to have multiple data types unlike arrays, instead of elements, the contents are labeled as members.
        int skaichius; // Member (int)...
        char raide;
        char zodis[50];
        float taskas;
    }; // These can be defined outside of the main function

    // To actually use the structure, you need to create a variable which is assigned to the structure
    struct Structure StrcVar;

    // You define the variable with the structure variable and then the member which is inside of the structure!
    StrcVar.skaichius = 11;
    StrcVar.raide = "V"; // Note that you CANNOT make char arrays to turn into strings the normal way. Disappointing, am i right??
    strcpy(StrcVar.zodis, "Nebeprisikiskiakopusteliaudavome"); // You use STRCPY() to copy string 
    StrcVar.taskas = 0.01;

    printf("Mano skaicius yra: %d\n", StrcVar.skaichius); // Same is done in any other use case!

    struct Structure StrcVar = {22, 'D', "Negali Buti!", 1.00}; // You can also define them in this order to simplify the syntax 

    struct Structure StrcLet; // Defining a new structure for the next showcase

    StrcLet = StrcVar; // We copy the attributes of StrcVar and paste them into StrcLet

    strcpy(StrcLet.skaichius, 42); // If you have multiple structures, you use strcpy() to change individual attributes by specifying the variable of the structure, then the element and then what it should be defined as.

    // ALL AND ALL, STRUCTURES LET YOU HAVE A DATABASE OF SORTS!


//  ███████╗███╗░░██╗██╗░░░██╗███╗░░░███╗░██████╗
//  ██╔════╝████╗░██║██║░░░██║████╗░████║██╔════╝
//  █████╗░░██╔██╗██║██║░░░██║██╔████╔██║╚█████╗░
//  ██╔══╝░░██║╚████║██║░░░██║██║╚██╔╝██║░╚═══██╗
//  ███████╗██║░╚███║╚██████╔╝██║░╚═╝░██║██████╔╝
//  ╚══════╝╚═╝░░╚══╝░╚═════╝░╚═╝░░░░░╚═╝╚═════╝░

    // SPECIAL TYPE THAT REPRESENTS A GROUP OF CONSTANTS

    enum Level {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    }; // If you define only one of the elements, the other will either be one less or more than each other unless defined otherwise

    // USEFUL TO PREVENTS CHANGES IN VARIABLES THAT HAVE TO STAY THE SAME

    enum Level enumerations; // Create a variable to access the enums

    enum Level enumerations = MEDIUM; // You can assign values to the variable, but it must be inside the enum.

    printf("%d", enumerations); // Will output 50

    
//  ███╗░░░███╗███████╗███╗░░░███╗░█████╗░██████╗░██╗░░░██╗
//  ████╗░████║██╔════╝████╗░████║██╔══██╗██╔══██╗╚██╗░██╔╝
//  ██╔████╔██║█████╗░░██╔████╔██║██║░░██║██████╔╝░╚████╔╝░
//  ██║╚██╔╝██║██╔══╝░░██║╚██╔╝██║██║░░██║██╔══██╗░░╚██╔╝░░
//  ██║░╚═╝░██║███████╗██║░╚═╝░██║╚█████╔╝██║░░██║░░░██║░░░
//  ╚═╝░░░░░╚═╝╚══════╝╚═╝░░░░░╚═╝░╚════╝░╚═╝░░╚═╝░░░╚═╝░░░

    // INCLUDE <stdlib.h> for this part!
    // Memory management can be very important! Use it to specify the amount of memory you want something to use!

    int *memoryAllocation = malloc("size"); // Malloc allocates the amount of memory that you write in the malloc() keyword, IN BYTES!
    int *directMemoryAllocation = calloc("amount", "size"); // Calloc allocates the memory but in a more specific way: "Amount" specifies the amount of items to allocate, "Size" specifies the size of each item measured in bytes!

    // You should usually use the sizeof() operator to allocate memory! :)
    // Calloc() is usually the better option

    ptr[0] = 12; // You can access an element in an array by refering to its index number!
    *ptr = 12;

    // Allocate memory here!
    int *pointer;
    pointer = calloc(4, sizeof(*pointer));

    // Write to memory here!
    *pointer = 8;
    pointer[1] = 4;
    pointer[2] = 1;

    // Read from memory!
    printf("%d\n", *pointer);
    printf("%d %d %d", ptr[0], pointer[1], pointer[2]);

    // You can realocate memory to make it larger!
    int *pointerTwo = realloc(pointer, 32); // This will give more memory to "*pointer"
    
    // TIP: Have a failsafe by having an if statement that checks if the following pointer is "NULL" to avoid the program from breaking!

    // free() will remove all allocated memory from the pointer!
    free(pointer);

    return 0; // Have this at the end of your code as a rule of thumb!
}



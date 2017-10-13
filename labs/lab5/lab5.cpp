// Joshua Tate
// Lab 5 Exercise
//
// This program asks the user to enter a number in the range
//  3..15 (inclusive), then draws a square box made up of
//  asteriks, of the size x * x, where x is the value the user entered.
#include <cstdio>

// MinVal represents the smallest accepted value in range of
//  valid user input
const int MinVal = 3;

// MaxVal represents the largest accepted value in range of
//  valid user input
const int MaxVal = 15;

// welcome() displays an appropriate welcome message to the user,
//  and explains the purpose of the program.
void welcome();

// getSizeInRange(int minVal, int maxVal) asks the user for a value in the
//  range minVal..maxVal (inclusive).
// minVal represents the smallest valid value, and
// maxVal represents the largest valid value
// getSizeInRange will repeatedly prompt the user for a valid value until
//  one is given.
int getSizeInRange(int minVal, int maxVal);

// drawBoxOfSize(int size) will draw a box made up of asteriks, with
//  dimensions size * size
void drawBoxOfSize(int size);

/* MAIN */
int main() {
    // Display welcome message and explain purpose of program
    welcome();
    // Get size in range MinVal..MaxVal (inclusive)
    int size = getSizeInRange(MinVal, MaxVal);
    // Draw a box of size * size
    drawBoxOfSize(size);
    // Exit program
    printf("done!\n");
    return 0;
}
/* END MAIN */

void welcome() {
    // Display welcome message and explain purpose and usage of program
    printf("Welcome to the box drawing program!\n\n");
    printf("This program will draw a square box on the screen,\n");
    printf("allowing you to select the box size.\n\n");
}

int getSizeInRange(int minVal, int maxVal) {
    // userVal represents the users input
    // scanfResult represents the value returned by scanf, indicating
    //  whether or not user entered proper data type.
    int userVal, scanfResult;
    // userInputIsValid is a boolean used to keep track of whether or
    //  not the user has entered valid input. Initial value is false
    bool userInputIsValid = false;
    do {
	// Prompt the user for a value in range minVal..maxVal (inclusive)
	printf("Please enter the box size as in integer ");
	printf("in the range %d..%d (inclusive).\n", minVal, maxVal);
	// Store result of scanf in scanfResult
	scanfResult = scanf("%d", &userVal);
	// Check for proper input
	if (scanfResult == 0) {
	    // If scanfResult is equal to 0, the user did not enter data
	    //  of proper type, set userInputIsValid to false
	    userInputIsValid = false;
	    // Explain to user that they entered a non integer value, ask
	    //  them to try again.
	    printf("Sorry, that was not an integer value, ");
	    printf("please try again.\n");
	    // Clear the input buffer of improper data
	    scanf("%*s");
	} else if ((userVal < minVal) || (userVal > maxVal)) {
	    // If user input is out of acceptable range, set
	    //  userInputIsValid to false
	    userInputIsValid = false;
	    // Explain to user that the value they entered in not in the
	    //  proper range, ask them to try again.
	    printf("Sorry, %d is not in the range %d..%d, ",
		   userVal, minVal, maxVal);
	    printf("please try again.\n");
	} else {
	    // User input is valid, set userInputIsValid to true
	    userInputIsValid = true;
	}
    } while (!userInputIsValid); // Repeat loop if user input is not valid
    // Return the users input
    return userVal;
}

void drawBoxOfSize(int size) {
    // The outer body for loop will draw the boxes height, drawing
    //  a height equal to size
    for (int i = 0; i < size; i++) {
	// The inner body for loop will draw the boxes width, drawing
	//  a width equal to size
	for (int j = 0; j < size; j++) {
	    // Print asterik to represent unit of width
	    printf("*");
	}
	// Print new line before drawing the next unit of height
	printf("\n");
    }
}

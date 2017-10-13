// Joshua Tate
// Lab 5 Exercise
//
// This program asks the user to enter a number in the range
//  3..15 (inclusive), then draws a square box made up of
//  asteriks, of the size x * x, where x is the value the user entered.
#include <cstdio>

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

// drawBoxOfSize(int size) will draw a box made up of asteriks, of size
//  size * size
void drawBoxOfSize(int size);

/* MAIN */
int main() {
    // display welcome message and explain purpose of program
    welcome();
    // get size in range 3..15 (inclusive)
    int size = getSizeInRange(3,15);
    // draw a box of size * size
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
    int userVal, scanfResult;
    bool userInputInvalid = true;
    do {
	// prompt the user for a value in range minVal..maxVal (inclusive)
	printf("Please enter the box size as in integer ");
	printf("in the range %d to %d (inclusive).\n", minVal, maxVal);
	scanfResult = scanf("%d", &userVal);
	if (scanfResult == 0) {
	    userInputInvalid = true;
	    printf("Sorry, that was not an integer value, please try again.\n");
	    scanf("%*s");
	} else if (userVal < minVal || userVal > maxVal) {
	    userInputInvalid = true;
	    printf("Sorry, %d is not in the range %d to %d, please try again.\n",
		   userVal, minVal, maxVal);
	} else {
	    userInputInvalid = false;
	}
    } while (userInputInvalid);
    return userVal;
}

void drawBoxOfSize(int size) {
    for (int i = 0; i < size; i++) {
	for (int j = 0; j < size; j++) {
	    printf("*");
	}
	printf("\n");
    }
}
